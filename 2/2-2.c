#include <stdio.h>

#define MAXLINE 100

main()
{
    /*
    for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    */

    int c;
    int i = 0;
    char s[MAXLINE];

    while (i < (MAXLINE - 1)) {
        c = getchar();
        if (c == '\n')
            s[i] = c;
            break;
        if (c == EOF)
            break;
        s[i++] = c;
    }
    s[i] = '\0'
    return 0;
}

