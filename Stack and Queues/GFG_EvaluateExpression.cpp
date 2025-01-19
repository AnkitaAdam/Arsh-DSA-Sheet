class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int>st;
        int right=0;
        int left=0;
        
        
        for(int i=0;i<s.length();i++){
            
            switch(s[i]){
                case '+':
                    right=st.top();st.pop();
                    left=st.top();st.pop();
                    st.push(left+right);
                    break;
                case '-':
                    right=st.top();st.pop();
                    left=st.top();st.pop();
                    st.push(left-right);
                    break;
                case '*':
                    right=st.top();st.pop();
                    left=st.top();st.pop();
                    st.push(left*right);
                    break;
                case '/':
                    right=st.top();st.pop();
                    left=st.top();st.pop();
                    st.push(left/right);
                    break;
                default:
                    st.push(s[i]-'0');
            }
            
        }
        
        return st.top();
    }
};
