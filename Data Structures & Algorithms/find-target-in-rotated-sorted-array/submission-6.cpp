class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0, b=nums.size()-1,mid=(a+b)/2;
        while(a<=b){
             
            if(nums[mid]==target)return mid;
          else if(nums[mid]>=nums[0]){
            
             if(nums[mid]>target and target<nums[0])a=mid+1;
            else if(nums[mid]>target and target>=nums[0])b=mid-1;
            else a=mid+1;
          }
          else{
            if(nums[mid]<target and target>=nums[0])b=mid-1;
            else if(nums[mid]<target and target<nums[0])a=mid+1;
            else b=mid-1;
          }
          mid=(a+b)/2;
        
        }
        return -1;
    }
};
