#include<stdio.h>
int  nhap(int a[] , int n){
	for ( int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
}
int main(){
	int n;
	int a[100];
	scanf("%d" , &n);
	nhap(a , n);
	
	int max = 0;
	for ( int i = 1 ; i < n ; i++){
		if (a[i] > a[max]){
			max = i;
		}
	}
	printf("%d" , a[max]);
	return 0;
	
}