#include <iostream.h>
#include <conio.h>
#define size 50

int top = -1;
char ch = 'y';

void Display(int Stack[], int top)
{
    if (top == -1)
	{
		cout << "\nThere is no Stack, enter data first";
		return;
	}
	cout << "\nThe Stack now is :\n";
	cout << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n";
    cout << "³\t" << Stack[top] << "\t³<--" << endl;
    for (int i = top - 1; i >= 0; i--)
	cout << "³\t" << Stack[i] << "\t³\n";
	cout << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
}

int Push(int Stack[], int& top) // function to insert element
{
	int Item;
	ch = 'y';
    if (top == size - 1)
    {
        cout << "OVERFLOW!!! Aborting!!\n";
		getch();
        return -1;
    }
	while (ch == 'y' || ch == 'Y')
	{	
		clrscr();
		cout << "\nEnter ITEM for insertion:";
		cin >> Item;
		top++;
    	Stack[top] = Item;
    	Display(Stack, top);
    	cout << "\nWant to insert more elements?(y/n)...>";
    	cin >> ch;
	}
	return 0;
}

int Pop(int Stack[], int& top) // function to pop element
{
    ch = 'y';
	int del;
    while (ch == 'y' || ch == 'Y')
    {
		clrscr();
        if (top == -1)
        {
            cout << "There is no stack, enter elements first\n";
			getch();
            return -1;
        }
        del = Stack[top];
        cout << "\nDo you want to delete " << del << "?(y/n)...>";
        cin >> ch;
		if(ch == 'y' || ch == 'Y')
			top--;
		else
			return 0;
        Display(Stack, top);
        cout << "\nWant to delete more elements?(y/n)../";
        cin >> ch;
    }
	return 0;
}

int main()
{
    int Stack[size], Item;
start:
    clrscr();
    cout << "\n * * * * MENU * * * * ";
    cout << "\n1. Push an element into array stack"; // menu for the user
    cout << "\n2. Pop an element from the array stack";
	cout << "\n3. Show the stack";
	cout << "\n4. Exit the program";
    char opt; //to prevent keyboard buffers, char is used
    cout << "\nEnter your choice:>";
    cin >> opt;
    switch (opt)
    {
        case '1':
			Push(Stack, top);
            goto start;
        case '2':
            Pop(Stack, top);
            goto start;
		case '3':
			Display(Stack, top);
			goto start;
		case '4':
			return 0;
        default:
            cout << "\n\t Wrong choice";
    }
    getch();
    return 0;
}