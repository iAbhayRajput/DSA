class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings) {
        // code here
        sort(meetings.begin(),meetings.end());
        
        priority_queue<int,vector<int>,greater<int>> available;
        for(int i=0;i<n;i++)available.push(i);
        
        priority_queue<pair<long long, int>, vector<pair<long long,int>>, greater<>>busy;
        
        vector<int> roomCount(n,0);
        
        for(auto& meeting: meetings){
            int start = meeting[0], end=meeting[1];
            while(!busy.empty() && busy.top().first<=start){
                available.push(busy.top().second);
                busy.pop();
            }
            int duration = end -start;
            
            if(!available.empty()){
                int room= available.top(); available.pop();
                busy.push({start + duration, room});
                roomCount[room]++;
            }else{
                pair<long long,int>next= busy.top(); busy.pop();
                long long freeTime = next.first;
                int room= next.second;
                busy.push({freeTime+ duration, room});
                roomCount[room]++;
            }
        }
        int maxMeetings=0, resultRoom=0;
        for(int i=0; i<n; i++){
            if(roomCount[i]> maxMeetings){
                maxMeetings= roomCount[i];
                resultRoom=i;
            }
        }
        return resultRoom;
    }
};
