#include<iostream>
//��д������e��ֵ��
//e��1+1/1��+1/2��+1/3��+1/4��...?���һ���ֵС��1e-6��
//�õݹ��� 
using namespace std;
int main(){
	double recusion(double x);
	double result;
//	result = recusion(5);
	for(int i = 1; 1/recusion(i) >= 1e-6; i++){
		result = result + 1/recusion(i);
	}
	cout << result;
}

double recusion(double x){
	if(x == 1.0){
		return x;
	}
	return x*recusion(x-1);
}
