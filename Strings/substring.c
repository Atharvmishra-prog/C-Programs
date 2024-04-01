#include<stdio.h>
#include<string.h>
void sub(char [],char []);
int main()
{
    char str[100],s[100];
    puts("Enter the String");
    gets(str);
    puts("Enter the substring");
    gets(s);
    sub(str,s);
}
void sub(char str[],char s[])
{   int i,j,k,l,c=0;
    l=strlen(s);
    for(i=0;str[i]!='\0';i++)
    {
        k=i;
         for(j=0;j<l;j++)
         {
            if(str[k]!=s[j])
            break;
            k++;
         }
         if(j==l)
         c++;
    }
    if(c>1)
    printf("Number of Substring appear %d",c);
    else
    puts("NO Substring fround");

}