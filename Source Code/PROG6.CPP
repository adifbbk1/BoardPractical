#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<conio.h>
class publication
{
  private:
     char title[30];
     float price;
  public:
     void getdata();
     void putdata();
};
class book:public publication
{
  private:
    int  page_count;
  public:
    book()
    {
       cout<<"\n\nBook:";
    }
    void getdata();
    void putdata();
};
class tape:public publication
{
  private:
    float playing_time;
  public:
    tape()
    {
       cout<<"\n\nTape:";
    }
    void getdata();
    void putdata();
};
void publication::getdata()
{
    cout<<"\nEnter the title:";
    gets(title);
    cout<<"Enter the price:";
    cin>>price;
}
void book::getdata()
{
    publication::getdata();
    cout<<"Enter numbner of pages:";
    cin>>page_count;
}
void tape::getdata()
{
    publication::getdata();
    cout<<"Enter the playing time in minutes:";
    cin>>playing_time;
}
void publication::putdata()
{

    cout<<"\nTitle:"<<title;
    cout<<"\nPrice:"<<price;
}
void book::putdata()
{
    publication::putdata();
    cout<<"\nNumber of pages:"<<page_count;
}
void tape::putdata()
{
    publication::putdata();
    cout<<"\nPlaying time:"<<playing_time<<" minutes";
}
void main()
{
    clrscr();
    book b1;
    b1.getdata();
    b1.putdata();
    tape t1;
    t1.getdata();
    t1.putdata();
    getch();
}





