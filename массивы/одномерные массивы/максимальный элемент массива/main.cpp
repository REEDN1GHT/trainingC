#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{

	int x[200];
	int i,n;
	int max;
	cout<<"Vedite col-vo elementov v massive"<<endl;
	cin>>n;
	for (i=0; i<n;i++)
	cin>>x[i];

 max=x[0];

    for(i=0; i<n; i++)
    if (x[i]>max)
	{
	 max=x[i];
	}

    cout<<max;

	
}
