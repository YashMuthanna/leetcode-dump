//Most optimal solution, O(n) time and O(1) space.
// less optimal approach is to use another temporary array, same time complexity but uses O(n) space complexity. 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        //Reverse first n-k elements
        reverse(nums.begin(), nums.begin() + n - k);
        
        // Reverse the remaining k elements
        reverse(nums.begin() + n - k, nums.end());
        
        // Reverse the entire array
        reverse(nums.begin(), nums.end());

        //NOTE: If you wanna left rotate,
        //Step1: reverse first k elements
        //Step2: reverse remaining n-k elements
        //Step3: reverse whole array
    }
};
