#include<iostream>
#include<math.h>
//�������ͣ�n��ʾҪ����ĸ�����
//���磺����5      9  2  3  10  11
//�����23

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


