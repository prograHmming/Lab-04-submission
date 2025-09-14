#include <stdio.h>
int main() {
    int x;
    int y;
    int z;

    printf("Enter first integer ");
    scanf("%d", &x);
    printf("Enter second integer  ");
    scanf("%d", &y);
    printf("Enter third integer  ");
    scanf("%d", &z);


if (x==y && x==z){
	    printf (" %d, %d, and %d are all equal numbers", x , y, z);	  
	} else if (x==z && x > y){    
	    printf (" %d and %d are the largest numbers", x , z); 
	} else if (x==y && x > z){
	    printf (" %d and %d are the largest numbers", x , y); 
	} else if (y==z && y > x){
	    printf (" %d and %d are the largest numbers", y , z);     
    } else if (x > y && x > z) {
        printf("The largest number is %d.", x);
    } else if (y > x && y > z) {
        printf("The largest number is %d.", y);
    } else if(z > y && z > x) {
        printf("The largest number is %d.", z);    
    } 

    return 0;
}
