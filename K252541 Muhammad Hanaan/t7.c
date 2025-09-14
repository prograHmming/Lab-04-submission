#include <stdio.h>

int main() {
    int u;

    printf("Enter number of units consumed this month ");
    scanf("%d", &u);
    float b;
    
    if (u < 0) {
        printf("Enter valid units");        
    }else if (u >= 0 && u <= 100) {
    	b = u * 10;
        printf("your bill for this month is %.2f" ,b );
    } 
    else if (u <= 300) {
    		b = (100 * 10) + ((u-100) * 15);
        printf("your bill for this month is %.2f" ,b );
    } 
    else if (u <= 500 ) {
    		b = (100 * 10) + (200 * 15) + ((u-300) * 20);
        printf("your bill for this month is %.2f" ,b );
    } 
    else if (u > 500) {
    		b = (100 * 10) + (200 * 15) + (200 * 20) +((u-500)* 25);
        printf("your bill for this month is %.2f" ,b );
    } 

    return 0;
}

