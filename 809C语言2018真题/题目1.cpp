//һ����д����30�֣�
//�����������ƽ�����꣬�����������֮��ľ��롣
#include<stdio.h>
#include<math.h>
int main(){
	float p[2][2];
	scanf("%f %f", &p[0][0], &p[0][1]);
	scanf("%f %f", &p[1][0], &p[1][1]);
	float res;
	res = pow((pow((p[0][0] - p[1][0]), 2) + pow((p[0][1] - p[1][1]), 2)), 0.5);
	printf("%.2f", res);
	return 0;
}
