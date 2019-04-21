/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> dicts;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int temp = target-nums[i];
            if(dicts.count(temp)){
                res.push_back(i);
                res.push_back(dicts[temp]);
                return res;
            }
            dicts[nums[i]]=i;
        }
        return res;
    }
};
