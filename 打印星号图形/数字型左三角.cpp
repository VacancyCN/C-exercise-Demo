#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int i; 
	
	for(i = 1; i<=n; i++){
		for(int j = 0; j<i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	
	for(i = n-1; i>0; i--){
		for(int j = i; j>0; j--){
			printf("%d", i);
		}
		printf("\n");
	}
	
	return 0;
}
