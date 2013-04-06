#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char s[]);

main()
{
    printf("0xF: %d\n", htoi("0xF"));
    printf("0XF: %d\n", htoi("0xF"));
    printf("0xf: %d\n", htoi("0xF"));
    printf("f: %d\n", htoi("0xF"));
    printf("F: %d\n", htoi("0xF"));
    return 0;
}

int htoi(char s[])
{
    int stop, currentDigit;
    int sum = 0;
    int power = 0;
    int length = (strlen(s) - 1);
    if ((s[0] == '0') && (tolower(s[1]) == 'x'))
        stop = 2;
    else
        stop = 0;
    for (length; length >= stop; length--) {
        if (currentDigit >= '0' && currentDigit <= '9')
            currentDigit = s[length] - '0';
        else
            currentDigit = tolower(s[length]) - 'a' + 10;
        sum = sum + (currentDigit * pow(16, power++));
    }
    return sum;
}
