class StockSpanner {
    vector<int>spans;
    vector<int>prices;
public:
    StockSpanner(){}
    int next(int price) {
        int idx=prices.size()-1;
        while(idx>=0 && prices[idx]<=price){
            int span=spans[idx];
            idx=idx-span;
        }
        prices.push_back(price);
        int span=prices.size()-1-idx;
        spans.push_back(span);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * 
 */
