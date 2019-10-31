class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
    //this is a naive version, be careful about 1 and think about the upper bound you need to go
        vector<int> res;
        unordered_set<int> mp;
        if(x == 1){
            for(int j = 0; j <= ceil(pow(bound, 1.0/y))+1; j++){             
                if(1 + pow(y, j) <= bound){
                    mp.insert(1 + pow(y, j));
                }
            }
        }else if(y == 1){
            for(int i = 0; i <= ceil(pow(bound, 1.0/x))+1; i++){             
                if(pow(x, i) + 1 <= bound){
                    mp.insert(pow(x, i) + 1);
                }
            }
        }
        else{   
            for(int i = 0; i <= ceil(pow(bound, 1.0/x))+1; i++){
                for(int j = 0; j <= ceil(pow(bound, 1.0/y))+1; j++){             
                    if(pow(x, i) + pow(y, j) <= bound){
                        mp.insert(pow(x, i) + pow(y, j));
                    }
                }
            }
        }
        for(auto v: mp)
            res.push_back(v);
        return res;
    }
};
