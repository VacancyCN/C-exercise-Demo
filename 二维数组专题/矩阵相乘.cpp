#include<iostream>
using namespace std;

//������������ĳ˻�����һ����2*3���󣬵ڶ�����3*2���󣬽��Ϊһ��2*2���� 
//����
//��������������ݣ�������һ��2*3����������һ��3*2���� 
//��������
//1 1 1
//1 1 1
//1 1
//1 1
//1 1
//�������
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
