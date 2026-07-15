class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(auto x:nums1){
            mp1[x]++;
        }
        for(auto x:nums2){
            mp2[x]++;
        }
        for(auto x:mp2){
            if(mp1.find(x.first)!=mp1.end()){
                int freq=min(mp1[x.first],x.second);
                for(int i=0;i<freq;i++){
                    ans.push_back(x.first);
                }
            }
        }
        return ans;

        
    }
};