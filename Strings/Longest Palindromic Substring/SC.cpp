class Solution {
public:
    string valPal(string s, int p1, int p2, int f) {
        string ans = "";
        if (f == 1)
            ans = s[p1 + 1];
        int n = s.length();
        while (p1 >= 0 && p2 < n && s[p1] == s[p2]) {
            ans = s[p1] + ans + s[p2];
            p1--;
            p2++;
        }
        return ans;
    }
    string longestPalindrome(string s) {
        int pivot = 0, p1, p2;
        string ans = "";
        int n = s.length();
        for (pivot = 0; pivot < n; pivot++) {
            p1 = pivot - 1;
            p2 = pivot + 1;
            string temp = valPal(s, p1, p2, 1);

            if (ans.length() < temp.length())
                ans = temp;
            p1 = pivot;
            p2 = pivot + 1;
            temp = valPal(s, p1, p2, 0);
            if (ans.length() < temp.length())
                ans = temp;
        }
        return ans;
    }
};
