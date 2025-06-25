class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            int b = 0, maxi = INT_MIN, mini = INT_MAX;
            freq[s[i] - 'a']++;

            for (int j = i + 1; j < n; j++) {
                int ind = s[j] - 'a';
                freq[ind]++;
                maxi = max(maxi, freq[ind]);
                mini = INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        mini = min(mini, freq[k]);
                    }
                }
                b = maxi - mini;
                ans += b;
            }
        }
        return ans;
    }
};
