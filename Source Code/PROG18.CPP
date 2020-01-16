#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

const int size = 50;
int Item, res;
char ch = 'y';
int Queue[size], front = -1, rear = -1;

int Insert(int Queue[], int ele) // function to insert element in Queue
{
    if (rear == size - 1)
        return -1;
    else if (rear == -1)
    {
        front = rear = 0;
        Queue[rear] = ele;
    }
    else
        Queue[++rear] = ele;
    return 0;
}

char Remove(int Queue[]) // function to delete element
{
    if (front == -1)
        return 'z';
	cout << "\Do you want to delete element " << Queue[front] << "?(y/n):>";
	cin >> ch;
	if(ch == 'y' || ch == 'Y')
        if (front == rear)
            front = rear = -1;
        else
            front++;
    return ch;
}

void Display(int Queue[], int front, int rear)
{
    if (front == -1)
        return;
    for (int i = front; i < rear; i++)
        cout << Queue[i] << "<--";
    cout << Queue[rear] << endl;
}

void Insertion()
{
    for (ch = 'y'; ch == 'Y' || ch == 'y'; )
    {
        cout << "\nEnter ITEM for insertion:";
        cin >> Item;
        res = Insert(Queue, Item);
        if (res == -1)
        {
            cout << "UNDERFLOW!!Aborting!!\n";
            return;
        }
        cout << "Now the queue is:\n";
        Display(Queue, front, rear);
        cout << "\nWant to insert more elements?(y/n)...";
        cin >> ch;
    }
}

void Deletion()
{
    for (ch = 'y'; ch == 'y' || ch == 'Y'; )
    {
		ch = Remove(Queue);
        if (ch == 'z')
        {
            cout << "UNDERFLOW!!!Aborting!!";
            return;
        }
        else if(ch == 'y' || ch == 'Y')
            cout << "\nElement deleted is:" << Queue[res-1] << endl;
        cout << "Now the Queue is:\n";
        Display(Queue, front, rear);
    }
}

int main()
{
    char opt;
start:
    clrscr();
    cout << "\n***************";
    cout << "\n   M E N U       ";
    cout << "\n***************";
    cout << "\n1. Insert an element in the Array-Queue";
    cout << "\n2. Delete an element from the Array-Queue";
	cout << "\n3. Exit the program";
    cout << "\nEnter your choice:>";
    cin >> opt;
	clrscr();
    switch (opt)
    {
        case '1':
            Insertion();
            break;
        case '2':
            Deletion();
            break;
		case '3':
			exit(0);
		default:
            cout << "\nWrong choice";
    }
    system("pause");
	goto start;
    return 0;
}