
class Solution { 
public: 
    int countSpecialIntegers(vector<int>& nums) { 
        int n = nums.size(); 
        vector<int> ans; 
        unordered_map<int,int> mp; 
 
        for(int i = 0; i < n; i++) { 
            mp[nums[i]]++; 
        } 
 
        for(auto x : mp) { 
            if(x.second == 3) { 
                ans.push_back(x.first); 
            } 
        } 
 
        int count = 0; 
 
        for(int x : ans) { 
            vector<int> index; 
 
            for(int i = 0; i < n; i++) { 
                if(nums[i] == x) { 
                    index.push_back(i); 
                } 
            } 
 
            int diff1 = index[1] - index[0]; 
            int diff2 = index[2] - index[1]; 
 
            if(diff1 == diff2) { 
                count++; 
            } 
        } 
 
        return count; 
    } 
};     