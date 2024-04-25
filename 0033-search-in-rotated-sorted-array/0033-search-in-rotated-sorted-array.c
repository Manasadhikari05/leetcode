int search(int* nums, int numsSize, int target) {
    int index=-1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            index=i;
            break;
        }
    }
    return index;
}