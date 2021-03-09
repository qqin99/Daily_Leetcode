class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    
    for (int i=1; i<nums.size(); i++)
        nums[i]+=nums[i-1];
        return nums;
    }
};
​
/*
i=1
nums[1]=nums[0]+nums[1]=3
i=2
nums[2]=nums[1]+nums[2]=3+3=6
i=3
nums[3]=nums[2]+nums[3]=6+4=10
*/
/* iterative
​
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentSum=0;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            currentSum += nums[i];
            result.push_back(currentSum);
        }
        return result;
    }
};
*/
