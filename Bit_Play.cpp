#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    char arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long ans = 1;
	    for(int i=2;i<n;i+=2){
	        bool a,b,c;
	        a = arr[i-2] - '0';
	        b = arr[i-1] - '0';
	        c = arr[i] - '0';
	        int count=0;
	        if((a & b) == c){
	            count++;
	        }
	        if((a | b) == c){
	            count++;
	        }
	        if(((a & b) ^ (a | b)) == c){
	            count++;
	        }
	        if (count == 0){
	            ans=count;
	            break;
	        }
	        ans*=count;
	        ans = ans %1000000007;
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}
