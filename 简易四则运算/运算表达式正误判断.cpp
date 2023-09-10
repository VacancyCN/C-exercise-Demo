#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int a, b,result;
	char op, Es;
	int sum1 = 0;
	int sum_mul = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i<n; i++){
		scanf("%d%s%d%s%d", &a, &op, &b, &Es, &result);
		switch(op){
//			case '+':
//				if(a+b == result){
//					sum1++;
//				}
//				break;
//				
//			case '-':
//				if(a-b == result){
//					 sum1++;
//					 sum_mul++;
//				}
//				break;
//				
//			case '*':
//				if(a*b == result){
//					 sum1++;
//				}
//				break;	
					
			case '/':
				if(a/b == result){
					sum1++;
				}
				break;
		}
	}
	
	printf("%d %d", sum1, sum_mul);
	return 0;
} 

