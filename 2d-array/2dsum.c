#include<stdio.h>
int main()
{
    int r,c,i,e,f,j,t,h;
    printf("Enter the row and coloumn \n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements in matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the row and column for second matrix");
    scanf("%d %d",&e,&f);
    int b[e][f];
     printf("Enter the elements in matrix \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
     int res[e][f];
     printf("Matrix after adition\n");
      for(t=0;t<e;t++)
     {
        for(h=0;h<f;h++)
        {
         res[t][h]=a[t][h]+b[t][h];
        }
     }
         for(t=0;t<e;t++)
          {
            for(h=0;h<f;h++)
            {
                printf("%d",res[t][h]);
            }
            printf("\n");
          }
          return 0;
     }






