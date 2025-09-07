class Solution {
  public:
    
    Node* mergeKLists(vector<Node*>& arr) {
        int n=arr.size();
        priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,
        greater<pair<int,Node*>>>pq;
        Node* ans=new Node(-1);
        Node* temp=ans;
        
        for(int i=0;i<n;i++){
            Node* node=arr[i];
            if(node){
                int val=node->data;
                pq.push({val,node});
            }
        }
        
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            Node* node=it.second;
            
            Node* nextnode=node->next;
            node->next=nullptr;
            temp->next=node;
            temp=temp->next;
            
            if(nextnode){
                pq.push({nextnode->data,nextnode});
            }
        }
        
        return ans->next;
    }
};
