#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float result_x1, result_x2;
	
	result_x1 = (-b+sqrt(pow(b, 2)-4*a*c))/2*a;
	result_x2 = (-b-sqrt(pow(b, 2)-4*a*c))/2*a;
	
	if(result_x1 == result_x2){
		printf("�˶��η�����Ψһ��x=%.2f\n", result_x1);
	}
	else{
		printf("�˶��η��̵Ľ���x=%.2f��x=%.2f\n", result_x1, result_x2);
	}
	
	return 0;
} 
