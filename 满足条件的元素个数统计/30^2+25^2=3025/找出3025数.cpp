#include<iostream>
#include<math.h>
using namespace std;

//3025���������һ�ֶ��ص����ʣ�
//����ƽ��Ϊ���Σ���30��25��ʹ֮��Ӻ���ƽ����
//��(30 + 25)2��ǡ�õ���3025����
//����������������ʵ�ȫ����λ��

int main(){
	for(int i = 1000; i<9999; i++){
		if( pow( (i%100) + ((i-i%100)/100) , 2 ) == i){
			cout << i << endl;
		}
	}
	return 0;
}




