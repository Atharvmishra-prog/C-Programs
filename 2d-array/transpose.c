#include<stdio.h>
int r,c;
void trans(int[][c]);
int main()
{
    int i,j;
    printf("Enter the row and coloumn\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements in array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }
     printf("The Original Matrix \n");
      for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
             printf("%d\t",a[i][j]);           
        }       
    }   
    trans(a);
}
void trans(int a[r][c])
{   
    int i,j;
    printf("\nthe transpose of matrix is \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}