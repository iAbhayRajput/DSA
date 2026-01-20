string curr="";
    stack<char>st;

    void append(char x) {
        // append x into document
        curr+=x;
    }

    void undo() {
        // undo last change
        st.push(curr.back());
        curr.pop_back();
    }

    void redo() {
        // redo changes
        curr+=st.top();
        st.pop();
    }

    string read() {
        // read the document
        return curr;
    }
