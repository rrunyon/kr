#include <stdio.h>
#define MAXLINE 1000

void getLine(char line[], int maxline);
void fold(char line[]);

main()
{
    char line[MAXLINE];

    getLine(line, MAXLINE);
    printf("%s", line);
    fold(line);
    printf("%s", line);
    return 0;
}

void getLine(char s[], int lim)
{
    int c, i;

    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
}

void fold(char line[])
{
    int readyToFold = 0;
    int i = 0;
    while (line[i] != '\0') {
        if (((i % 20 == 0) && (i != 0)) || (readyToFold==1)) {
            readyToFold = 1;
            if (line[i] == ' ') {
                line[i] = '\n';
                readyToFold = 0;
            }
        }
        i++;
    }
}
