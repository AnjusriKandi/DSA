class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        vector<pair<int, char>> temp;
        string ans = "";
        for (char i : s)
            freq[i]++;

        for (auto i : freq) {
            temp.push_back({i.second, i.first});
        }

        sort(temp.rbegin(), temp.rend());

        for (auto i : temp) {
            int cnt = i.first;
            while (cnt--) {
                ans += i.second;
            }
        }

        return ans;
    }
};
