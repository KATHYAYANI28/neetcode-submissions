class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            int var=0;  
            vector<vector<int>> v;
            
        priority_queue<pair<int,int>> pq;
        for(int i=0; i<points.size(); i++){
            int p1=points[i][0],p2=points[i][1];
            int var=(p1*p1+p2*p2);
            if(pq.size()<k)pq.push({var, i});
            else{
                if(pq.top().first>var){
                    pq.pop();
                    pq.push({var,i});
                }
            }
            
        }
        
        while(pq.size()>0){
            int k=pq.top().second;
            v.push_back({points[k][0],points[k][1]});
            pq.pop();
        }
        return v;
    }
};
