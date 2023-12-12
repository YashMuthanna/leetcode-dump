//169. Majority element solving this Using Boyer-Moore's Majority Voting algo to get O(n)-time complexity and O(1)-space complexity
// Hash maps use extra spac, good solution but not most optimal
// Brute force approach no extra space but O(n^2) time complexity
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        int ele = nums[0];
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(cnt<=0){
                ele = nums[i];
                cnt = 0;
            }
            if(nums[i] == ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ele;
    }
};
