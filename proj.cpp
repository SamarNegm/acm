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
                    cout<<";;;;;;;;;;;;;;;;;;;;;\n";
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

int main()
{
    int x;
for(int i=0;i<8;i++)
{
    for(int j=0;j<8;j++){
        cin>>grid[i][j];
      if(grid[i][j]==1)
        x=i;
    }


}

    return 0;
}
