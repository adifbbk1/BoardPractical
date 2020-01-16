#include <iostream.h>
#include <conio.h>

int A[3][3], B[3][3], i, j;

void input(int a[3][3])
{
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cin >> a[i][j];
}

void display(int a[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << a[i][j] << "\t";
        cout << "\n ";
    }
}

void Product(int X[3][3], int Y[3][3], int a = 0)
{
    void Transpose(int T[3][3]);
    int Z[3][3], i, j, z;
    for (i = 0; i < 3; i++)
        for (z = 0; z < 3; z++)
        {
            Z[i][z] = 0;
            for (j = 0; j < 3; j++)
                Z[i][z] += X[i][j] * Y[j][z];
        } //product logic

    if (a == 0)
    {
        cout << "\n A * B =\n ";
        display(Z);
    }
    else
        Transpose(Z); // calling transpose function
}

void Transpose(int X[3][3])
{
    int C[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            C[i][j] = X[j][i]; // transpose logic
    cout << "\n Transpose of A * B=\n ";
    display(C);
}

void main()
{
    clrscr();
    cout << " Enter the elements of matrix A:\n ";
    input(A);
    cout << " Enter the elements of matrix B:\n ";
    input(B);

    cout << "\n -------------------";
    cout << "\n * * * M E N U * * *";
    cout << "\n 1.Product ";
    cout << "\n 2.Transpose";
    cout << "\n -------------------";
    cout << "\n Enter your choice:>";
    int ch;
    cin >> ch;

    clrscr();
    cout << "\n Matrix A is:\n ";
    display(A);
    cout << "\n Matrix B is:\n ";
    display(B);

    switch (ch)
    {
        case 1:
            Product(A, B);
            break;

        case 2:
            Product(A, B, 1);
            break;
    }
    getch();
}