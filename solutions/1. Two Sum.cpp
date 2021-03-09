class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int y;
        for (int i=0;i<nums.size()-1;i++)
        {
            y=target-nums[i];
            for (int j=i+1; j<nums.size(); j++)
            {
                if (nums[j]==y) return {i,j};
            }
        }
       return {};
    }
};
​
/*
class Solution {
public:
    std::vector<int> twoSum(vector<int>& nums, int target) {
        
//map for finding the complement of current number in the vector
        std::unordered_map<int, int> hashmap; 
        
        //loop for checking if the complement of the current integer exist in the map
        for(int i = 0; i < nums.size(); i++){
            //if complement has found, return current index and index of compliment
            //index of complement is its value in the map
            //with C++20, mappy.contains would probably been better
            if(hashmap.count(target-nums[i])){
                //return the index of the current integer in the vector, and the index of the complement
                return {i,(hashmap[target - nums[i]])};
            }
            //if complement has not been passed by yet, modify the complement's value with its index
            hashmap[nums[i]] = i;
        }
        //return empty vector if no integers answer found
        return {};
 }
};
*/
​
