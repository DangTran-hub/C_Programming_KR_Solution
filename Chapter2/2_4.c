/*
    Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.

*/
#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    for (i = 0; s2[i] != '\0'; i++)
    {
        for (j = k = 0; s1[j] != '\0'; j++)
        {
            if (s1[j] != s2[i])
            {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
    }
}

int main()
{
    /* squeeze("hello", "lo"); */
    /*
        With the line of code 26th, terminal returns Segmentation fault because
        "hello" is in Read-Only-Memory, but function squeeze() do write to it, so
        compliler cannot understand and defines like a undefined behavior.

        The solution is declare the first argument of squeeze() like a string so
        we can write to it and the error gone.
    */

    char s1[] = "hello";
    squeeze(s1, "lo");
    printf("%s\n", s1);

    return 0;
}