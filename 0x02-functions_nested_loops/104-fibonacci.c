#include <stdio.h>
/** main - prints fibonacci
 * Return: nothing
 */

int main(void)
{
    int a = 1, b = 2, c;

    printf("%d, %d, ", a, b);
    for (int i = 2; i < 98; i++)
    {
    c = a + b;
    printf("%d, ", c);
    a = b;
    b = c;
    }
    printf("\n");
    return 0;
}

