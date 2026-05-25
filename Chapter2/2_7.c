/*
    Write a function invert(x,p,n) that returns x with the n bits that begin at
    position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/

#include <stdio.h>

unsigned int invert(unsigned int x, int position, int number_bits)
{
    unsigned int mask_1, mask_2;
    mask_1 = ~(~0u << number_bits);
    mask_1 = (mask_1 << (position - number_bits + 1)) & (~x);

    mask_2 = ~(~0u << number_bits);
    mask_2 = ~((mask_2 << (position - number_bits + 1))) & x;

    mask_1 = mask_1 | mask_2;

    return mask_1;
}

int main()
{
    printf("%b", invert(0b10101001, 5, 3));
    return 0;
}