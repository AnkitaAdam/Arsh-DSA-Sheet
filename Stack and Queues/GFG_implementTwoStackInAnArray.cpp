class twoStacks {
  public:
    stack<int>st1;
    stack<int>st2;
    
    twoStacks() {
        
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        st1.push(x);
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        st2.push(x);
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(st1.empty()){
            return -1;
        }
        int m=st1.top();
        st1.pop();
        return m;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(st2.empty()){
            return -1;
        }
        int m=st2.top();
        st2.pop();
        return m;
    }
};