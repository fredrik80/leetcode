// 75. Sort Colors
// Medium

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // BucketSort
        vector<int> tmp = {0,0,0};

        for (int n : nums) tmp[n]++;

        int i = 0;
        for (int n=0; n < 3; n++){
            for (int j=0; j < tmp[n]; j++){
                nums[i] = n;
                i++;
            }
        }
    }
};
