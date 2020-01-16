#include <iostream.h>
#include <conio.h>

int FindPos(int A[], int size, int item)
{
    int pos;
    if (item < A[0])
        pos = 0;
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (A[i] <= item && A[i + 1] > item)
            {
                pos = i + 1;
                break;
            }
        }
        if (i == size - 1)
            pos = size;
    }
    return pos;
}

void Insert(int Ar[], int &N)
{
    char ch = 'y';
    int ITEM, index, i;
    while (ch == 'Y' || ch == 'y')
    {
        cout << " Enter the element you want to insert:> ";
        cin >> ITEM;
        if (N == 50)
        {
            cout << " Overflow";
            getch();
            return;
        }
        index = FindPos(Ar, N, ITEM);
        for (i = N; i > index; i--)
            Ar[i] = Ar[i - 1];
        Ar[index] = ITEM;
        N += 1;
        cout << "\n Do you want to insert more elements?"
             << " _ (y/n)\b\b\b\b\b\b\b";
        cin >> ch;
    }
    cout << " The array now is as shown: ";
    for (i = 0; i < N; i++)
        cout << Ar[i] << " ";
    cout << endl;
}

int LSearch(int A[], int size, int item)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (A[i] == item)
            return i;
    }
    return -1;
}

void Delete(int A[], int &N)
{
    char ch = 'y';
    int item, index, i;
    while (ch == 'y' || ch == 'Y')
    {
        cout << " Enter the element you want to delete: ";
        cin >> item;
        if (N == 0)
        {
            cout << " No elements found in array!";
            getch();
            return;
        }
        index = LSearch(A, N, item);
        if(index == -1)
        {
            cout<<" Item not found";
            return;
        }
        for (i = index; i <= N; i++)
            A[i] = A[i + 1];
        N -= 1;
        cout << "\n Do you want to delete more elements?"
             << " _ (y/n)\b\b\b\b\b\b\b";
        cin >> ch;
    }
    cout << " After deleting, the array is: ";
    for (i = 0; i < N; i++)
        cout << A[i] << " ";
}

void main()
{
    int Ar[50], N, i;
    clrscr();
    cout << "\n How many elements do you want:> ";
    cin >> N;
    cout << " Enter " << N << " elements of the array:> ";
    for (i = 0; i < N; i++)
        cin >> Ar[i];
    cout << "\n Do you want to:";
    cout << "\n 1.Insert an element into the array";
    cout << "\n 2.Delete an element from the array";
    int opt;
    cout << "\n Enter your choice:> ";
    cin >> opt;
    switch (opt)
    {
        case (1):
            Insert(Ar, N);
            break;
        case (2):
            Delete(Ar, N);
            break;
        default:
            cout << " Wrong choice";
    }
    getch();
}
