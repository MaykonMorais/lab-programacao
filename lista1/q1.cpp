//ref https://leetcode.com/problems/contains-duplicate/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class ContainsDuplicate
{
public:
    static bool containsDuplicate(vector<int>& nums) {
        if(nums.empty()) {
            return false;
        }

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-1; ++i) {
            if(nums[i] == nums[i+1]) return true;
        }

        return false;
    }
};

int main()
{  
    vector<int> nums{1, 2, 3, 4, 1};
    string result = ContainsDuplicate::containsDuplicate(nums) ? "true": "false";
    cout << "isDuplicated: " << result;
}
