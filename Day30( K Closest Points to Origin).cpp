class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n=points.size();
        vector<tuple<double,double,double>> v;
        vector<vector<int>> v1;
        for(int i=0;i<n;i++){
            double x=points[i][0],y=points[i][1];
            v.push_back(make_tuple(sqrt(x*x+y*y),x,y));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<K;i++){
            int x=get<1>(v[i]),y=get<2>(v[i]);
            v1.push_back({x,y});
        } 
        return v1;
    }
};
