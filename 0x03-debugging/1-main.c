#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10) /* we haven't told i variable what to do like whether to increment or decrease so with i equalling 0 it will always be less than 10 and the computer does not know when to exit the while loop, so somewhere within this loop we need to give the i variable some way to interact with the argument */
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
