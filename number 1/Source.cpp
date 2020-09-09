#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int num1, num2, loop1, loop2, total;
    scanf("%d", &num1);
    scanf("%d", &num2);
    for (loop1 = 1; loop1 <= num1; loop1++)
    {
        total = loop1;
        for (loop2 = 1; loop2 < num2; loop2++)
        {
            total = loop1 * total;
        }
        printf("%d ", total);
    }
    return 0;
}
