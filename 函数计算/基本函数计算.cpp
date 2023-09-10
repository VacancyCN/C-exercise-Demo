#include<stdio.h>
#include<math.h>
//编程，输入n后：输入n个数，根据下式计算并输出y值。
//y=x2 - sinx                        x < -2
//y =2X + x                      - 2 <= x <= 2
//	 ___________
//y=√X2 + X + 1                      x > 2

int main(){
	int n;
	scanf("%d", &n);
	
	int x;
	float y;
	scanf("%d", &x);
	
	for(int i = 0; i<n ;i++){
		bool is_x;
		if(x>=2){
			is_x = 0;
		}else if(x > -2 && x < 2){
			is_x = 1;
		}else if(x < -2){
			is_x = 2;
		}
		switch(x){
			case 0:
				y = x*x - sin(x);
				break;
			case 1:
				y = pow(2, x) +x;
				break;
				
			case 2:
				int tmp = x*x + x + 1;
				y = sqrt(tmp);
			
		}
		printf("%f", y);
	}
	
	return 0;
}
