class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int a=0,b=0,maxi=0;
        int n=s.size();

        while(b<n and a<=b){

            if(mpp.find(s[b])==mpp.end()){
                mpp.insert({s[b],b});
            }
            else{

                auto it=mpp.find(s[b]);

                a=max(a,(it->second)+1);

                mpp[it->first]=b;
            }

            maxi=max(maxi,b-a+1);
            b++;
        }

        return maxi;
    }
};