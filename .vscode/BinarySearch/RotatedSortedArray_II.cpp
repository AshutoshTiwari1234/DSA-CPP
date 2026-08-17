#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                return true;
            }

            // Duplicates: cannot determine which half is sorted
            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                s++;
                e--;
            }
            // Left half is sorted
            else if (nums[s] <= nums[mid]) {
                if (target >= nums[s] && target < nums[mid]) {
                    e = mid - 1;
                }
                else {
                    s = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (target > nums[mid] && target <= nums[e]) {
                    s = mid + 1;
                }
                else {
                    e = mid - 1;
                }
            }
        }

        return false;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;

    if (obj.search(nums, target)) {
        cout << "Target found" << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}