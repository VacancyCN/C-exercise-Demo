#include<stdio.h>

int main(){
	int menu;
	
	float a, b;
	printf("\n");
	printf("********************\n");     
	printf("*******计算器*******\n"); 
	printf("*****1.加  2.减*****\n");
	printf("*****3.乘  4.除*****\n");
	printf("*******5.退出*******\n");
	printf("********************\n");
	printf("\n");
	scanf("%d", &menu);
	while(menu){
		
		switch(menu){
			
			case 1:
				printf("\n");
				printf("请输入两个数：\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a+b);
				break;
			case 2:
				printf("\n");
				printf("请输入两个数：\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a-b);
				break;
			case 3:
				printf("\n");
				printf("请输入两个数：\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a*b);
				break;
			case 4:
				printf("\n");
				printf("请输入两个数：\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a/b);
				break;
		}
		printf("\n");
		printf("********************\n");     
		printf("*******计算器*******\n"); 
		printf("*****1.加  2.减*****\n");
		printf("*****3.乘  4.除*****\n");
		printf("*******5.退出*******\n");
		printf("********************\n");
		printf("\n");
		scanf("%d", &menu);
	}
	
	return 0;
}
