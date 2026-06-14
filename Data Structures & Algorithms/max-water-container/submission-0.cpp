class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxi=0;
        int a=0,b=h.size()-1;
        while(a<b){
            maxi=max(maxi, min(h[a],h[b])*(b-a));
            if(h[a]<h[b])a++;
            else b--;
        }

        return maxi;
    }
};
