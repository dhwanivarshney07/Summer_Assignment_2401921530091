class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long  currentSum = nums[0];

        for(int i = 1; i < k; i++) {
            currentSum+=nums[i];
        }
        long long maxSum = currentSum;
        for(int i=k;i<nums.size();i++){
            currentSum+=nums[i]-nums[i-k];
            maxSum=max(maxSum,currentSum);
        }
       double x=maxSum;
        return x/k;}
};