#include<stdio.h>
#include<math.h>
//��Ŀ������s=a+aa+aaa+aaaa......��s��long long int ���Դ��ڣ�
//���磺����a=2��n=4
//�����s=2+22+222+2222�����s��ֵ

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
