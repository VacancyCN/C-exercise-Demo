#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�������ɸ�������-1������������ֵ����Сֵ
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
	printf("��С������%d����������%d", ch[0], ch[len-1]);
	return 0;
}
