class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        // nearest greatest on right
        
        vector<int>ans(temperatures.size(),0);
        stack<int>st;

        for(int i=0;i<temperatures.size();i++){

            while(!st.empty() && temperatures[i]> temperatures[st.top()]){
                ans[st.top()]=i - st.top();
                st.pop();
            }
            st.push(i);
        }

        // while(!st.empty()){
        //     ans[st.top()]=0;
        //     st.pop();
        // }

        return ans;
    }
};

// 73 74 75 71 69 72 76 73



// 7 73
// 6 76

// 1 1 4 2 1 1 0 0
// 0 1 2 3 4 5 6 7 


// 30 40 50 60



// 3 60 

// 1 1 1 0
// 0 1 2 3

