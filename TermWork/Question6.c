#include <stdio.h>
#include <string.h>
char highestFre(char str[])
{
    int frequency = 0;
    char maxChar = '\0';
    for (int i = 0; str[i] != '\0'; i++)
    {
        int currentFre= 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
            {
                currentFre++;
            }
        }
        if (currentFre > frequency)
        {
            frequency = currentFre;
            maxChar = str[i];
        }
    }
    return maxChar;
}

int main()
{
    char string[100];
    printf("\t\t*****INPUT*****\n");
    printf("Enter a string: ");
    fgets(string, 100, stdin);   
    char highest = highestFre(string);
    printf("\t\t*****OUTPUT*****\n");
    printf("The character with the highest frequency in the string is: %c\n", highest);
    return 0;
}