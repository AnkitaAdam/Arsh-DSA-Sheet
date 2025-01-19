class Solution {
public:

    int subarraysDivByK(vector<int>& nums, int k) {
        // cout<<(-1 % 2)<<" ==== ";
        int prefixSum=0;
        unordered_map<int,int>remsCnt;
        int ans=0;
        remsCnt[0]=1;// very important
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int rem=prefixSum%k;
            if(rem<0){ //for negative remainder..
                rem+=k;
            }
            if(remsCnt.find(rem)!=remsCnt.end()){
                ans+=remsCnt[rem];
            }
            remsCnt[rem]++;
        }
        return ans;
    }
};

// 4 9 9 7 4 3 
