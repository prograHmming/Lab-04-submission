#include <stdio.h>
#include <math.h>   

int main() {
    float a, b;
    
    printf("Enter the first number: ");
    scanf("%f", &a);
    
    printf("Enter the second number ");
    scanf("%f", &b);
    
    char operator;
    printf("Enter the operator between (+, -, *, /, %%, ^) ");
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
            }break;
        case '%':
        	if ((int)b == 0){
        		printf ("Error. modulus by zero can not be done." );
			} else {
				printf ("%d %% %d = %d", (int)a, (int)b, (int)a % (int)b);
			} break;
		 case '^':
		 	printf("%.2f ^ %.2f = %.2f", a, b, pow(a, b));
			 break;    
		 	
  default:
            printf("Invalid operator! Please enter one of the following: +, -, *, /, %% , ^ "  );        
    }          
          

    return 0; 
}

 
    	
