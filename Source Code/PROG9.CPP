//call by pointer swapping
#include<iostream.h>
#include<system.h>

void SwapByValue(int a, int b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"Inside SwapByValue function: \n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
}

void SwapByRef(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"Inside SwapByRef function: \n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
}

void SwapByPointer(int *a, int *b)
{
    int t=&a;
    &a=&b;
    &b=t;
    cout<<"Inside SwapByPointer function: \n";
    cout<<"a="<<"\tb="<<b<<endl;
}

int main()
{
    int a,b;
    system("cls");
    cout<<"Enter integer value of a:>";
    cin>>a;
    cout<<"Enter integer value of b:>";
    cin>>b;
    cout<<endl;
    cout<<"Current value of a: "<<a<<endl;
    cout<<"Current value of b: "<<b<<endl;
    SwapByValue(a,b);
    cout<<endl;
    cout<<"Current value of a: "<<a<<endl;
    cout<<"Current value of b: "<<b<<endl;
    SwapByRef(a,b);
    cout<<endl;
    cout<<"Current value of a: "<<a<<endl;
    cout<<"Current value of b: "<<b<<endl;
    SwapByPointer(a,b);
    cout<<endl;
    cout<<"Current value of a: "<<a<<endl;
    cout<<"Current value of b: "<<b<<endl;
    system("pause");
    return 0;
}