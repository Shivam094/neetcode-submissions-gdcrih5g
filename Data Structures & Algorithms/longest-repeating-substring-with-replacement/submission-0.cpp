class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int left = 0;
        int max_freq = 0;
        int max_len = 0;

        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'A']++;

            max_freq = max(max_freq, freq[s[i]-'A']);

            while((i-left+1) - max_freq > k)
            {
                freq[s[left]-'A']--;
                left++;
            }

            max_len = max(max_len, i-left+1);
        }

        return max_len;


    }
};
