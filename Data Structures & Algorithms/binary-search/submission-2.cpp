class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 1) {
            if (nums[0] == target)
                return 0;
            else
                return -1;
        }
        int a = 0;
        int b = n - 1;
        if ( nums[a] == target) return a;
        if ( nums[b] == target) return b;
        for (int i = 0; i < n; i++) {
            if (target < nums[(a + b) / 2]) {
                b = (a + b) / 2;
            } else if (target > nums[(a + b) / 2]) {
                a = (a + b) / 2;
            } else {
                return (a + b) / 2;
            }
        }
        return -1;
    }
};
