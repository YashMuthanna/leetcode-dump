class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i =0;
        int j = nums.size() - 1;
        while( i< nums.size() && j< nums.size()){
            if( nums[i] + nums[j] > target){
                j--;
            }
            else if( nums[j] + nums[i] < target){
                i++;
            }
            else{
                vector<int> arr = {i+1, j+1};
                return arr;
            }
        }
        return {};
    }
};
