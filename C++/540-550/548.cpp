bool ans;
    Node* h;
    
    void solve(Node* t){
        if(t->next){
            solve(t->next);
        }
        if(ans==false) return;
        else if(t->data!=h->data){
            ans=false;
            return;
        }
        else{
            h=h->next;
            return;
        }
    }
    
    bool isPalindrome(Node *head) {
        //  code here
        ans=true;
        h=head;
        solve(head);
        return ans;
    }
