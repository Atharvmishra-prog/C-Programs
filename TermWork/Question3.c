#include<stdio.h>
int r,c;
void lower(int b[r][c]);
int main()
{
    int i,j;
    printf("\t\t*****INPUT*****\n");
    printf("Enter the row and colummn\n");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the value in array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\t\t*****OUTPUT*****\n");
    printf("The given array is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++ )
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    lower(arr);  
}
void lower(int b[r][c])
{
    int i,j,sum=0;
    printf("The elements being summed of the lower triangular matrix are: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if((j==0||i>j)&&i!=0)
            {
                sum=sum+b[i][j];
                printf("%d ",b[i][j]);
            }         
        }
    }
    printf("\nThe Sum of the lower triangular Matrix Elements is: %d\n", sum);
}