#include<iostream>
#include<math.h>
//求奇数和，n表示要输入的个数。
//例如：输入5      9  2  3  10  11
//输出：23

using namespace std;

int main(){
	int n;
	cin >> n;
	int ch;
	int sum = 0;
	for(int i = 0; i<n; i++){
		cin >> ch;
		if(ch%2 == 1){
			sum = sum + ch;
		}
	}
	
	cout << sum << endl;
	return 0;
}


