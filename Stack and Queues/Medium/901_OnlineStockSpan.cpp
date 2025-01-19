class StockSpanner {
public:
    stack<pair<int,int>>st;
    vector<int>ans;
    StockSpanner() {
        
    }
    
    int next(int price) {
     
       int days=1;

       while(!st.empty() && price>= st.top().first){
            days+=st.top().second;
            st.pop();
       }
       st.push({price,days});

       return days;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */


// 100 80 60 70 60 75 85


// 2 60
// 1 80
// 0 100



// 0 1 2 3 4 5 6

