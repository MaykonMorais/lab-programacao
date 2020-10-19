//ref https://leetcode.com/problems/move-zeroes/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums);

int main()
{
    vector<int> nums{0, 0, 1, 0, 2, 2, 0, 1};
    moveZeroes2(nums);
    for (auto num : nums)
        cout << num << " ";
}

void moveZeroes(vector<int> &nums)
{
    int count = 0;
    for (int j = count; j < nums.size(); j++)
    {
        if (nums[j] != 0)
            nums[j - count] = nums[j];
        else
            count++;
    }
    for (int j = nums.size() - count; j < nums.size(); j++)
    {
        nums[j] = 0;
    }
}