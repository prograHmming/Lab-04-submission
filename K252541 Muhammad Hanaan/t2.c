#include <stdio.h>

int main() {
    float a, b;
    
    printf("Enter the first number: ");
    scanf("%f", &a);
    
    printf("Enter the second number ");
    scanf("%f", &b);
    
    char operator;
    printf("Enter the operator between (+, -, *, /) ");
    scanf(" %c", &operator); 

    
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f", a, b, a + b);
            break;
            
        case '-':
            printf("%.2f - %.2f = %.2f", a, b, a - b);
            break;
            
        case '*':
            printf("%.2f * %.2f = %.2f", a, b, a * b);
            break;
            
        case '/':
            if (b != 0) {
                printf("%.2f / %.2f = %.2f", a, b, a / b);
            } else {
                printf("Error. Denominator can not be zero.");
            }
            break;
    	 default:
            printf("Invalid operator! Please enter one of the following: +, -, *, /\n");        
    }

    return 0;
}

