class Solution {
public:
    bool check(const vector<int> &tot, const vector<int> &sum, int target){
        for(int i = 0; i < 4; i++){
            if(sum[i]-tot[i]>target)
                return false;
        }
        return true;
    }
    int balancedString(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        mp['Q'] = 0;
        mp['W'] = 1;
        mp['E'] = 2;
        mp['R'] = 3;
        vector<int> sum(4, 0);
        for(int i = 0; i < n; i++)
            sum[mp[s[i]]]++;
        cout<<sum[0]<<" "<<sum[1]<<" "<<sum[2]<<" "<<sum[3]<<endl;
        if(sum[0] == sum[1] && sum[0] == sum[2] && sum[0] == sum[3])
            return 0;
        
        int ans = n;
        vector<int> tot(4);
        cout<<tot[0]<<" "<<tot[1]<<" "<<tot[2]<<" "<<tot[3]<<endl;
        for(int i = 0, j = 0; i < n; i++){
            tot[mp[s[i]]]++;
            
            while(j <= i && check(tot, sum, n/4)){
                ans = min(ans, i-j+1);
                tot[mp[s[j]]]--;
                j++;
            }
        }
        return ans;
    }
};

//https://www.acwing.com/file_system/file/content/whole/index/content/133817/
