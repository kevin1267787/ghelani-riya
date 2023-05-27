#include<stdio.h>

int main(){
	
	float b,h,area;
	
	printf("Enter Heigth and Base of Triangle:");
	scanf("%f%f",&h, &b);
	
	area=(h*b)/2;
	printf("Area of Tringel is:%f\n",area);
	
	return 0;
	
}
