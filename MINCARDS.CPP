#include <iostream>
using namespace std;

int main() {
	int t=1;
	
	while(t--){
    	int n;
    	cin>>n;
    	
    	string s;
    	cin>>s;
    	int count = 0;
    	char last = s[0];
    	for(int i=1;i<n;i++){
    	    if(s[i] == last)
    	        ++count;
    	    else 
    	        last = s[i];
    	}
    	
    	
    	cout<<count;
	}
	return 0;
}
