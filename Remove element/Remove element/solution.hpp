#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while(i < nums.size())
        {
            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i);

            }
            i++;
        }

        return nums.size();

    }
};