#include<iostream>
using namespace std;
//编写程序，从键盘输入多个正整数n?，
//当n==0退出程序(n不大于20)，
//打印对应的n层的杨辉三角形。
//例如从键盘输入4,则输出如下图形:
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

