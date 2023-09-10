#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float result_x1, result_x2;
	
	result_x1 = (-b+sqrt(pow(b, 2)-4*a*c))/2*a;
	result_x2 = (-b-sqrt(pow(b, 2)-4*a*c))/2*a;
	
	if(result_x1 == result_x2){
		printf("此二次方程有唯一解x=%.2f\n", result_x1);
	}
	else{
		printf("此二次方程的解是x=%.2f或x=%.2f\n", result_x1, result_x2);
	}
	
	return 0;
} 
