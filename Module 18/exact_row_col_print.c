#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //exact row
    // int c;
    // scanf("%d",&c);
    // {
    //     for(int i=0;i<col;i++)
    //     {
    //         printf("%d ",a[c][i]);
    //     }
    // }

    // exact col
    int r;
    scanf("%d",&r);
    {
        for(int i=0;i<row;i++)
        {
            printf("%d ",a[i][r]);
        }
    }

    return 0;
}

