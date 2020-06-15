#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const ll lim = 1e5+100;
ll arr[lim][2];



int main() {
	ll n,count=1;
	cin>>n;
	
	for(ll i=0;i<lim;i++){
        arr[i][0] = -1;
        arr[i][1] = -1;
    }
    for(ll i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }	
    
    if(n==0)
        cout<<0;
    if(n==1)
        cout<<1;
    
    // arr[n][0] = 3*1e10;
    // arr[n][1] = 3*1e10;
    
    ll last = arr[0][0];
    for(ll i=1;i<n;i++){
        
        if((arr[i][0]-arr[i][1])>last){
            ++count;
            last = arr[i][0];
            // cout<<"left :: "<<i<<" "<<arr[i][0]<<" "<<arr[i][1]<<" "<<last<<endl;
        }else if((arr[i][0]+arr[i][1])<arr[i+1][0] || arr[i+1][0] == -1){
            ++count;
            last = arr[i][0]+arr[i][1];
            // cout<<"right :: "<<i<<" "<<arr[i][0]<<" "<<arr[i][1]<<" "<<last<<endl;
        }else{
            last = arr[i][0];
        }
    }
    
    cout<<count;
	return 0;
}
