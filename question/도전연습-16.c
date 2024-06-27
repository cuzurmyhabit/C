#include <stdio.h>

void reverse(int* pa, int size);

int main(void)
{
    int ary[] = { 99, 77, 44, 5, 66, 33, 11 }; 
    int arySize = sizeof(ary) / sizeof(ary[0]); 

    reverse(ary, arySize);

    for (int i = 0; i < arySize; i++) {
        printf("%d ", ary[i]);
    }
    return 0;
}

void reverse(int* pa, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = pa[i];
        pa[i] = pa[size - 1 - i];
        pa[size - 1 - i] = temp;
    }
}
