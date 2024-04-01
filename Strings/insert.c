#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],k;
    int p,l,i;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the position where to insert the string \n");
    scanf("%d",&p);
     printf("Enter the key \n");
     scanf(" %c",&k);
     l=strlen(str);
     for(i=l;i>=p-1;i--)
     {
        str[i+1]=str[i];
     }
     str[p-1]=k;
     puts(str);

}