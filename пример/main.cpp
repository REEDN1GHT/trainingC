#include <iostream>
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c,S,r;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	r=((a+b+c)/2);
	S=sqrt(r*(r-a)*(r-b)*(r-c));
	printf("S=%5.2f\t",S);
	printf("p=%5.2f\n",2*r);
	return 0;
}
