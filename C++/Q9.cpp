#include<bits/stdc++.h>
using namespace std;

bool isBinary(string str)
{
   int n = str.size();
   for(int i = 0; i < n; i++)
   {
       if(str[i] != '0' && str[i] != '1')
       { 
           return false; 
       }
   }
   return true;
}

int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

