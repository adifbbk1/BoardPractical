#include<iostream.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>

struct multi
{
   long int r1,r2,total;
}s;

long r1,r2;

void easy(multi &s)
{
   s.r1=random(20)+1;
   s.r2=random(10)+1;
}
void medium(multi &s)
{
   s.r1=random(90)+11;
   s.r2=random(90)+11;
}
void hard(multi &s)
{
   s.r1=random(900)+101;
   s.r2=random(900)+101;
}

void calc(multi &c)
{
   c.total=c.r1*c.r2;
}

int main()
{
   system("cls");
   randomize();
   int guess,points=0;
   char ch;
   cout<<"M U L T I P L I C A T I O N    G A M E"
       <<"\n* * * * * * MENU * * * * * *"
       <<"\n1. Kids level"
       <<"\n2. Legends level"
       <<"\n3. Ultra-Legends level"
       <<"\n\nEnter your choice:>";
   cin>>ch;
   system("cls");
   for(int i=0;i<5;i++)
   {
      switch(ch)
      {
	 case '1': easy(s);
		   break;
	 case '2': medium(s);
		   break;
	 case '3': hard(s);
		   break;
	 default:  cout<<"You are fool\nDon't give wrong choices";
		   exit(0);
      }
      calc(s);
      cout<<s.r1<<" * "<<s.r2<<" = ";
      cin>>guess;
      if(guess==s.total)
      {
	 points++;
	 cout<<"Correct\n";
      }
      else cout<<"Wrong\nCorrect is:"<<s.total<<endl;
      delay(1000);

   }
   cout<<"You have scored "<<points*10<<" points out of 50"<<endl;
   system("pause");
   return 0;
}
