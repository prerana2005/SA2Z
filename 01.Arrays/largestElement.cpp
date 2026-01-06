//LARGEST ELEMENT IN AN ARRAY
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]>maxi)
            maxi = nums[i];
        }
        return maxi;
    }
};