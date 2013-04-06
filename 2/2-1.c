#include <stdio.h>
#include <limits.h>

main()
{
    /* signed */
    /* char min max */
    printf("Signed char min: %d\n", SCHAR_MIN);
    printf("Signed char max: %d\n", SCHAR_MAX);
    
    /* short min max */
    printf("Signed short min: %d\n", SHRT_MIN);
    printf("Signed short max: %d\n", SHRT_MAX);

    /* int min max */
    printf("Signed int min: %i\n", INT_MIN);
    printf("Signed int max: %i\n", INT_MAX);

    /* long min max */
    printf("Signed long min: %li\n", LONG_MIN);
    printf("Signed long max: %li\n\n", LONG_MAX);
    
    /* unsigned */
    /* char max */
    printf("Unsigned char max: %d\n", UCHAR_MAX);
    
    /* short max */
    printf("Unsigned short max: %d\n", USHRT_MAX);

    /* int max */
    printf("Unsigned int max: %u\n", UINT_MAX);

    /* long max */
    printf("Unsigned long max: %lu\n", ULONG_MAX);

    putchar('\n');
}
