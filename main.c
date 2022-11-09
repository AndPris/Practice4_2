#include <stdio.h>

void sort(float *array, short size, short type) {
    float temp;
    for (short i = 0; i < size; i++) {
        for(short j = i+1; j < size; j++) {
            if (type == 1) {
                if (array[i] > array[j]) {
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            } else {
                if (array[i] < array[j]) {
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
    }
}

int main() {
    short n, check;
    char ch, cond;

    do {
        cond = 0;
        printf("Enter 1 to sort from the smallest number to the biggest or 2 to sort from the biggest number to the smallest:\n");
        scanf("%hd%c", &check, &ch);
        if(ch != '\n') {
            printf("Invalid data\n");
            fflush(stdin);
            cond = 1;
            continue;
        }

        if(check != 1 && check != 2) {
            printf("Number out of range\n");
            fflush(stdin);
            cond = 1;
            ch = ' ';
        }
    } while(cond);
    ch = ' ';

    do {
        cond = 0;
        printf("Size of the array:\n");
        scanf("%hd%c", &n, &ch);

        if(ch != '\n') {
            printf("Invalid data\n");
            cond = 1;
            fflush(stdin);
            continue;
        }

        if(n <= 0) {
            printf("The size of the array can't be lower then 1\n");
            cond = 1;
            fflush(stdin);
            ch = ' ';
        }
    } while(cond);
    ch = ' ';

    float arr[n];

    printf("Enter the elements of the array\n");
    for(short i = 0; i < n; i++) {
        do {
            cond = 0;
            scanf("%f%c", &arr[i], &ch);

            if(ch != '\n') {
                printf("Invalid data\n");
                cond = 1;
                fflush(stdin);
            }
        } while(cond);
        ch = ' ';
    }

    sort(&arr, n, check);

    for(short i = 0; i < n; i++) {
        printf("%g ", arr[i]);
    }

    return 0;
}