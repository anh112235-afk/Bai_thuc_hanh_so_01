#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d", &a , &b);
	int x = a;
	int y = b;
	while (x * y != 0){
		if ( x > y) x = x % y;
		else y = y % x;
		
	}
	int uscln = x + y;
	int bcnn = a / uscln * b;
	printf("%d" , bcnn);
	return 0;
}