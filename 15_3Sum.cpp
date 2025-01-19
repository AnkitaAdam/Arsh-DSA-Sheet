class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<vector<int>> ans;
       set<vector<int>> myset;

       for(int i=0;i<nums.size();i++){
          int start=i+1;
          int end=nums.size()-1;

          while(start<end){
            int sum=nums[i]+nums[start]+nums[end];
            if(sum==0){
                myset.insert({nums[i],nums[start],nums[end]});
                start++;
                end--;
            }else if(sum>0){
                end--;
            }else{
                start++;
            }
          }
       }
       for(auto i:myset){
        ans.push_back(i);
       }
       return ans;
    }
};