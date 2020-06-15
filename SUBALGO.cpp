#include <iostream>
using namespace std;
#define ll long int
int main() {
    ll n,a;
    cin>>n>>a;
    
    while(a && n){
        ll r = n%10;
        if(a>=r+1){
            a-=r+1;
        }else{
            n = n-a;
            break;
        }
        n /=10;
    }
    
    cout<<n;
	return 0;
}
