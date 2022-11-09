#include <stdio.h>

int main() {
    short n;
    char ch, cond;

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
                continue;
            }
        } while(cond);
        ch = ' ';
    }




    return 0;
}