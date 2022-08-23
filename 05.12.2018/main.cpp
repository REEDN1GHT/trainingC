#include <iostream>
#include <math.h>
using namespace std;

float fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
    }


int main()
{
    float N,P,sum=0,k;
	k=1;
    setlocale(LC_CTYPE,"Russian");
    cout << "Введите число n: ";
    cin >> N;
    long int i, n, x; 
    for (i=1; i<=N; i++)
{
    k=k*N*(-N)/(2*i);
    sum=sum+i;
}
    P=fact(N)/sum;
    
     cout << "fact(N)"<<"="<<fact(N)<<endl;
    cout << "Сумма ряда"<<"="<<sum<<endl;
    cout << "P"<<"="<<P<<endl;
    return 0;
}

