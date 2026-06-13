class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
         int freq=0,i=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
      freq=1;
    int j=i;
    while(i<nums.size()-1  and nums[i]==nums[i+1]  ){
    freq++;
    i++;
    }
    
     if(pq.size()<k)  pq.push({freq,nums[i]});
         else{
     pair<int,int> temp=pq.top();
    if(temp.first<freq){
    pq.pop();
        pq.push({freq,nums[i]});
     }
            }
    
        i=j+freq;
                                                                                                                                                                                                                                                                                     
     }
        vector<int> v;
        int siz=pq.size();
for(int i=0;i<siz;i++ ){
         pair<int,int> p=pq.top();
     pq.pop();
        v.push_back(p.second);
    }
        return v;
        }                                                                                                                    
                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                        
};