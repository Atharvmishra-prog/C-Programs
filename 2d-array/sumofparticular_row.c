#include<stdio.h>
int r,c;
void sum(int b[r][c]);
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
     printf("the original matrix is\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    sum(arr);  
}
void sum(int b[r][c])
{
    int i,j,rn,sum=0;
    printf("Enter the row number \n");
    scanf("%d",&rn);
    for(i=0;i<c;i++)
    {
      sum=sum+b[rn-1][i];
    }
    printf("Sum of %dth row is: %d",rn,sum);
    
}
