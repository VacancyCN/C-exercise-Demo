#include<stdio.h>

int main(){
	int year, month, day;
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
		}
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			if(day>31 || day<1){
				isLeg = false;
			}
		}
		else if( month == 2 ||  month == 4 || month == 6 || month == 9 || month == 11){
			if(day>30 || day<1){
				isLeg = false;
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
		}
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			if(day>31 || day<1){
				isLeg = false;
			}
		}
		else if( month == 2 ||  month == 4 || month == 6 || month == 9 || month == 11){
			if(day>30 || day<1){
				isLeg = false;
			}
		}
	}
	
	if(isLeg == true){
		printf("���ںϷ�\n");
	}
	else{
		printf("Error�����ڲ��Ϸ�\n");
		 
	}
	
	return 0;
	
}
