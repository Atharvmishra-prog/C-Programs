#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char *p;int i;
    p=&a[0];
    printf("Enter\n");
    gets(a);
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>=65 && *(p+i)<=90)
        {
            *(p+i)=*(p+i)+32;
        }
        else if(*(p+i)>=97 && *(p+i)<=122)
        *(p+i)=*(p+i)-32;
    }
    printf("%s",p);
}