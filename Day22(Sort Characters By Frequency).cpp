#include<bits/stdc++.h>
#include <vector>
#include <algorithm> 
class Solution {
public:
    string frequencySort(string s){
        string str="";
        map<int,int> mp;
        for(int i=0;i<(int)s.length();i++)
            mp[s[i]-' ']++;
        vector<pair<int, int> > vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), less_second<int, int>());
        for (int i = vec.size()-1; i >=0; i--) 
            for(int k=0;k<vec[i].second;k++) 
                str.push_back(' '+vec[i].first);
        return str;
    }
    template <typename T1, typename T2>
    struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};
};
