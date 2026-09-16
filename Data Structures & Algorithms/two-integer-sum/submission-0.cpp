class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i = 0;
        // int j = i+1;
        // while(i<j){
        //     if(nums[i] + nums[j] == target && i != j){
        //         return {i,j};
        //     }
        //     i++;
        //     j++;
        // }
        // return {};

        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            int compliment = target - nums[i];
            if(mp.find(compliment) != mp.end()){
                return {mp[compliment], i};
            }
            mp[nums[i]] = i;
        }
    }
};
