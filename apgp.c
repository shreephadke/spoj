#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool AP (int a, int b, int c);
bool GP (int a, int b, int c);
void nextAP (int a, int b, int c);
void nextGP (int a, int b, int c);

int main(void)
{
    int i = -3;
    int arr[10000];
    do
    {
        i += 3;
        scanf("%d %d %d", &arr[i], &arr[i+1], &arr[i+2]);
        //printf("%d %d %d", arr[i], arr[i+1], arr[i+2]);

    }
    while(arr[i] != 0 || arr[i+1] != 0 || arr[i+2] != 0);

    //printf("hello\n");

    for (int j = 0; j < i; j+=3)
    {
        if ( AP(arr[j], arr[j+1], arr[j+2]) )
        {
            printf("AP ");
            nextAP(arr[j], arr[j+1], arr[j+2]);
        }

        else
        {
            printf("GP ");
            nextGP(arr[j], arr[j+1], arr[j+2]);
        }

    }


    return 0;

}

bool AP (int a, int b, int c) { return a + c == 2*b; }
bool GP (int a, int b, int c) { return a * c == b * b; }
void nextAP (int a, int b, int c) {printf("%d\n", c - b + c);}
void nextGP (int a, int b, int c) {printf("%d\n", c * c / b);}
