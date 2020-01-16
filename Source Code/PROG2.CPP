#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int strlength(char s[])
{
   int i;
   for(i = 0; s[i] != '\0'; i++);
   return i;
}
int strcompare(char s1[], char s2[]) 
{ 
   int i, d = 0; 
   for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) 
   { 
      if(s1[i] == s2[i]) 
         d++; 
      else if(s1[i] > 96 && s1[i] < 123)//Small letter 
      { 
         if(s1[i] == s2[i] + 32)//If same letter 
            d++; 
      } 
      else if(s1[i] > 64 && s1[i] < 90)//Big letter 
      {
         if(s1[i] == s2[i] - 32)//If same letter 
            d++; 
      } 
   } 
   if(d == strlength(s1) && d == strlength(s2)) 
      return 0; 
   else return 1; 
} 
char str[80]; 
void strjoin(char s1[], char s2[]) 
{ 
   int i, j; 
   for(i = 0; s1[i] != '\0'; i++) 
      str[i] = s1[i]; 
   str[i++] = ' '; //Adding space 
   for(j = 0; s2[j] != '\0'; i++, j++) 
      str[i] = s2[j]; 
} 
int main() 
{ 
   clrscr(); 
   char str1[40], str2[40]; 
   int ch; 
   cout << "Enter first string:>"; 
   gets(str1); 
   cout << "Enter second string:>"; 
   gets(str2); 
   cout << "******MENU******" 
        << "\n1. Find out length of a string" 
        << "\n2. Compare two strings" 
        << "\n3. Concatenate two strings" 
        << "\n\nEnter your choice:>"; 
   cin >> ch; 
   clrscr(); 
   switch(ch) 
   { 
      case 1:  cout << "Length of first string is " 
                    << strlength(str1) 
                    << " characters" << endl;        
               cout << "Length of second string is” 
                    << strlength(str2) 
                    << " characters"<<endl; 
               break; 
      case 2:  if(strcompare(str1, str2) == 0) 
                  cout << "Both are same strings"; 
               else 
                  cout << "Both are different string"; 
               break; 
      case 3:  strjoin(str1, str2); 
               cout << "Concatenated string is:\n" << str; 
               break; 
      default: cout << "Wrong option selected!"; 
   } 
   getch(); 
   return 0; 
}