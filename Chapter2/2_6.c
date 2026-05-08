/*
    Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
    position p set to the rightmost n bits of y, leaving the other bits unchanged.
*/

#include <stdio.h>

unsigned int setbits(unsigned int x, int position, int number_bits, unsigned int y)
{
    unsigned int mask_x, mask_y;
    // Use ~0u (unsigned) instead of ~0 (signed) to avoid undefined behavior
    // Make a mask and shift y and x
    // example: p = 4, n = 2
    //          y = 00101111 -> mask_y = 00000011 -> shift_left -> mask_y = 00011000
    mask_y = ~(~0u << number_bits);
    mask_y = (mask_y & y) << (position - number_bits + 1);

    mask_x = ~(~0u << number_bits);
    mask_x = (~(mask_x << (position - number_bits + 1))) & x;

    mask_x = mask_x | mask_y;
    return mask_x;
}

int main()
{
    printf("%b", setbits(0b01011100, 4, 2, 0b00101111));
    return 0;
}