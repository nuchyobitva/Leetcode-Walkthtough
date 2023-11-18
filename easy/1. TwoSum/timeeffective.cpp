class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        map <int, int> a;
        int half = -1;
        if (target % 2 == 0) {
            half = target / 2;
        }

        for (int i = 0; i < nums.size(); i++) {
            int _i = nums[i];
            if (target % 2 == 0) {
                if ((_i == half) && (a.count(_i) > 0)) {
                    return { a[_i],i };
                }
            }
            if (a.count(target - _i) > 0) {
                return { a[target - _i],i };
            }
            a[_i] = i;
        }
        return {};
    }
};