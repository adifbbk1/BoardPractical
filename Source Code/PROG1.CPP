#include<iostream.h>
#include<conio.h>
#include<math.h>

int main()
{
   clrscr();
   int ch;
   double l, b, a, p, d;
   cout << "\nEnter length of a rectangle:>";
   cin >> l; 
   cout << "\nEnter breadth of a rectangle:>"; 
   cin >> b; 
   a = l * b; 
   p = 2 * ( l + b ); 
   d = sqrt( l * l + b * b ); 
   clrscr(); 
   cout << "******MENU******" 
        << "\n1. Find Area" 
        << "\n2. Find Perimeter" 
        << "\n3. Find Diagonal" 
        << "\n\nEnter your choice:>"; 
   cin >> ch; 
   clrscr(); 
   switch(ch) 
   { 
      case 1: cout << "Area of rectangle is " << a <<" sq. units"; 
         break; 
      case 2: cout << "Perimeter of rectangle is " << p <<" units"; 
         break; 
      case 3: cout << "Diagonal of rectangle is " << d <<" units"; 
         break; 
      default: cout << "Wrong choice. "; 
   } 
   getch(); 
   return 0; 
}  