#include <stdio.h>

int main() {
    int i;

    printf("Enter an integer: ");
    scanf("%d", &i);

    if (i >0) {;
        printf("The number is positive.");
    } else if (i < 0) {
        printf("The number is negative.");
    } else {
        printf("The number is zero.");
    }

    return 0;
}

