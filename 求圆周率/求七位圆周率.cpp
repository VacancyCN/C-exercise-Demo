#include<iostream>
#include<iomanip>//����С����Ҫ�õ��ķ������ڵĿ� 
using namespace std;
//�󦰵�ֵ
//��ʽ��/4=1-1/3+1/5-1/7+......1/n
//ע�⣺��n>1e8ʱ�����˳��������ֵ����7λС����
//�����3.1415926

int main(){
	int sign = 1;
	double n = 1, s, sum = 0, pi;
	while (n < 1e8)
	{
		s = sign / n;
		sum = sum + s;
		sign = -sign;
		n = n + 2;
	}
	pi = 4 * sum;
	cout << setiosflags(ios::fixed) << setprecision(7) << pi; //������λС���ķ��� 

}


