#include<iostream.h>
#include<conio.h>
#include<string.h>
class Tour
{
       int LocationCode;
       char Location[20];
       float Charges;
   public:
       Tour()
       {
	   LocationCode=1;
	   strcpy(Location,"PURI");
	   Charges=1200;
       }
       ~Tour()
       {
	   cout<<"Tour Plan Cancelled....";
       }
       void getdata();
       void showdata();
};
void Tour::getdata()
{
   cout<<"\nEnter the Location:";
   cin>>Location;
   cout<<"\nEnter the location code:";
   cin>>LocationCode;
   Charges=1600;
}
void Tour::showdata()
{
   cout<<"\nLocation:"<<Location;
   cout<<"\nLocation Code:"<<LocationCode;
   cout<<"\nCharges="<<Charges;
}
void main()
{
    clrscr();
    Tour T;
    T.getdata();
    T.showdata();
    getch();
}