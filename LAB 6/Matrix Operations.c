#include<stdio.h>

int main()
{
    int r,c;
    printf("Number of rows: ");
    scanf("%d",&r);
    printf("\nNumber of columns: ");
    scanf("%d",&c);
    int mat[r][c],res[r][c];
    printf("\nEnter Matrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    /*Addition
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",mat[i][j]+mat[i][j]);
        }
        printf("\n");
    }*/

    //Multiplication
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            res[i][j]=0;
            for(int k=0;k<c;k++)
            {
                res[i][j]=res[i][j]+mat[i][k]*mat[k][j];
            }
        }
    }

    //Print result
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
