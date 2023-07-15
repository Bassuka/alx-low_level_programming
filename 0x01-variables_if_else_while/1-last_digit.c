#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - (RAND_MAX / 2);

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("Number is zero\n");
    }

    return 0;
}