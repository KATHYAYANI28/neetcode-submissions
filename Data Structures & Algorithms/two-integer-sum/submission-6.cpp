class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int a=0, b=nums.size();
        
    map<int,vector<int>> mpp;
    for(int i=0; i<b; i++){
        mpp[nums[i]].push_back(i);
    }
  for(auto& a: mpp){
    if(a.first*2==target){
        return a.second;
    }
    else if(mpp.find(target-a.first)!=mpp.end()){
        auto p= mpp.find(target-a.first);
        vector<int> v1=a.second;
        vector<int> v2=p->second;
        v.push_back(min(v1[0],v2[0]));
        v.push_back(max(v1[0],v2[0]));
        break;
    }
  }
return v;
    }
};
