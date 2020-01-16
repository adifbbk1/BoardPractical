
 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>

 struct Date
 {
    int dd;
    int mm;
    int yy; 
 }; 
  
 void getdate(Date &e) 
 { 
    cout<<"Enter Date:>"; 
    cin>>e.dd; 
    cout<<"Enter Month:>"; 
    cin>>e.mm; 
    cout<<"Enter Year:>"; 
    cin>>e.yy; 
 } 
  
 void putdate(Date &e,char s='-') 
 { 
    cout<<e.dd<<s<<e.mm<<s<<e.yy; 
 } 
  
 class student 
 { 
 private: 
    char name[20]; 
    int Class,rollno,admno; 
    Date DoB; 
    int marks[5],total; 
 public: 
    void ctotal(); 
    void getdata(int s); 
    void putdata(); 
 }; 
  
 void student::ctotal() 
 { 
    total=0; 
    for(int i=0;i<5;i++) 
       total+=marks[i]; 
 } 
  
 void student::getdata(int s) 
 { 
    cout<<"Enter name of student "<<s+1<<":>"; 
    gets(name); 
    cout<<"Enter Class:>"; 
    cin>>Class; 
    cout<<"Enter Roll no:>"; 
    cin>>rollno; 
    cout<<"Enter DOB:\n"; 
    getdate(DoB); 
    cout<<"Enter Admission no:>"; 
    cin>>admno; 
    cout<<"Enter marks in 5 subjects:>\n"; 
    for(int i=0;i<5;i++) 
      cin>>marks[i]; 
    ctotal(); 
 } 
 
 void student::putdata() 
 { 
    cout<<name<<"\nClass- "<<Class<<"\nRoll no- "<<rollno; 
    cout<<"\nAdmission number- "<<admno; 
    cout<<"\nDate of Birth:- "; 
    putdate(DoB); 
    cout<<"\n\nMarks of five subjects:- "; 
    for(int i=0;i<5;i++) 
       cout<<marks[i]<<' '; 
    cout<<"\nTotal marks- "<<total; 
    getch(); 
 } 
  
 int main() 
 { 
    clrscr(); 
    student s[50]; 
    cout<<"Enter how many students:"; 
    int n; 
    cin>>n; 
    for(int i=0;i<n;i++) 
       s[i].getdata(i); 
    for(i=0;i<n;i++) 
       s[i].putdata(); 
    getch(); 
    return 0; 
 }  