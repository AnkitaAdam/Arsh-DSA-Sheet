class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=nums[0];
        int cnt=1;

        for(int i=1;i<nums.size();i++){
            if(num==nums[i]){
                cnt+=1;
            }else{
                cnt-=1;
            }

            if(cnt==0){
                num=nums[i+1];
            }
        }
        return num;
    }
};


// 6 5 5 

// op = 0

// e op = 5