class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            auto temp  = target  - nums[i];
            auto it = mp.find(temp);
            if(it != mp.end()){
                ans = {min(i,it->second),max(i,it->second)};
                break;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};
