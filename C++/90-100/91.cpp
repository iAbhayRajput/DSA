#include <bits/stdc++.h>

using namespace std;

class Solution{
	public:
int nthStair(int n){
		    return 1+n/2;
		}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
