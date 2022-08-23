#include <iostream>
#include <math.h>
using namespace std;
int ch3(int n)
{
 int m,b;
  if (n>=0)
  {
    m=n-3;
    cout<<n<<"+";
   return n+ch3(m);
	}
    else
return 0;
}

int main() {
	int n,b;
	cin>>n;
    cout<<"="<<ch3(n);
	return 0;
}
