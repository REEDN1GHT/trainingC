#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int i,j,n,m,mass[100][100];
	setlocale(LC_CTYPE,"Russian");
	cout<<"N= ";
	cin>>n;
	cout<<"M= ";
	cin>>m;
	for(i=0;i<n;i++)//������
	for(j=0;j<m;j++)//�������
	if(i%2==0)
	  mass[i][j]=0;
	  else
	  mass[i][j]=1;
	
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	cout<<mass[i][j];
	cout<<endl;
}
	return 0;
}
