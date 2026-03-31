class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> temp;
        int finalans = 0;

        for(auto i : nums)
        {
            temp.insert(i);
        }

        for(auto i : temp)
        {
            int num = i-1;
            if(temp.find(num)==temp.end())
            {
                int currentnum = i;
                int length = 1;

                while(temp.find(currentnum+1)!=temp.end())
                {
                    currentnum++;
                    length++;
                }

                finalans = max(finalans, length);
            }
        }

        return finalans;
    }
};
