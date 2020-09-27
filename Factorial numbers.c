//*Name 	: Singgih Febriana
//*Project 	: Factorial
//*Date		: September 27,2020


#include<stdio.h>

main(){
	int i,numbers,result=1;
	printf("Enter your factorial number = ");
	scanf("%d",&numbers);
	
	for (i=1;i<=numbers;i++){
		
		result*=i; 
		
	}
	
	printf("the Factorial of %d! is %d, okay good luck",numbers,result);
}
