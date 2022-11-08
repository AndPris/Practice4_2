#include <stdio.h>

int main() {
    short n;

    printf("Length:");
    if(scanf("%d", &n) <= 0) {
        printf("Invalid data");
        return 0;
    }

    float arr[n];
    printf("Enter the elements of the array\n");
    for(short i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    for(short i = 0; i < n; i++) {
        printf("%f ", arr[i]);
    }


    return 0;
}