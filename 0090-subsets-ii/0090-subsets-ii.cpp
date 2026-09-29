class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(),nums.end());
        backtract( nums,0, res, subset);
        return res;
    }
    void backtract(vector<int>& nums,int index, vector<vector<int>>&res,  vector<int>&subset){
        if(index==nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        backtract(nums,index+1,res,subset);
        while(index+1<nums.size() && nums[index]==nums[index+1]){
            index++;
        }
        subset.pop_back();
        backtract(nums,index+1,res,subset);
        
    }
};