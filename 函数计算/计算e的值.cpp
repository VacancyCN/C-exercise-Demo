#include<iostream>
//编写程序，求e的值，e≈1+1/1！+1/2！+1/3！+1/4！...?最后一项的值小于1e-6。
using namespace std;

int main(){
	int x;
	int nNN(int x);
	
	
	return 0;
}


int nNN(int x){
	if(x == 1)  //结束递归判断条件
	{
		return;
	}
	return x*nNN(x-1);
}




