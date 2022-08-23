#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	int i,j,n,m,max,mass[100][100];
	float x;
	setlocale(LC_CTYPE,"Russian");
	cout<<"N= ";
	cin>>n;
	cout<<"M= ";
	cin>>m;
	for(i=0; i<n; i++)
	for(j=0; j<m; j++)
	mass[i][j]=rand() % 20;
	for(i=0; i<n; i++)
	{
	for(j=0; j<m; j++)
	cout<<setw(5)<<mass[i][j];
	cout<<endl;
}
    max=mass[0][0];

    for(i=0; i<n; i++)
    for(j=0; j<m; j++)
    if (mass[i][j]>max)
	{
    	max=mass[i][j];
	}
	cout<<max;
	return 0;
}
