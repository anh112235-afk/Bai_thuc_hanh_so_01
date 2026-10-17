#include<stdio.h>
#include<math.h>
void ptb1(float a , float b){
	if ( a == 0){
		if ( b == 0){
			printf("VSN");
		}else printf("VN");
	}else {
		float x = -b/a;
		printf("%.2f", x);
	}	
}
int main(){
	float a , b, c;
	scanf("%f%f%f", &a , &b , &c);
	if ( a == 0) ptb1(b,c);
	else {
		float delta = b*b - 4*a*c;
		if ( delta <  0) printf("VN");
		else if (delta == 0){
			float x = -b/(2*a);
			printf("%.2f", x);
		}else {
			float x1 = (-b + sqrt(delta))/(2*a);
			float x2 = (-b - sqrt(delta))/(2*a);
			printf("%.2f %.2f", x1 , x2);
		}	 
	}
	return 0;
	
}