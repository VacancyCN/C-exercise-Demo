#include<iostream>
using namespace std;
//��д���򣬴Ӽ���������������n?��
//��n==0�˳�����(n������20)��
//��ӡ��Ӧ��n�����������Ρ�
//����Ӽ�������4,���������ͼ��:
//1
//1 1
//1 2 1
//1 3 3 1
int main(){
	int n;
	cin >> n;
	int ch[100][100];

	for(int i = 0; i<n; i++){
		for(int j = 0; j<=i; j++){
			if(i == 0 && j == i){
				ch[i][j] = 1;
			}else{
				ch[i][j] = ch[i-1][j-1] + ch[i-1][j];
			}
			
			cout << ch[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

