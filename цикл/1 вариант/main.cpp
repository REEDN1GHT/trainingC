#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;
int main() {
	float x,y;x=0;
	while(x<=pi)
		{
	y=exp(sin(x))*cos(x);
	cout<<"y= "<<y<<endl;
	x+=0.1;
	}
		return 0;
}
