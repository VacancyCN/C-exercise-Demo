#include<stdio.h>

int main(){
	int n;
	int i;
	scanf("%d", &n);
	
	for(i = 1; i<=n; i++){
		for(int j = 0; j<i; j++){
			printf("*");
			
		}
		printf("\n");
	}
	for(i = n-1; i>0; i--){
		
		for(int j = n-i; j>0; j--){
			printf(" ");
		}
		
		for(int j = i; j>0; j--){
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
