int climbStairs(int n){
    int *ans; 
    ans= malloc(45*sizeof(int *));
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    
    for( int  i = 3; i <= n; i++){
        ans[i] = ans[i-1] + ans[i-2];
    }
    int answer = ans[n];
    free(ans);
    return answer;
}
