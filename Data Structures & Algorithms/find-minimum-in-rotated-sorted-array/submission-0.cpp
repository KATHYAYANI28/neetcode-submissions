class Solution {
public:
    int findMin(vector<int>& nums) {
        int a=0,b=nums.size()-1, c=nums.size()-1;
        while(a<=b){
            int mid=(a+b)/2;
            if(nums[0]<nums[c])return nums[0];
            else if((mid+1)<nums.size() and nums[0]<=nums[mid] and nums[mid]>nums[mid+1])return nums[mid+1];
            else if(nums[mid]>=nums[0] and nums[mid]>nums[c])a=mid+1;
            else b=mid-1;

        }
        return nums[0];
    }
};