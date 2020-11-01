//references https://leetcode.com/problems/single-number
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class SingleNumber{
public:
    static int singleNumber(vector<int>& nums) {
        int sumVec = 0;
        int sumNums = 0;
        vector<int> vec; 
        
        int i;
        for(i = 0; i < nums.size(); i++) {
            if(!(find(vec.begin(), vec.end(), nums[i]) != vec.end())) {
                vec.push_back(nums[i]);
                sumVec += nums[i];
            }
            sumNums += nums[i];
        }
         return 2 * sumVec - sumNums;
    }
};
int main() {
    vector<int> nums = {4,1,2,1,2};

    cout << "Elemento sem par: " << SingleNumber::singleNumber(nums);

    return 0;
}