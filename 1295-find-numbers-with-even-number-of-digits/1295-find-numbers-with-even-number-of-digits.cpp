class Solution {
public:
    int findNumbers(vector<int>& nums) {
    int count=0;
    for(int nums:nums){
        int digits=0;
        while(nums>0){
            digits++;
            nums/=10;
        }
        if(digits%2==0)
        count++;
    }
    return count;

    }
};