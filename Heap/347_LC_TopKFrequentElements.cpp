class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        for(int i: nums){
            mp [i] ++;

        }

        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 

        for(auto &pr: mp){

            pq.push( {pr.second, pr.first} );
            if(pq.size() > k){
                pq.pop();

            }
        }

        vector<int> ans;

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};



