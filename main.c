#include <stdio.h>
#include <math.h>

int main()
{
    int arr[] = { 1, 2, 3 };
    int *p;

    p = &arr[1];
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);

    return 0;
}