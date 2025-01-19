class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int prefixSum=0;
        int ans=0;
        map<int,int> mapp;
        mapp[0]=1;

        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int remove=prefixSum-k;
            ans+=mapp[remove];
            mapp[prefixSum]++;
        }

        return ans;

    }
};