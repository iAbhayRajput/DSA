#include<bits/stdc++.h>
using namespace std;

void printPat(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int j=n;j>0;j--)
        {
            for(int k=0;k<+i;k++)
            {
                cout <<j<<" ";
            }
        }
            cout<<"$";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        printPat(n);
    }
    return 0;
}
