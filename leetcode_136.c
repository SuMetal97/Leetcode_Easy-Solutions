int singleNumber(int* nums, int numsSize){
    int* used;
    int pos = 1;
    used = (int*)malloc(30000*sizeof(int*));
    used[0] = -30001;
    for (int i = 0; i <numsSize-1; i++){
        bool flag = false, num_found = false;;
        for(int k = 0; k < pos; k++){
            if(nums[i] == used[k]){
                num_found = true;
            }
        }
        if(num_found == false){
            for (int j = i+1; j < numsSize; j++){
                if(nums[i] == nums[j]){
                    flag = true;
                    used[pos++] = nums[i];
                }
            }
            if (flag == false){
                return nums[i];
            }
        }
    }
    return nums[numsSize-1];
}
