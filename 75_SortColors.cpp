class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero+=1;
            }else if(nums[i]==1){
                one+=1;
            }else if(nums[i]==2){
                two+=1;
            }
        }

        // cout<<zero<<" "<<one<<" "<<two;
        int i=0;
            while(zero>0){
                nums[i++]=0;
                zero--;
            }
            while(one>0){
                nums[i++]=1;
                one--;
            }
            while(two>0){
                nums[i++]=2;
                two--;
            }
        
    }
};