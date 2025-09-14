#include <stdio.h>

int main() {
    int m;

    printf("Enter marks out of 100: ");
    scanf("%d", &m);

    if (m >= 85 && m <= 100) {
        printf("your grade is A");
    } 
    else if (m >= 70 && m <= 84) {
        printf("your grade is B");
    } 
    else if (m >= 55 && m <= 69) {
        printf("your grade is C");
    } 
    else if (m >= 40 && m <= 54) {
        printf("your grade is D");
    } 
    else if (m >= 0 && m < 40) {
        printf("your grade is F");
    } 
    else {
        printf("Marks should be between 0 and 100.");
    }

    return 0;
}

