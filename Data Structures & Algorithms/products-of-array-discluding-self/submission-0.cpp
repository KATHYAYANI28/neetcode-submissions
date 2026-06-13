class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int k=1,n=0,k0=1;;
    for(int i=0;i<nums.size(); i++){
        if(nums[i]==0){
            n++;
            k0=k;
        
        }
        else k0=k0*nums[i];
        
        k=k*nums[i];
    }
    vector<int> v;
    for(int i=0;i<nums.size();i++){
      
        if(nums[i]==0 and n==1)v.push_back(k0);
        else if(nums[i]==0 and n>1)v.push_back(0);
        else v.push_back(k/nums[i]);
    }
    return v;
    }
};
