#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> ret;
        for(int i=0; i<nums.size(); i++)
        {
            int numToFind = target - nums[i];
            if(hash.find(numToFind)!=hash.end())
            {
                ret.push_back(hash[numToFind]+1);
                ret.push_back(i+1);
                break;
            }
            hash[nums[i]] = i;
        }
        return ret;
    }
};

int main()
{
    Solution solution;
    vector<int> v = {1,3,2,2};
    vector<int> ret = solution.twoSum(v, 5);
    for(auto p:ret)
    {
        cout << p << endl;
    }
}