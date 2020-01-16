#include <iostream.h>
#include <conio.h>

void MergeSort(int a[], int b[], int m, int n)
{
    int c[60];
    int ctrA, ctrB, ctrC, i, s = m + n - 1;
    ctrA = ctrC = 0;
    ctrB = n - 1;

    while (ctrA < m && ctrB >= 0) //mergesort logic starts
    {
        if (a[ctrA] < b[ctrB])
            c[ctrC++] = a[ctrA++];
        else
            c[ctrC++] = b[ctrB--];
        if (ctrA == m)
            break;
        if (ctrB == -1)
            break;
    }

    while (ctrA < m) 
        c[ctrC++] = a[ctrA++];
    while (ctrB >= 0) 
        c[ctrC++] = b[ctrB--];

    cout << "\n The Merged array in ascending order:";
    for (i = 0; i <= s; i++) //display merged array
        cout << c[i] << " ";
}

void main()
{
    clrscr();
    int A[30], B[30], m, n, i;

    cout << " Enter the size of array A:";
    cin >> m;
    cout << " Enter " << m << " elements of array A(ascending order):\n";
    for (i = 0; i < m; i++)
        cin >> A[i];

    cout << " Enter the size of array B:";
    cin >> n;
    cout << "\n Enter " << n << " elements of array B(descending order):\n";
    for (i = 0; i < n; i++)
        cin >> B[i];

    MergeSort(A, B, m, n);
    getch();
}