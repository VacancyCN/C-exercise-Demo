#include<stdio.h>

int main(){
	int n; 
	scanf("%d", &n);
	int i;
	
	for(i = 1; i<=n; i++){
		for(int j = n-i; j>0; j--){
			printf(" ");
		}
		
		for(int j = 0; j<i+(i-1); j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
	
}
