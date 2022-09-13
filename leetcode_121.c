int maxProfit(int* prices, int pricesSize){
    int maxvalue = 0;
    int minvalue = 10000;
    for( int i = 0; i < pricesSize; i++){
        if(minvalue > prices[i]){
            minvalue = prices[i];
        }else if(maxvalue < (prices[i] - minvalue)){
            maxvalue = (prices[i] - minvalue);
        }
        
    }    
    return maxvalue;
}
