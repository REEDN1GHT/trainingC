#include <iostream>
using namespace std;

int vi(int a, int c)
{
	if (a<c)
	{
	  cout<<a<<" ";

        return vi(a+1,c);
	  }
}

int main(int argc, char** argv) {
	int a,c;
	cin>>a>>c;
	cout<<vi(a,c)<<" ";
	return 0;
}
