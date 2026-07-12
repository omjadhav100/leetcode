class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        // Count frequency
        for(int x : nums)
        {
            mp[x]++;
        }

        // Store (number, frequency)
        vector<pair<int,int>> freq;

        for(auto x : mp)
        {
            freq.push_back({x.first,x.second});
        }

        // Sort by frequency (largest first)
        sort(freq.begin(),freq.end(),
        [](pair<int,int> a,pair<int,int> b)
        {
            return a.second>b.second;
        });

        vector<int> ans;

        // Take first k elements
        for(int i=0;i<k;i++)
        {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};