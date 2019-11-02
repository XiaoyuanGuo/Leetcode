/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> res;
        for(int i = 1;customfunction.f(i,1) <= z; i++){
            vector<int> tmp;
            for(int j = 1; customfunction.f(i,j) <= z; j++){
                if(customfunction.f(i,j) == z){
                    tmp.push_back(i);
                    tmp.push_back(j);
                    res.push_back(tmp);
                    tmp.clear();
                    break;
                }
            }
        }
        return res;
        
    }
};
