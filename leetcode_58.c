int lengthOfLastWord(char * s){
    int size = strlen(s);
    int num = 0, lastword = 0;
    for( int i = 0; i <size; i++){
       if(s[i] != ' '){
           num++;
       } else if(num != 0){
           lastword = num;
           num = 0;
       }
    }
    
    if(num == 0){
        return lastword;
    }
    return num;
}
