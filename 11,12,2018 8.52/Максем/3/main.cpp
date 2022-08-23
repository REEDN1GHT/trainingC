#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float N;
	setlocale (LC_CTYPE,"RUSSIAN");
	
	unsigned int n, i = 0, m = 0;
    do {
        if(std::cin >> n){
            if(is_prime(n) && (!m || (n >= m))){
                if(n == m)
                    ++i;
                else
                    i = 1;
                m = n;
            }
        } else
            break;
    } while(--N > 0);
    
	long int i, n, a, r=0;
	cin>>n;
	cout<<"n= "<<n<<endl;
	for (i=1; i<=n; i++)
	{
		cout<<"¬ведите число a[ "<<i<<"]= ";
	cin>>a;
	if (a==0) 	 {r=r+1;
	return 0;
}
