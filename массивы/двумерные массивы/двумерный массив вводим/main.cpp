#include <iostream>
#include <iomanip>>
using namespace std; 
int main() {
	int i,j,n,m,mass[100][100];
	setlocale(LC_CTYPE,"Russian");
	cout<<"N= ";
	cin>>n;
	cout<<"M= ";
	cin>>m;
	cout<<"¬ведите значени€ матрицы"<<endl;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>mass[i][j];
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<m;j++)
	cout<<setw(1)<<mass[i] [j]<<" ";
	cout<<endl;
}
	return 0;
}
