#include<stdio.h>

int main(){
	int menu;
	
	float a, b;
	printf("\n");
	printf("********************\n");     
	printf("*******������*******\n"); 
	printf("*****1.��  2.��*****\n");
	printf("*****3.��  4.��*****\n");
	printf("*******5.�˳�*******\n");
	printf("********************\n");
	printf("\n");
	scanf("%d", &menu);
	while(menu){
		
		switch(menu){
			
			case 1:
				printf("\n");
				printf("��������������\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a+b);
				break;
			case 2:
				printf("\n");
				printf("��������������\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a-b);
				break;
			case 3:
				printf("\n");
				printf("��������������\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a*b);
				break;
			case 4:
				printf("\n");
				printf("��������������\n"); 
				scanf("%f %f", &a, &b);
				printf("%.2f", a/b);
				break;
		}
		printf("\n");
		printf("********************\n");     
		printf("*******������*******\n"); 
		printf("*****1.��  2.��*****\n");
		printf("*****3.��  4.��*****\n");
		printf("*******5.�˳�*******\n");
		printf("********************\n");
		printf("\n");
		scanf("%d", &menu);
	}
	
	return 0;
}
