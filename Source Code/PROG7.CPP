#include<iostream.h>
#include<process.h>
#include<stdio.h>

class publication
{
  private:
   char title[80];
   float price;
  public:
   void getdata();
   void putdata();
};
class book:public publication
{
  private:
   int pagecount;
  public:
   void getdata();
   void putdata();
};
class tape:public publication
{
  private:
   float playingtime;
  public:
   void getdata();
   void putdata();
};

void publication::getdata()
{
  cout<<"\nEnter the title of a book:";
  gets(title);
  cout<<"\nEnter the price:";
  cin>>price;
}
void publication::putdata()
{
  cout<<"\nTitle of a string:"<<title;
  cout<<"\nPrice:"<<price;
}

void book::getdata()
{
  cout<<"\nEnter the details of the book";
  publication::getdata();
  cout<<"\nEnter the pagecount:";
  cin>>pagecount;
}
void book::putdata()
{
  cout<<"\nDetails of the book";
  publication::putdata();
  cout<<"\nPage count:"<<pagecount;
}

void tape::getdata()
{
  cout<<"\nEnter the details of the tape";
  publication::getdata();
  cout<<"\nEnter the playing time(min):";
  cin>>playingtime;
}
void tape::putdata()
{
  cout<<"\nDetails of the tape";
  publication::putdata();
  cout<<"\nPlaying time(min):"<<playingtime;
}
void main()
{
  system("cls");
  book b1;
  tape t1;
  b1.getdata();
  t1.getdata();
  b1.putdata();
  t1.putdata();
 system("pause");
}
