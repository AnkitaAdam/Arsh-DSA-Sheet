class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
        sort(a.begin(),a.end());
        
        int start=0;
        int end=m-1;
        int minChocs=INT_MAX;
        while(end<a.size()){
            int ans=a[end]-a[start];
            minChocs=min(minChocs,ans);
            start++;
            end++;
        }
        return minChocs;
    }   
    
    
    // 1 3 4 7 9 9 12 56
    
};