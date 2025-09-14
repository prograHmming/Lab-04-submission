#include<stdio.h>
int main (){
	int rf;
	printf("Enter rainfall in your area ") ;
	scanf("%d" , &rf);
	int rl;
	printf("Enter the riverflow in your area ") ;
	scanf("%d" , &rl);
	
	if(rf < 0 || rl < 0){
		printf ("Enter valid numbers");
	} else if	(rf < 50 && rl < 200 ){
		printf ("Low risk");
	} else if (rf >= 50 && rf <= 100 && rl >= 200 && rl <= 500){
		printf ("Moderate risk");
	} else if (rf > 100 && rf <= 150 && rl > 500 && rl <= 800){
		printf ("High risk");
	} else if (rf > 150 && rl > 800){
		printf ("Severe Risk.  Evacuate!");
	}else {
    printf("No exact risk level found for the given values.");
}		
 return 0;
}
