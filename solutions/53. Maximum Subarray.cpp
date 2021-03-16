class Solution {
public:
    int maxSubArray(vector<int>& nums) {
​
        int n=nums.size();
        int maxSum=nums[0];
        for (int i = 1; i < n; ++i){
            if (nums[i-1]>0)
                nums[i]+=nums[i-1];
            maxSum=max(nums[i],maxSum);
        }
        return maxSum;
    }    
};
//if num[i-1]<0 and num[i]>maxSum we are gonna restart again
//otherwise we are gonna update nums[i] as we go through the array
​
//maxSum=nums[0]=-2
//i=1 nums[0]=-2 maxSum=max(nums[1],-2)=1
//i=2 nums[1]=1>0  nums[2]=nums[2]+nums[1]=-3+1=-2  maxSum=max(-2,1)=1
//i=3 nums[2]=-2<0 maxSum=max(4,1)=4 
//i=4 nums[3]=4 nums[4]=nums[4]+nums[3]=3 maxSum=max(4,3)=4
//i=5 nums[4]=3 nums[5]=nums[5]+nums[4]=2+3=5 maxSum=max(5,4)=5
//i=6 nums[5]=5 nums[6]=nums[6]+nums[5]=1+5=6 maxSum=max(6,5)=6
//i=7 nums[6]=6 nums[7]=-5+6=1 maxSum=6
//i=8 nums[7]=1 nums[8]=4+1=5 maxSum=6
