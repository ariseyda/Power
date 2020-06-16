#include<stdio.h>

//Get an integer and power to find a^b
//For example:5^3=5*5*5=125

int main(){
	
	int a,b;
	int result=1;
	
	printf("Please enter an integer and its power:");
	scanf("%d%d",&a,&b);
	
	for(;b>0;b--){
		result*=a;
	}
	printf("Result:%d",result);
	
	
	
	return 0;
}


