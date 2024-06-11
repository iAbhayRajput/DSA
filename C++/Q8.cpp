#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Complete this function
    void printNos(int N,int i=1)
    {   if(i>N)
        {
            return;
        }
            cout<<i<<" ";
        return printNos(N,i+1);
    }
};
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

