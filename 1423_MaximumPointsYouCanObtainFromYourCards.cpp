class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxSum=0;
        int leftSum=0;

        for(int i=0;i<k;i++){
            leftSum+=cardPoints[i];
        }
        maxSum=leftSum;

        int rightSum=0;
        int rightIndex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            leftSum=leftSum-cardPoints[i];
            rightSum+=cardPoints[rightIndex];
            rightIndex--;
            maxSum=max(maxSum,(leftSum+rightSum));
        }

        return maxSum;

    }
};

// tc : o(2*k)
// sc : o(1)