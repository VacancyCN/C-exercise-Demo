#include<stdio.h>

int main(){
	int year, month, day;
	int sum; 
	int num[12] = {31,28,31,30,31,30,31,31,30,31,31,30};
	printf("请按年月日的格式输入，中间空格：\n");
	scanf("%d %d %d", &year, &month, &day);
	bool isLeg = true;
	if(year%4 == 0){
		if(month>12 || month<1){
			isLeg = false;
		}
		else if(month == 2){
			if(day>29 || day<1){
				isLeg = false;
			}
			else{
				for(int i = 0; i<month-1; i++){
					sum = sum+num[i];
				}
				sum = sum+day;
			}
		}
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			if(day>31 || day<1){
				isLeg = false;
			}
			else{
				for(int i = 0; i<month-1; i++){
					sum = sum+num[i];
				}
				sum = sum+day;
			}
		}
		else if( month == 2 ||  month == 4 || month == 6 || month == 9 || month == 11){
			if(day>30 || day<1){
				isLeg = false;
			}
			else{
				for(int i = 0; i<month-1; i++){
					sum = sum+num[i];
				}
				sum = sum+day;
			}
		}
	}
	else{
		if(month>12 || month<1){
			isLeg = false;
		}
		else if(month == 2){
			if(day>28 || day<1){
				isLeg = false;
			}
			else{
				for(int i = 0; i<month-1; i++){
					sum = sum+num[i];
				}
				sum = sum+day-1;
			}
		}
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			if(day>31 || day<1){
				isLeg = false;
			}
			else{
				for(int i = 0; i<month-1; i++){
					sum = sum+num[i];
				}
				sum = sum+day;
			}
		}
		else if( month == 2 ||  month == 4 || month == 6 || month == 9 || month == 11){
			if(day>30 || day<1){
				isLeg = false;
			}
			else{
				for(int i = 0; i<month-1; i++){
					sum = sum+num[i];
				}
				sum = sum+day;
			}
		}
	}
	
	if(isLeg == true){
		printf("日期合法\n");
		printf("该日期是%d年的第%d天。\n", year, sum);
	}
	else{
		printf("Error！日期不合法\n");
		 
	}
	
	return 0;
	
}
