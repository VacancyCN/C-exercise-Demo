#include<stdio.h>
int Fibon(int n)
{
   if (n == 1|| n == 2)
   {
	   return 1;
   }
   else
   {
	   return Fibon(n-1)+ Fibon(n-2);
   }
}
int main()
{
	int a = Fibon(8);
	printf("%d", a);
	return 0;
} 
