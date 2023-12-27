#include<iostream>
using namespace std;

const short int n = 4;

int isSafe(char board[n][n], int r, int c);
void printSolution(char board[n][n]);
void nQueen(char board[n][n], int r);

int main()
{
    char board[n][n];
    for (int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            board[i][j]='-';
    nQueen(board, 0);
}

int isSafe(char board[n][n], int r, int c)
{
    for (int i = 0; i<r; i++)
        if (board[i][c] == 'Q')
            return 0;
    for (int i = r, j = c; i>=0 && j>=0; i--, j--)
        if (board[i][j] == 'Q')
            return 0;
    for (int i = r, j = 0; i>=0 && j< n; i--, j++)
        if (board[i][j] == 'Q')
            return 0;
    return 1;
}

void printSolution(char board[n][n])
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<"\t"<<board[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void nQueen(char board[n][n], int r)
{
    if (r == n)
    {
        printSolution(board);
    }
    for (int i = 0; i<n; i++)
    {
        if (isSafe(board, r, i))
        {
            board[r][i]='Q';
            nQueen(board, r+1);
            board[r][i]= '-';
        }
    }
}
