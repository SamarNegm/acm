#include<stdio.h>
#include<stdbool.h>
#include<bits/stdc++.h>

using namespace std;
int N;
void printSolution(int grid[100][100])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", grid[i][j]);
        printf("\n\n");
    }
}

bool isSafe(int grid[100][100], int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
        if (grid[row][i])
            return false;

    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (grid[i][j])
            return false;

    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (grid[i][j])
            return false;

    return true;
}

bool solve(int grid[100][100], int col)
{
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++)
    {
        if ( isSafe(grid, i, col) )
        {
            grid[i][col] = 1;
printSolution(grid);
cout<<"\n\n";
            if ( solve(grid, col + 1) ){
                 //   cout<<";;;;;;;;;;;;;;;;;;;;;\n";
            printSolution(grid);
            cout<<";;;;;;;;;;;;;;;;;;;;;\n\n";
                return true;
            }

            grid[i][col] = 0; // BACKTRACK

        }
    }


    return false;
}
   int grid[100][100];
bool solveNQ()
{


    if ( solve(grid, 0) == false )
    {
      printf("Solution does not exist");
      return false;
    }

    printSolution(grid);
    return true;
}
int main()
{
    cout<<"Enter the number of raws \n";
    cin>>N;
    solveNQ();
    return 0;
}

/* C/C++ program to solve N Queen Problem using
   backtracking

#include<stdio.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;

int N;
int D1[20],D2[20],px[10],py[10];
/* A utility function to print solution
void printSolution(int grid[9][9])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", grid[i][j]);
        printf("\n\n");
    }
}
bool safe(int x, int y)
{
if(D1[x-y+8]==1)
    return false;
else if(D2[x+y]==1)
    return false;
else if(px[x]==1)
    return false;
else if(py[y]==1)
    return false;
else
    return true;
}

bool solveNQUtil(int grid[9][9], int col)
{
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++)
    {
        if ( safe( i, col) )
        {
            D1[i-col+8]=1;
            D2[i+col]=1;
            px[i]=1;
            py[col]=1;
            if ( solveNQUtil(grid, col + 1) ){
                return true;
            }

            grid[i][col] = 0;
            D1[i-col+8]=0;
            D2[i+col]=0;
            px[i]=0;
            py[col]=0;
        }
    }


    return false;
}
int board[9][9];
bool solveNQ()
{


    if ( solveNQUtil(board, 0) == false )
    {
      printf("Solution does not exist");
      return false;
    }

    printSolution(board);
    return true;
}

// driver program to test above function
int main()
{
    cin>>N;
    solveNQ();
    return 0;
}
*/
