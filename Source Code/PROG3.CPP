#include<iostream.h>
#include<conio.h>
#include<math.h>

#define root3 1.732

void area()
{
   cout << "Area of point is undefined";
}
double area(double s)
{ 
   double a = root3 * s * s / 4; 
   return a; 
} 
double area(double b,double h) 
{ 
   double a = b * h / 2; 
   return a; 
} 
double area(double s1,double s2, double s3) 
{ 
   double a, s; 
   s = (s1 + s2 + s3) / 2; 
   a = sqrt(s * (s - s1) * (s - s2) * (s - s3)); 
   return a; 
} 
 
int main() 
{ 
   clrscr(); 
   cout << "******MENU******" 
        << "\n1. Area of point" 
        << "\n2. Area of equilateral tringle" 
        << "\n3. Area of right-angled triangle" 
        << "\n4. Area of scalene triangle" 
        << "\n\nEnter your choice:>"; 
   int ch; 
   cin >> ch; 
   float a, s1, s2, s3; 
   switch(ch) 
   { 
      case 1:  area(); 
               getch(); 
               return 0; 
      case 2:  cout << "Enter side of triangle:>"; 
               cin >> s1; 
               a = area(s1); 
               break; 
      case 3:  cout << "Enter height:>"; 
               cin >> s1; 
               cout << "Enter base:>"; 
               cin >> s2; 
               a = area(s1,s2); 
               break; 
      case 4:  cout << "Enter 3 sides of 54triangle:>\n"; 
               cin >> s1 >> s2 >> s3; 
               a = area(s1, s2, s3); 
               break; 
   } 
   cout << "Area of triangle is " << a << " sq. units"; 
   getch(); 
   return 0; 
}