class MyStack {
public:
    queue<int>q1;
    // queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        // q2.push(x);
        q1.push(x);
        
        // while(!q1.empty())
        // {
        //     q2.push(q1.front());
        //     q1.pop();
        // }
        // swap(q1, q2);
        
        int n = q1.size();
        
        for(int i = 0; i<n-1; i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int val = q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        return  q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};