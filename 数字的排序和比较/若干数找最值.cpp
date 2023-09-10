#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//输入若干个数，以-1结束，输出最大值和最小值
int main(){
	int ch[1000];
	int len;
	for(int i = 0; i<1000; i++){
		scanf("%d", &ch[i]);
		if(ch[i] == -1){
			len = i+1;
			break;
		}
		
	}
	
	
	printf("%d\n", len);
	
	for(int i = 0; i<len-1; i++){
		for(int j = 0; j< len-1-i; j++){
			if(ch[j]>ch[j+1]){
				int tmp = ch[j];
				ch[j] = ch[j+1];
				ch[j+1] = tmp;
			}
		}
	}
	
//	for(int i = 0; i<len; i++){
//		printf("%d ", ch[i]);
//	}
	printf("最小的数是%d，最大的数是%d", ch[0], ch[len-1]);
	return 0;
}
