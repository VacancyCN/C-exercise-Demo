#include<stdio.h>

//该问题叙述如下：鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；百钱买百鸡，则翁、母、雏各几何？
//翻译过来，意思是公鸡一个五块钱，母鸡一个三块钱，小鸡三个一块钱，现在要用一百块钱买一百只鸡，问公鸡、母鸡、小鸡各多少只？

int main(){
	int x,y,z;
	
	for(x = 0; x<=20; x++){
		for(y = 0; y<=33; y++){
			
			z = (100-x-y);
			
			if( ((5*x+3*y+z/3) == 100) && z%3 == 0 ){
				printf("公鸡有%d只，母鸡有%d只，小鸡有%d只\n", x, y, z);	
			}
		}
	}
	
	return 0;
	
}
