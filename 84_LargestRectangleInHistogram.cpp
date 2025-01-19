class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    //    int n=heights.size();
    //    stack<int> st;

    //    vector<int>nextSmallestRight(n);
    //    vector<int>nextSmallestLeft(n);


    //    for(int i=0;i<heights.size();i++){

    //         while(!st.empty() && heights[st.top()]>heights[i]){
    //             nextSmallestRight[st.top()]=i;
    //             st.pop();
    //         }
    //         st.push(i);
    //    }
    //    while(!st.empty()){
    //         nextSmallestRight[st.top()]=n;
    //         st.pop();
    //    }

    //    for(int i=heights.size()-1;i>=0;i--){

    //         while(!st.empty() && heights[st.top()]>heights[i]){
    //             nextSmallestLeft[st.top()]=i;
    //             st.pop();
    //         }

    //         st.push(i);
    //    }

    //    while(!st.empty()){
    //         nextSmallestLeft[st.top()]=-1;
    //         st.pop();
    //    }

    //     int maxArea=INT_MIN;

    //    for(int i=0;i<n;i++){
    //         maxArea=max(maxArea, (heights[i]* (nextSmallestRight[i] - nextSmallestLeft[i] -1)));
    //    }

    //    return maxArea;



        // OPTIMISED..

        
        stack<int> st;
        int maxArea=INT_MIN;
        int n=heights.size();
        int index=0;

        for(int i=0;i<n;i++){

            while(!st.empty() && heights[st.top()] > heights[i]){
                
                index=st.top();
                st.pop();

                if(!st.empty()){
                    maxArea=max(maxArea, (heights[index]*(i-st.top()-1)));
                }else{
                    maxArea=max(maxArea, (heights[index]*i));
                }
                
            }
            st.push(i);
        }

        while(!st.empty()){
            index=st.top();
            st.pop();

            if(!st.empty()){
                maxArea=max(maxArea, (heights[index]*(n-st.top()-1)));
            }else{
                maxArea=max(maxArea, (heights[index]*n));
            }
        }


       return maxArea;
    }
};