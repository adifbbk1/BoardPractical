#include <iostream.h>
#include <conio.h>
#include <process.h>

struct Node
{
    int info;
    Node *next;
} *top, *newptr, *save, *ptr;

void Display(Node *np)
{ //displays linked stack
    while (np != NULL)
    {
        cout << np->info << "->";
        np = np->next;
    }
    cout << "!!!\n";
}

Node *Create_New_Node(int n)
{
    ptr = new Node; //dynamic node
    ptr->info = n; //the pointer to the new node
    ptr->next = NULL;
    return ptr;
}

void Push(Node *np)
{ //to push a node into the linked stack
    if (top == NULL)
        top = np;
    else
    {
        save = top;
        top = np;
        np->next = save;
    }
}

void Pop()
{
    if (top == NULL) //deletes a node from beginning
        cout << "\n UNDERFLOW!!!";
    else
    {
        ptr = top;
        top = top->next;
        delete ptr;
    }
}


void main()
{
    int inf;
    top = NULL;
start:    
	char ch = 'y';
    clrscr();
    cout << "\n * * * * M E N U * * * *";
    cout << "\n 1. Push element into the linked stack ";
    cout << "\n 2. Pop element into the linked stack";
	cout << "\n 3. Exit the program";
    char opt;
    cout << "\n Enter your choice:";
    cin >> opt;
	clrscr();
    switch (opt) //main part starts here
    {
        case '1':
            while (ch == 'y' || ch == 'Y')
            {
                cout << "\n Enter integral information for new node:>";
                cin >> inf;
                newptr = Create_New_Node(inf);
				if(newptr == NULL) //When system goes out of memory
				{
					cout << "\n Cannot create new node. Pop some elements...";
					break;
				}
                Push(newptr);
                cout << "\n Now the linked stack is:\n ";
                Display(top);
                cout << "\n Press Y to enter more nodes, N to return..";
                cin >> ch;
            }
            break;
        case '2':
            do
            {
                cout << "\n The Stack now is:\n ";
                Display(top);
                cout << "\n Want to pop an element " << top->info << "?(y/n)...";
                cin >> ch;
                if (ch == 'y' || ch == 'Y')
                    Pop();
            } while (ch == 'y' || ch == 'Y');
            break;
		case '3': 
			exit(0);
        default:
            cout << "\n Sorry!!!Wrong choice..!!";
    }
	system("pause");
	goto start;
}