/*
    Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.

*/

#include <stdio.h>

int htoi(char hex[])
{
    int result, i;
    result = 0;
    i = 2;
    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            result = result * 16 + (hex[i] - '0');
            i++;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            result = result * 16 + (hex[i] - 'a' + 10);
            i++;
        }
        else if (hex[i] >= 'A' && hex[i] <= +'F')
        {
            result = result * 16 + (hex[i] - 'A' + 10);
            i++;
        }
    }
    return result;
}

int main()
{
    printf("%d\n", htoi("0xF"));
    return 0;
}
