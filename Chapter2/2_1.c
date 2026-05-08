/*
    Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.

*/

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("---- USING STANDARD HEADERS ----\n");
    printf("UNSIGNED CHAR max: %u /", UCHAR_MAX);
    printf(" Range of SIGNED CHAR from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("UNSIGNED SHORT max: %u /", USHRT_MAX);
    printf(" Range of SIGNED SHORT from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("UNSIGNED INT max: %u /", UINT_MAX);
    printf(" Range of SIGNED INT from %d to %d\n", INT_MIN, INT_MAX);
    printf("UNSIGNED LONG max: %lu /", ULONG_MAX);
    printf(" Range of SIGNED LONG from %ld to %ld\n", LONG_MIN, LONG_MAX);

    printf("---- DIRECT COMPUTATION ----\n");
    printf("UNSIGNED CHAR max: %u /", (unsigned char)~0);
    printf(" Range of SIGNED CHAR from %d to %d\n", -(char)((unsigned char)~0 >> 1) - 1, (char)(((unsigned char)~0) >> 1));
    printf("UNSIGNED SHORT max: %u /", (unsigned short)~0);
    printf(" Range of SIGNED SHORT from %d to %d\n", -(short)((unsigned short)~0 >> 1) - 1, (short)(((unsigned short)~0) >> 1));
    printf("UNSIGNED INT max: %u /", (unsigned int)~0);
    printf(" Range of SIGNED INT from %d to %d\n", -(int)((unsigned int)~0 >> 1) - 1, (int)((unsigned int)~0 >> 1));
    printf("UNSIGNED LONG max: %lu /", (unsigned long)~0);
    printf(" Range of SIGNED LONG from %ld to %ld\n", -(long)((unsigned long)~0 >> 1) - 1, (long)((unsigned long)~0 >> 1));

    printf("---- Floating-point ----\n");
    printf("range of FLOAT from %e to %e\n", __FLT_MIN__, __FLT_MAX__);
    printf("range of DOUBLE from %e to %e\n", __DBL_MIN__, __DBL_MAX__);

    return 0;
}