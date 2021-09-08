#include<bits/stdc++.h>
#include<conio.h>
#include<fstream>
#include<windows.h>

using namespace std;

class bus
{
    public:
        void signup();
        void login();
        void menu();
};

void bus::signup()
{
        system("cls");
        string email,paswrd;
        char ch;
        cout<<"\t\t\t\t\t-------:::Signup:::-------"<<endl<<endl;
        cout<<"\t\t\t\t\t"<<"    "<<"Email    : ";
        cin>>email;
        cout<<"\n\t\t\t"<<"    "<<"Password [8 characters]  : ";
        for(int i=0 ; i<8 ; i++)
        {
            ch=getch();
            paswrd=paswrd+ch;
            cout<<"*";
        }
        cout<<endl<<endl;
        cout<<"\t\t\t\t\t"<<"  "<<"Signedup successfully"<<endl<<endl;
        cout<<"Press any key to continue";
        for(int i=0; i<5 ; i++)
        {
         Sleep(300);
         cout<<".";
        }
        ofstream file;
        file.open("data" + email + ".txt");
        file<<email<<endl<<paswrd;
        file.close();
        getch();
}

void bus::login()
{
    system("cls");
    bus b;
    string email,paswrd,email1,paswrd1;
    char ch;
    cout<<"\t\t\t\t\t-------:::Login:::-------"<<endl<<endl;;
    cout<<"\t\t\t\t\t"<<"  "<<"Email    : ";
    cin>>email1;
    cout<<"\n\t\t\t\t\t"<<"  "<<"Password : ";
    for(int i=0; i<8 ; i++)
    {
        ch=getch();
        paswrd1=paswrd1+ch;
        cout<<"*";
    }
    cout<<"\n\n\t\tPassword verification is under process. Please wait!";
    for(int i=0; i<5 ; i++)
        {
         Sleep(300);
         cout<<"..";
        }
    ifstream read;
    read.open("data" + email1 + ".txt");
    getline(read,email);
    getline(read,paswrd);
    read.close();
    if(email == email1 && paswrd == paswrd1)
    {
        cout<<"\n\n\t\t\t\t\t"<<"  "<<"Loggedin successfully\n\n";
        Sleep(500);
        b.menu();
        // getch();
    }
    else
    {
        cout<<"\n\n\t\t\t\tInvalid Credentials, Please try again"<<endl<<endl;
        cout<<"Press any key to continue";
        for(int i=0; i<5 ; i++)
        {
         Sleep(300);
         cout<<".";
        }
        getch();
    }
}

void bus::menu(){
    while(1)
    {
        system("cls");
        int choice;
        cout<<"\t\t\t\t\t\t**** Menu ****";
        cout<<"\n\n>>> 1.";
        cout<<"\n>>> 2.";
        cout<<"\n>>> 3.";
        cout<<"\n>>> 4.";
        cout<<"\n>>> 5.Exit";
        cout<<"\n\nEnter choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
               
               break;
            case 2: 
               
               break;
            case 3: 
               
               break;
            case 4: 
               
               break;
            case 5: 
               exit(0);
        }
    }
    getch();
}

int main()
{
    bus b;
    while(1) 
    {
        system("cls");
        cout<<"\t\t\t\t\t";
        for(int i=0; i<25 ; i++)
        {
            Sleep(40);
            cout<<"-";
        }
        cout<<"\n\t\t\t\t\t"<<"   "<<"MC BUS RESERVATION";
        cout<<"\n\t\t\t\t\t";
        for(int i=0; i<25 ; i++)
        {
            Sleep(40);
            cout<<"-";
        }
        cout<<endl<<endl<<endl<<endl;
        int choice;
        cout<<"\t\t\t\t\t\t"<<"1.SignUp"<<endl;
        cout<<"\t\t\t\t\t\t"<<"2.Login"<<endl;
        cout<<"\t\t\t\t\t\t"<<"3.Exit"<<endl;
        cout<<"\t\t\t\t\t\t"<<"Enter choice: ";
        cin>>choice;
    
        switch(choice)
        {
            case 1:
                 b.signup();
                 break;
            case 2:
                 b.login();
                 break;
            case 3:
                 exit(0);
            default:
                 cout<<"Re-Enter correct choice";
             
        }
    }   
}
