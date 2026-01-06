//SECOND LARGEST ELEMENT IN AN ARRAY
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int secmax = -1;
        for(int i=0; i<n; i++){
            if(nums[i]>maxi) {
                secmax = maxi;
                maxi = nums[i];
            }
            else if(nums[i]<maxi && nums[i]>secmax)
            secmax = nums[i];
        }
        return secmax;
    }
};