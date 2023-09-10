#include<iostream>
using namespace std;

//计算两个矩阵的乘积，第一个是2*3矩阵，第二个是3*2矩阵，结果为一个2*2矩阵。 
//输入
//输入包含多组数据，先输入一个2*3矩阵，再输入一个3*2矩阵。 
//样例输入
//1 1 1
//1 1 1
//1 1
//1 1
//1 1
//样例输出
//3 3
//3 3
int main(){
	
	int x[2][3], y[3][2], c[2][2];
	int sum;
	for(int i = 0; i<2; i++){
		for(int j = 0; j<3; j++){
			cin >> x[i][j];
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<2; j++){
			cin >> y[i][j];
		}
	}
	
	for (int i = 0; i < 2; i++)
		
		{
			sum = 0;
			for (int j = 0; j < 3; j++)
			{
				sum += x[i][j] * y[j][0];
			}
			c[i][0] = sum;
			
			sum = 0;
			for (int j = 0; j < 3; j++)
			{
				sum += x[i][j] * y[j][1];
			}
			c[i][1] = sum;
		}
	
	
	for(int i = 0; i<2; i++){
		for(int j = 0; j<2; j++){
			cout << c[i][j];
		}
		cout << endl;
	}
	return 0;
}
