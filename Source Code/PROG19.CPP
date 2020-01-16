#include <iostream.h>
#include <process.h>
#include <conio.h>

struct Node
{
    int info;
    Node *next;
} *front, *newptr, *save, *ptr, *rear;

Node* Create_New_Node(int n) // Function to create new node dynamically
{
    ptr = new Node;
    ptr->info = n;
    ptr->next = NULL;
    return ptr;
}

void Display(Node *np)
{
    while (np != NULL)
    {
        cout << np->info << "->";
        np = np->next;
    }
    cout << "!!!\n";
}

void Insert(Node *np) // Function to insert node in Linked Queue
{
    if (front == NULL)
        front = rear = np;
    else
    {
        rear->next = np;
        rear = np;
    }
}

void DelNode_Q() // Function to delete a node from the beginning of linked-Queue
{
    if (front == NULL)
        cout << "UNDERFLOW!!!\n";
    else
    {
        ptr = front;
        front = front->next;
        delete ptr;
    }
}

void Insertion()
{
    int inf;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\nEnter integral information for the new node:>";
        cin >> inf;
        newptr = Create_New_Node(inf);
        if (newptr == NULL)
        {
            cout << "\nCannot create new node!! Aborting!!\n";
            exit(0);
        }
        Insert(newptr);
        cout << "\nNow the Queue(Front...to...rear) is:\n";
        Display(front);
        cout << "\nPress Y to enter more nodes, N to exit:>";
        cin >> ch;
    }
}

void Deletion()
{
    char ch;
    clrscr();
    do
    {
        cout << "\nThe Linked-Queue now is(Front...to...rear):\n";
        Display(front);
        cout << "\nWant to delete first node?(y/n):>";
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
            DelNode_Q();
    } while (ch == 'y' || ch == 'Y');
}

int main()
{
    char ch;
    front = rear = NULL; // In the beginning Linked-Queue is empty so pointers are null
start:
    clrscr();
    cout << "\n********MENU********";
    cout << "\n1.Insert an element into linked queue";
    cout << "\n2.Deleting an element from the linked queue";
    cout << "\n3.Exit the program";
    cout << "\nEnter your choice:>";
    cin >> ch;
    clrscr();
    switch (ch)
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
}
