#include<bits/stdc++.h>
using namespace std;

void print(int ar[], int n)
{
    
    for (int j=0;j<n;j+=2)
    {
        cout<< ar[j]<<" ";
    }
    
    
}

int main()
{
   int t;
   cin>>t;
  while(t--)
   {
     int ar[100001]={0};
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
      cin>>ar[i];
      print(ar,n);
      cout<<endl;
     }

return 0;
}
