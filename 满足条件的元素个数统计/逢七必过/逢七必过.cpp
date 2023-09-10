#include<iostream>
//输出7和7的倍数，还有包含7的数字例如（17，27，37…70，71，72，73…）的个数。
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0;
	
	for(int i = n; i>=7; i--){
		if(i%7 == 0){
			sum++;
			cout << i <<endl;
		}
		else{
			int j = i;
			while(j){
				if(i%10 == 7){
					sum++;
					cout << i <<endl;
					break;
				}else{
					j/=10;
				}
			}	
		}
	}

	cout << sum << endl;
	
	return 0;
}
