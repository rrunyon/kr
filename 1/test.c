#include <stdio.h>
#define MAXSTRING 100

main()
{
    int index = 0;
    int c;
    char string[MAXSTRING];
    while ((c=getchar()) != EOF)
        string[index++] = c;
    return sizeof(string);
}

