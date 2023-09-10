//一、编写程序（30分）
//输入两个点的平面坐标，输出这两个点之间的距离。
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
