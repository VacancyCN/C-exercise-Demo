#include<stdio.h>

int main(){
	int year, month, day;
	int sum; 
	int num[12] = {31,28,31,30,31,30,31,31,30,31,31,30};
	printf("�밴�����յĸ�ʽ���룬�м�ո�\n");
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
		printf("���ںϷ�\n");
		printf("��������%d��ĵ�%d�졣\n", year, sum);
	}
	else{
		printf("Error�����ڲ��Ϸ�\n");
		 
	}
	
	return 0;
	
}
