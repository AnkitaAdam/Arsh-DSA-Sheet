class Solution {
public:
    

    int findNum(vector<int>&nums,int t,int index){
        for(int i=0;i<nums.size();i++){
            if(index!=i&&nums[i]==t){
                return i;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++){

            int t=target-nums[i];

            if(findNum(nums,t,i)>=0){
                ans.push_back(i);
                ans.push_back(findNum(nums,t,i));
                return ans;
            }
        }
        return ans;
    }
};