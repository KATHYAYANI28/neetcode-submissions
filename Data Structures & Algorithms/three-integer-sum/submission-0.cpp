class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b;
        vector<vector<int>> v;
        for(int i=0;i<nums.size()-2;i++){
            a=i+1;
            b=nums.size()-1;
            if(i>0 and nums[i]==nums[i-1])continue;
            
                while(a<b){
                    if(nums[i]+nums[a]+nums[b]==0){
                        v.push_back({nums[i],nums[a],nums[b]});
                       
                        a++;
                        b--;
                        while(a<b and nums[a]==nums[a-1])a++;
                        while(a<b and nums[b]==nums[b+1])b--;
                        }


                   else if(nums[i]+nums[a]+nums[b]<0)a++;
                    else b--;
                }
            
        }
        return v;
    }
};





