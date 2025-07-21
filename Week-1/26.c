int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    int i;
    for(i=0;i<numsSize;i++){
        if(i==0){
            nums[k++] = nums[i];
        }
        else{
            if(nums[i]!=nums[k-1]){
                nums[k++] = nums[i];
            }
        }
    }
    return k;
}