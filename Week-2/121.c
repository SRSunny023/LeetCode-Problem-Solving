int maxProfit(int* prices, int pricesSize) {
    int minPrice,i,profit,maxProfits;
    minPrice = prices[0];
    maxProfits = 0;
    for(i=0;i<pricesSize;i++){
        if(prices[i]<minPrice){
            minPrice = prices[i];
        }
        if(prices[i]-minPrice>maxProfits){
            maxProfits = prices[i]-minPrice;
        }
    }
    return maxProfits;
}