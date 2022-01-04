#include<bits/stdc++.h>

using namespace std;

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        map<string, vector<string>> mp;
        for(auto s : string_list){
            string a = s;
            sort(s.begin(), s.end());
            if(mp.find(s) == mp.end()){
                vector<string> md;
                md.push_back(a);
                mp.insert({s, md});
            } else {
                mp[s].push_back(a);
            }
        }
        vector<vector<string>> res;
        for (auto const& x : mp){
            res.push_back(x.second);
        }
        return res;
    }
};