#Prefix sum, most optimal approach VVV IMP Questions
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        unordered_map<int, int> hash;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }

            int prefix = sum - k;
            if(hash.find(prefix) != hash.end()){
                count+=hash[prefix];
            }
            hash[sum]++;
        }
        return count;
    }
};
