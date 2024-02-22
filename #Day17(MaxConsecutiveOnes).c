int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0;
    int max=count;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            count++;
        }
        else{
            if(count>max){
              max=count;
            }
            count=0;
        }
        if (count > max) {
        max = count;
    }
    }
    return max;
}