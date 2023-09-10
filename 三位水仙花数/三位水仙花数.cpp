#include<stdio.h>
#include<math.h>

int main(){
	int num;
	int x, y, z;
	scanf("%d", &num);
	while(true){
		x = num/100;
		y = num%100/10;
		z = num%10;
		x = pow(x,3);
		y = pow(y,3);
		z = pow(z,3);
		if((x+y+z) == num){
			printf("1");
		}
		else{
			printf("0");
		}
		scanf("%d", &num);
	}

	
	return 0;
} 
