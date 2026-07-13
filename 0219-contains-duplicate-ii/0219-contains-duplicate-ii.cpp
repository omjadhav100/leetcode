class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_set<int>st;
       for(int i=0;i<nums.size();++i){
        if(i>k){
            st.erase(nums[i-k-1]);
        }
        if(st.count(nums[i])){
            return true;
        }
        st.insert(nums[i]);
       }
       return false;
    }

    
};
// int main(){
//     Solution obj;
//     vector<int> nums={1,2,3,1};
//     int k=3;
//     cout<<(obj.containsNearbyDuplicate(nums,k)? "true":"false");
//     return 0;
// }