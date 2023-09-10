#include<stdio.h>

//一万天纪念日。输出输出示例如下。
//键盘打印：请输入你的姓名
//键盘打印：请输入你的生日，我要帮你确定你的一万天纪念日

//输入： 张文政 2001 9 6
//输出：  2029 1 22

int main(){
	
	char name;
	int year, month, day, k = 0;
	int month_num[12] = {31,28,31,30,31,30,31,31,30,31,31,30};
	printf("请输入你的姓名和出生年月日，用空格隔开\n");
	scanf("%s %d %d %d", &name, &year, &month, &day);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		month_num[1] = 29;
	}
	int sum = 0;
	
	for (int i = month; i < 12; i++){
		sum += month_num[i];
	}
		
	while ((10000 - sum) > 366)
	{
		if (year + 1 % 4 == 0 && year + 1 % 100 != 0 || year + 1 % 400 == 0){
			sum += 366;
		} 
		else{
			sum += 365;
		}
		
		year++;
		
		
		
	}
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		month_num[1] = 29;
	}
	else{
		month_num[1] = 28;
	}
	
	while((10000-sum)>31){
		sum += month_num[k++];
	}
	day = 10000-sum;
	
	printf("%d %d %d\n", year, month, day);
	return 0;
}
