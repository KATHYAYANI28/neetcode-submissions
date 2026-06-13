class MedianFinder {
public:
vector<double> nums;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        nums.push_back(num);

    }
    
    double findMedian() {
        sort(nums.begin(),nums.end());
     int n=nums.size();
     return n&1?nums[n/2]:((double)(nums[n/2])+(double)nums[n/2-1])/2;
    }
};
