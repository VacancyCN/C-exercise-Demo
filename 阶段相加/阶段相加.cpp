#include<stdio.h>
#include<math.h>
//题目：计算s=a+aa+aaa+aaaa......（s用long long int 可以存在）
//例如：输入a=2，n=4
//输出：s=2+22+222+2222，输出s的值

int main(){
	int a, n;
	int sum = 0;
	scanf("%d %d", &a, &n);
	while(true){
		for(int i = n, j = 0; i>0||j<n; i--, j++){
			int tmp = pow(10,j);
			sum = sum + a*i*tmp;	
		}
		printf("%d\n", sum);
		scanf("%d %d", &a, &n);
		sum = 0;
	}
	
	return 0;
}
