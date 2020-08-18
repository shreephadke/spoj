#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr [100];
    int i = -1;
    do
    {
        i++;
        printf("Enter dimensions ");
        scanf("%d", &arr[i]);
    }
    while (arr[i] >= 1 && arr[i] <= 100);

    for (int j = 0 ; j < i; j++)
    {
        arr[j] = (arr[j]*(arr[j]+1)*(2*arr[j]+1))/6;
        printf("%d\n", (arr[j]));
    }

    return 0;
}
