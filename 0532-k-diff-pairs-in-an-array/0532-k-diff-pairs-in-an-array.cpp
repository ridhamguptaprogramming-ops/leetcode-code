class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
         unordered_set<int> seen, ans;

        for (int x : nums) {
            if (seen.count(x - k))
                ans.insert(x - k);

            if (seen.count(x + k))
                ans.insert(x);

            seen.insert(x);
        }

        return ans.size();
    }
};