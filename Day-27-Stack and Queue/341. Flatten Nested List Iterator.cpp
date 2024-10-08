//Approach-1 (Using stack of NestedInteger objects)
/*
    Always remember, if there is a nested structure and you need to flatten it, 
    stack can help most of the times. For example : flatten linkedlist, doubly linkedlist etc.
*/

class NestedIterator {
public:
    stack<NestedInteger> st;
    NestedIterator(vector<NestedInteger> &nestedList) {
        int n = nestedList.size();
        for(int i = n-1; i>=0; i--)
            st.push(nestedList[i]);
    }
    
    int next() {
        //I will always insure that the top of the stack is an integer
        int num =  st.top().getInteger();
        st.pop();
        return num;
    }
    
    //This is always called before next()
    bool hasNext() {
        //I will always insure that the top of the stack is an integer
        while(!st.empty()) {
            NestedInteger curr = st.top();
            if(curr.isInteger())
                return true;
            
            st.pop();
            vector<NestedInteger>& vec = curr.getList();
            for(int i = vec.size()-1; i>=0; i--)
                st.push(vec[i]);
        }
        return false;
    }
};

//Approach-2 (Using stack of pointer of NestedInteger objects)
/*
    Always remember, if there is a nested structure and you need to flatten it, 
    stack can help most of the times. For example : flatten linkedlist, doubly linkedlist etc.
*/

class NestedIterator {
public:
    stack<NestedInteger*> st;
    //I could also have used : stack<NestedInteger> but, using pointer will help me save space
    NestedIterator(vector<NestedInteger> &nestedList) {
        int n = nestedList.size();
        for(int i = n-1; i>=0; i--)
            st.push(&nestedList[i]);
    }
    
    int next() {
        //I will always insure that the top of the stack is an integer
        int num =  st.top()->getInteger();
        st.pop();
        return num;
    }
    
    //This is always called before next()
    bool hasNext() {
        //I will always insure that the top of the stack is an integer
        while(!st.empty()) {
            NestedInteger* curr = st.top();
            if(curr->isInteger())
                return true;
            
            st.pop();
            vector<NestedInteger>& vec = curr->getList();
            for(int i = vec.size()-1; i>=0; i--)
                st.push(&vec[i]);
        }
        return false;
    }
};

//Approach-3 (Presaving all integers in the queue)
//If you notice, hasNext() is being called before every call to next(), and doing so much operation in
//hasNext() is not good as it is frequently called. So, it's better to pre save the result.
//It will make next() and hasNext() a O(1) call.
class NestedIterator {
public:
    queue<int> que;
    NestedIterator(vector<NestedInteger> &nestedList) {
        addAll(nestedList);
    }
    
    void addAll(vector<NestedInteger>& nestedList) {
        int n = nestedList.size();
        for(int i = 0; i<n; i++) {
            NestedInteger& obj = nestedList[i];
            if(obj.isInteger())
                que.push(obj.getInteger());
            else {
                addAll(obj.getList());
            }
        }
    }
    
    int next() {
        int num = que.front();
        que.pop();
        return num;
    }
    
    bool hasNext() {
        return !que.empty();
    }
};
