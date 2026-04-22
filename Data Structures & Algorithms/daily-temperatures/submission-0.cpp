class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> stk;
        vector<int> v(n, 0);

        for(int i=0;i<n;i++)
        {
            while(!stk.empty() && temperatures[i] > temperatures[stk.top()])
            {
                int prev = stk.top();
                stk.pop();
                int result = i - prev;
                v[prev] = result;
            }
            stk.push(i);
        }

        return v;




    }
};
