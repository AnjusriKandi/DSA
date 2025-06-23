class Solution {
public:
    bool check(vector<int>& nums, int div, int threshold) {
        long long sum = 0;
        for (auto i : nums) {
            sum += ceil(i * 1.0 / div);
        }
        return (sum <= threshold);
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN;
        long long sum = 0;
        for (int i : nums) {
            sum += i;
            maxi = max(maxi, i);
        }
        if (sum <= threshold)
            return 1;

        int low = 2, high = maxi, ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (check(nums, mid, threshold)) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};
