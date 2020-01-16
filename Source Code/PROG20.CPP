#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

const int size = 7;
int CQueue[size], front = -1, rear = -1;

int Insert_in_CQ(int CQueue[], int ele)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
        return -1;
    else if (rear == -1)
        front = rear = 0;
    else if (rear == size - 1)
        rear = 0;
    else
        rear++;
    CQueue[rear] = ele;
    return 0;
}

void Display(int CQueue[], int front, int rear)
{
    int i = 0;
    cout << "\n Cir_Queue is:\n"
         << "(Front shown as>>>,Rear as<<<AND free space as-)\n";
    if (front == -1)
        return;
    if (rear >= front)
    {
        for (i = 0; i < front; i++)
            cout << "-";
        cout << " >>> ";
        for (i = front; i < rear; i++)
            cout << CQueue[i] << " <- ";
        cout << CQueue[rear] << " <<< " << endl;
    }
    else
    {
        for (i = 0; i < rear; i++)
        {
            cout << CQueue[i] << " <- ";
            cout << CQueue[rear] << " <<< ";
        }
        for (; i < front; i++)
        {
            cout << "-";
            cout << " >>> ";
        }
        for (i = front; i < size; i++)
        {
            cout << CQueue[i] << " <- ";
            cout << "\t...wrap around...";
        }
    }
}

int Del_in_CQ(int CQueue[])
{
    int ret;
    if (front == -1)
        return -1;
    else
    {
        ret = CQueue[front];
        if (front == rear)
            front = rear = -1;
        else if (front == size - 1)
            front = 0;
        else
            front++;
    }
    return ret;
}
int main()
{
    int Item, res;
    char ch;
start:
    clrscr();
    cout << "\t\t Circular Queue Menu\n";
    cout << "1.Insert an element in the circular queue\n";
    cout << "2.Delete an element from the circular queue\n";
    cout << "3.Exit\n";
    cout << "Enter your choice:>";
    cin >> ch;
    clrscr();
    switch (ch)
    {
        case '1':
            cout << "\nEnter ITEM for insertion:";
            cin >> Item;
            res = Insert_in_CQ(CQueue, Item);
            if (res == -1)
                cout << "OVERFLOW!!!\n";
            else
            {
                cout << "\nNow the Cir_Queue is:\n";
                Display(CQueue, front, rear);
            }
            break;
        case '2':
            Item = Del_in_CQ(CQueue);
            cout << "Element deleted is:" << Item << endl;
            Display(CQueue, front, rear);
            break;
        case '3':
            exit(0);
        default:
            cout << "Valid choices are 1-4 only\n";
            break;
    }
    system("pause");
    goto start;
    return 0;
}