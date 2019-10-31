class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> c;
        for(int a: arr) ++c[a];
        unordered_set<int> s;
        for(const auto& k: c){
            if(!s.insert(k.second).second)
                return false;
        }
        return true;
    }
};
