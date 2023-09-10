#include<iostream>
#include<iomanip>//保留小数需要用到的方法所在的库 
using namespace std;
//求Π的值
//公式Π/4=1-1/3+1/5-1/7+......1/n
//注意：当n>1e8时方可退出，求出Π值保留7位小数。
//输出：3.1415926

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
	cout << setiosflags(ios::fixed) << setprecision(7) << pi; //保留七位小数的方法 

}


