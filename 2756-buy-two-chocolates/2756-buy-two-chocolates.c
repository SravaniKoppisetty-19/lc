int buyChoco(int* prices, int pricesSize, int money) {
    for(int i = 0 ;i< pricesSize ; i++)
    {
        for(int j = 0 ;j<pricesSize-1; j++)
        {
            if(prices[j] > prices[j+1])
            {
                int temp = prices[j];
                prices[j] = prices[j+1];
                prices[j+1] = temp;
            }
        }
    }
    int sum = prices[0] + prices[1];
    if(sum <= money )
    {
        return money-sum;
    }
    return money;
}