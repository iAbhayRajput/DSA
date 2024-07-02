#include <bits/stdc++.h>
using namespace std;

struct Node {
    string data;
    Node *next;

    Node(string x) {
        data = x;
        next = NULL;
    }
};

Node *newNode(string str) {
    Node *new_node = new Node(str);
    new_node->next = NULL;
    return new_node;
}

void print(Node *root) {
    Node *temp = root;

    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

class Solution {
  public:
    bool Palin(string str){
        int n=str.length();
        for(int i=0;i<n;i++){
            if(str[i] != str[n-1-i])
            return false;
        }
        return true;
        }
    bool compute(Node* head) {
        string a="";
        Node* temp=head;
        if(temp==NULL){
            return false;
        }
        while(temp){
            a.append(temp->data);
            temp=temp->next;
        }
        return Palin(a);
        
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++) {
            string str = "";
            cin >> str;
            if (head == NULL)
                head = temp = new Node(str);
            else {
                temp->next = new Node(str);
                temp = temp->next;
            }
        }
        Solution ob;
        bool ans = ob.compute(head);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
