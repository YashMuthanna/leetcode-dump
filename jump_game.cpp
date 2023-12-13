//Found this Tricky
//Maintain a reachable variable, it tracks the max index you can reach from current position
//Traverse the array, FIRST check if i has crossed reachable, if that is the case then last index is unreachable
//If not, check if nums[i]+i (max point you can reach from curr pos) is greater than reachable, if yes update reachable.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int reachable = 0;
        for(int i=0;i<n;i++){
            if(i > reachable){
                return false;
            }

            if(nums[i] + i > reachable){
                reachable = nums[i] + i;
            }
            
        }
        if(reachable >= n-1){
            return true;
        }
        return false;
    }
};
