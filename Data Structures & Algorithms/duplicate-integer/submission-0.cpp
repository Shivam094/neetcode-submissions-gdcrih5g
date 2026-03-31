class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        int flag=0;

        for(auto i : mp)
        {
            if(i.second>1)
            {
                flag=1;
            }
        }

        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};