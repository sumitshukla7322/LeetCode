class Solution {
public:
vector<int>dp;
int f(vector<int>nums,int i){
    if(i==nums.size()-1) return nums[i];
     if(i==nums.size()-2) return max(nums[i],nums[i+1]);
    return max(nums[i]+f(nums,i+2),0+f(nums,i+1));
}
int ftd(vector<int>nums,int i){
    if(i==nums.size()-1) return nums[i];
     if(i==nums.size()-2) return max(nums[i],nums[i+1]);
     if(dp[i]!=-1) return dp[i];
    return dp[i]= max(nums[i]+ftd(nums,i+2),0+ftd(nums,i+1));
}

    int rob(vector<int>& nums) {
    dp.resize(105,-1);
        return ftd(nums,0);
    }
};