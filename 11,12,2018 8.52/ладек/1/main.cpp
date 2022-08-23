#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float N;
	int i, n, a=0, min=1000;
	cin>>n;
	cout<<"n= "<<n<<endl;
	for (i=1; i<=n; i++)
	{
	cout<<"Write a ["<<i<<"]= ";
	cin>>a;
	if (min>a) 	 
	{min=a;}
	cout<<min;	}
	return 0;
}
