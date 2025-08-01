class Solution {
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
  public:
    int countBalanced(vector<string>& arr) {
        int n=arr.size();
        vector<pair<int,int>> preCnt;
        for (const string& s :arr){
            int vowels=0;
            int consonants=0;
            
            for (char c:s){
                if (isVowel(c)){
                    vowels++;
                }
                else{
                    consonants++;
                }
            }
            preCnt.push_back({vowels, consonants});
        }
        
        
         unordered_map<int,int> diffCnt;
         diffCnt[0]=1;
         
         int totalV=0,totalC=0,ans=0;
         
         for(const auto& p : preCnt){
             totalV+=p.first;
             totalC+=p.second;
             int diff=totalV-totalC;
             
             if (diffCnt.find(diff) != diffCnt.end()){
                 ans+=diffCnt[diff];
             }
             
             diffCnt[diff]++;
         }
         
         return ans;
    
    }
};
