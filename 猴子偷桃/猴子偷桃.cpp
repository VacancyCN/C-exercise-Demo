#include<stdio.h>

int main(){
	int sum = 1;
	for(int i = 0; i<10; i++){
		sum = (sum +1)*2;
	}
	printf("%d", sum);
	return 0;
} 
