int* plusOne(int* digits, int digitsSize, int* returnSize){
    int* ans;
    ans = (int*)malloc((digitsSize+1) * sizeof(int));
    int flag = 1;
    for(int i = digitsSize-1; i >= 0; i--){
        if(digits[i] == 9){
            digits[i] = 0;
        }else{
            digits[i]++;
            flag = 0;
            break;
        }
    }
    
    if(flag){
        ans[0] = 1;
    }
    
    for(int i = flag, j = 0; j<digitsSize; i++,j++){
        ans[i] = digits[j];
    }
    *returnSize = digitsSize+ flag;
    return ans;
}
