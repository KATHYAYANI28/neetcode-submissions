class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            int j=i;
            int cnt=0;
            while(j>0){
                if(j%2!=0)cnt++;
               j= j>>1;
            }
            v.push_back(cnt);
        }
        return v;
    }
};

