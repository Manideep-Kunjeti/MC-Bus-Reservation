#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,choice;
  string name;
  //welcome page
  cout<<"Welcome to MCBus,Bus Tickets booking Platform<<endl<<Journey for your dreams"<<endl;
  cout<<"\t\t Services offered\n 1.Book a ticket\t 2.Get Ticket Details \n 3.Ticket Cancellation\t 4.Manage your bookings\nchoose your choice;
  cin>>choice;
  switch(choice)
  case 1 : book()
    break;
  case 2 : details()
    break;
  case 3 :  cancel()
    break;
  case 4:  manage()
    break;
  
    return 0;
}  


void book()
{ int date,month,year;
  string from,to,name,mob;
  cout<<"Please enter your name and mobile number";
  cin>>name>>mob;
  cout<<"From: "; cin>>from;
  cout<<"\tTo: "; cin>>to;
  cout<<"Date of Journey: " cin<<date<<month<<year;

}
  
  



