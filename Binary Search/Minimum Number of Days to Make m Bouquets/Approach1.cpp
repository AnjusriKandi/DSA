class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k) {
        int n = arr.size();
        int cnt = 0;
        int noOfB = 0; // No. of boquets

        for (int i = 0; i < n; i++) {
            if (arr[i] <= day)
                cnt++;
            else {

                noOfB += (cnt / k);
                cnt = 0;
            }
        }

        noOfB += (cnt / k);

        return noOfB >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (n < (long long)m * k)
            return -1;
        int mini = INT_MAX, maxi = INT_MIN;

        for (int i : bloomDay) {
            mini = min(mini, i);
            maxi = max(maxi, i);
        }

        for (int i = mini; i <= maxi; i++) {
            if (possible(bloomDay, i, m, k))
                return i;
        }

        return -1;
    }
};
