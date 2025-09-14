#include<stdio.h>
int main (){
	int wl;
	printf("Enter the water level in your area") ;
	scanf("%d" , &wl);
	
	if(wl < 0){
		printf ("water level can not be negative. Enter a valid number");
	} else if	(wl < 2 ){
		printf ("no relief required");
	} else if (wl >=2 && wl<=4){
		printf ("small relief package");
	} else if (wl >4 && wl<=6){
		printf ("medium relief package");
	} else if (wl >6){
		printf ("evacuation required");

	} 		
 return 0;
}
