#include<iostream>
#include<math.h>
using namespace std;

//3025这个数具有一种独特的性质：
//将它平分为二段，即30和25，使之相加后求平方，
//即(30 + 25)2，恰好等于3025本身。
//请求出具有这样性质的全部四位数

int main(){
	for(int i = 1000; i<9999; i++){
		if( pow( (i%100) + ((i-i%100)/100) , 2 ) == i){
			cout << i << endl;
		}
	}
	return 0;
}




