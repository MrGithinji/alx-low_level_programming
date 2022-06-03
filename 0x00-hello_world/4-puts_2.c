#include <stdio.h>

int main()
{
    char ch[100];

    printf("Enter any string\n");
    //get the string
    gets(ch);

    printf("\nThe string is - ");
    //print the string
    puts(ch);

    return 0;
}
