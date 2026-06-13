class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=1,curr=0;
        for(int i=0;i<nums.size();i++){
            if((i<nums.size()-1 and nums[i]+1==nums[i+1])  ){
                k++;
            }
            else if((i<nums.size()-1) and nums[i]==nums[i+1])continue;
            else{
                curr=max(curr,k);
                k=1;
            }
        }
        
        return curr;
    }
};
