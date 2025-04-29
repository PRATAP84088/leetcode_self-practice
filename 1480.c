// LEETCODE PROBLEM NUMBER 1480
// Running Sum of 1d Array


int* runningSum(int* nums, int numsSize, int* returnSize) {
    int sum=0;
    *returnSize=numsSize;
    for(int i=1;i<numsSize;i++){
        nums[i]+=nums[i-1];
    }
    return nums;
}


// This function modifies the input array `nums` to store the **running sum** in-place,
// where each element becomes the sum of all previous elements including itself.
// It also sets `*returnSize` to the size of the array and returns the modified array.