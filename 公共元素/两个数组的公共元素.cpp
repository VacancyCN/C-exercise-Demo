#include<iostream>
using namespace std;
//�������һά�����С�ֱ�Ϊn��m���ж����ڵ�����int�ͣ����������д�������Ϊ999��
//���磺
//����������
//10
//8
//1  1  1  2  100  4  7  11  0  2
//1  2  100  1  0  3  8  2
//���������
//1  2  100  0
int main (){
	int ch[999];
	int con[999];
	int res[999];
	int m ,n;
	int tmp = 0;
	
	cin >> m >> n;
	
	for(int i = 0; i<m; i++){
		cin >> ch[i];
	}
	for(int i = 0; i<n; i++){
		cin >> con[i];
	}
	
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(ch[i] == con[j]){
				res[tmp] = ch[i];
//				cout << res[tmp] << " ";
				tmp++;
				break;
			}
		}
	}
	
	for(int i = 0; i<=tmp; i++){
		for(int j = tmp; j>i; j--){
			if(res[i] = res[j]){
				if(j == tmp){
					tmp--;
				}else{
					for(int m = j; m<=tmp; m++){
						res[m] = res[m+1];
						tmp--;
					}
				}
			}
		}
	}
	
	for(int i = 0; i<=tmp; i++){
		cout << res[i] << " ";
	}
	
	return 0;
}
