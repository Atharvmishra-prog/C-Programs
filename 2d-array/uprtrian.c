#include<stdio.h>
int r,c;
void bod(int b[r][c]);
int main()
{
    printf("Enter the row and colummn\n");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the value in array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    bod(arr);  
}
void bod(int b[r][c])
{
    int i,j;
    printf("the border elements are \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j||j>=i)
            {
                printf("%d\t",b[i][j]);
            }
            else 
            printf("\t");
        }
        printf("\n");
    }
}
