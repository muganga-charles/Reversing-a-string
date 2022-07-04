#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// a c program to reverse a string
void reverse(char *str)
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    char str[] = "";
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverse(str);
    printf("Reversed string is %s\n", str);
    return 0;
}
