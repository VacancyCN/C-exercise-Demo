#include<iostream>
//��д������e��ֵ��e��1+1/1��+1/2��+1/3��+1/4��...?���һ���ֵС��1e-6��
using namespace std;

int main(){
	int x;
	int nNN(int x);
	
	
	return 0;
}


int nNN(int x){
	if(x == 1)  //�����ݹ��ж�����
	{
		return;
	}
	return x*nNN(x-1);
}




