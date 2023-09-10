//输入三个整数，输出中间那个不大不小的数。
#include<stdio.h>
int main(){
	float ch[3];
	
	for(int i = 0; i<3; i++){
		scanf("%f", &ch[i]);
	}
	
	for(int i = 0; i<3; i++){
		for(int j = i+1; j<3; j++){
			if(ch[i]<ch[j]){
				int tmp = ch[i];
				ch[i] = ch[j];
				ch[j] = tmp;
			}
		}
	}
	
	printf("%.2f", ch[1]);
	return 0;
}
