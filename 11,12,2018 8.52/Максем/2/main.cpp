#include <iostream>
#include <math.h>
using namespace std;
 
 
 
bool is_prime(unsigned int n){
    if(n == 2)
        return true;
    else if(!n || (n == 1) || !(n % 2))
        return false;
 
    unsigned int i = 3;
    while(((i*i) <= n) && (n % i))
        i += 2;
    return ((i*i) > n);
}
 
int main(void){
    int N;
    cin>>N;
    
    unsigned int n, i = 0, m = 0;
    do {
        if(cin >> n){
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
 
    if(!cin.fail()){
        if(m != 0){
            cout << "  max: " << m << std::endl;
            cout << "count: " << i << std::endl;
        } else
            cout << "not found!" << std::endl;
    } else {
        cin.clear();
        cout << "error input!" << std::endl;
    }
    cin.sync();
    cin.get();
    return 0;
}

