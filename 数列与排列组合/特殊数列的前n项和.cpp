#include<iostream>
#include<iomanip>
using namespace std;
//��������ǰn���
//����  2/1  3/2  5/3  8/5  13/8  21/13     ������е�ǰn��͡���������λС����
//�������룺5 ��� 8.39    �������� 10 �����16.48
int main(){
	int n;
	cin >> n;
	double sum;
	double tmp[100] = {1,2};
	double temp[100] = {2,3};
	for(int i = 2; i<=n; i++){
		tmp[i] = tmp[i-1]+tmp[i-2];
		temp[i] = temp[i-1]+temp[i-2];
		
	}
	for(int i = 0; i<n; i++){
		sum = sum+temp[i]/tmp[i];
	}

	cout<< setiosflags(ios::fixed) << setprecision(2) << sum;

	return 0;
	
}
