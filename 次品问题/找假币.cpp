#include<iostream>
using namespace std;
// 渊子这就去买猪肉，结果找来的零钱中有假币！！！
// 可惜渊子一不小心把它混进了一堆真币里面去了。
// 现在知道假币的重量比真币的质量要轻。
// 给你一个天平，请用最快的时间把那个可恶的假币找出来。
int main(){
	int n;//硬币个数
;
	int result_num = 0; 
	
//	思路：将硬币平均分为三堆，剩余不够的另作为一堆。
//	如果可以均分，则只需一次就可以知道假币在哪一堆，
//	如果不可以整除，则需要两次知道硬币在哪一堆 
	
	for(cin >> n; n>3; n = n/3){  //模拟每次分为三堆之后需要称量的次数 
		if((n%3) == 0){
			result_num++;
		}
		else{
			result_num = result_num + 2;
		}
	}
	
	if(n>1){
		result_num++;
	}
	
	cout << result_num << endl;
	
	return 0;
	
}
