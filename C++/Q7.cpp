#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(), v.end());
		    int len = v.size();
		    if (len%2==1)
		    {
		        int mid= (len/2);
		        return (v[mid]);
		    }
		    else
		    {
		       int  mid= len/2;
		        int avg= (v[mid]+v[mid-1])/2;
		         return avg;
		    }
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
