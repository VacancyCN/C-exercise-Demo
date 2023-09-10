#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	wchar_t arr[] = { '〇','一','二','三','四','五','六','七','八','九' };
	wchar_t arr2[50];
	int str;
	int temp = 0;
	scanf("%d", &str);
//	while(str>0){
//		int tmp = str%10;
//		printf("%d", tmp);
//		arr2[temp] = arr[tmp];
//		printf("%c", arr[tmp]);
//		temp++;
//		str /= 10;
//	}
	for(int i = 0; i < 50; i++) {
		if (str > 0) {
			int tmp = str % 10;
			printf("%d\n", tmp);
			printf("%c\n", arr[tmp]);
//			arr2[i] = arr[tmp];
//			temp++;
			str /= 10;
		}
		else {
			break;
		}
	}
	for (int i = temp-1; i >= 0; i--) {
		printf("%c", arr2[i]);
	}
	return 0;
}
