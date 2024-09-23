#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        unordered_map<char,char> mm;
        mm[')']='(';
        mm[']']='[';
        mm['}']='{';
        stack<char> st;
        for(auto c:x){
            if(c=='(' or c=='[' or c=='{')st.push(c);
            else if(st.empty())return false;
            else{
                if(st.top()!=mm[c])return false;
                st.pop();
            }
        }
        return st.empty();
    }

};

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}