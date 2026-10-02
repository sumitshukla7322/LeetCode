class Solution {
public:
vector<vector<int>>result;
void fun(int i,vector<int>& nums,vector<int>& temp){
    if(i>=nums.size()){
        result.push_back(temp);
      return;  
    }
    temp.push_back(nums[i]);
    fun(i+1,nums,temp);
    temp.pop_back();
    fun(i+1,nums,temp);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        fun(0,nums,temp);
        
        return result;
    }
};