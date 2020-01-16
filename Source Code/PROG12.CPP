#include <iostream.h>
#include <conio.h>
int Lsearch(int[], int, int);
int Bsearch(int[], int, int);

int main()
{
    clrscr();
    int A[50], num, n, index, ch;
    cout << " Enter no. of elements:";
    cin >> n;
    cout << " Enter Array elements in ascending order:";
    //Ascending order for binary search
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << "\n Search Techniques Menu";
    cout << "\n 1.Linear search";
    cout << "\n 2.Binary search";
    cout << "\n Enter your choice:";
    cin >> ch;
    cout << "\n Enter element to be search for:";
    cin >> num;

    switch (ch)
    {
        case 1:
            index = Lsearch(A, n, num);
            break;
        case 2:
            index = Bsearch(A, n, num);
            break;
        default:
            cout << "\n Wrong choice....!!";
    }

    if (index == -1)
         cout << " Sorry!! Element could not be found\n";
    else
         cout << " Element found at index:" << index << ", position " << index + 1;
    getch();
    return 0;
}

int Bsearch(int A[], int size, int num)
{
    int first, last, mid;
    first = 0, last = size - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (num == A[mid])
            return mid;
        else if (num > A[mid])
            first = mid + 1;
        else
            last = mid - 1;
    }
    return -1;
}

int Lsearch(int A[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] == num)
            return i;
    }
    return -1;
}