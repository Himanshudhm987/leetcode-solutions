class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=nums.at(i);
        }
        return (((n*(n+1))/2)-sum);
    }
};