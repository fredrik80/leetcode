// 27. Remove Element
// Easy

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int insert_pos = 0;

        for (int num : nums)
            if (num != val) nums[insert_pos++] = num;
        return insert_pos;
    }
};
