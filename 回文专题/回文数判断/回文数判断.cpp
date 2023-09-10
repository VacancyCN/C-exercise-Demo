#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	bool isHuiwen = true;
	char ch[10000];
	
	gets(ch);
	n = strlen(ch);
	while(ch){
		for(int i = 0, j = n-1; i<j; i++, j--){
			if(ch[i] != ch[j]){
				isHuiwen = false;
				break;
			}
		}
		if(isHuiwen == true){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
		gets(ch);
		isHuiwen = true;
	}


	
	return 0;	
} 
