#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double const pi=3.14;
	float x,y;
	x=-2*pi;
	do
	{
		y=cos(x);
		cout<<"x= "<<x<<"y= "<<y<<endl;
	    x+=pi/8;
	}
	while (x<=2*pi);
	return 0;
}
