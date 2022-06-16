class Solution {
    public int maxProfit(int[] prices) {
        /*
        int n = prices.length;
        int maxdiff=0, maxprofit=0;
        for(int i=0 ; i < n -1 ; i++){
            for(int j = i+1 ; j < n ;j++)
            {
                maxdiff = prices[j] - prices[i];
                if(maxdiff > maxprofit)
                    maxprofit=maxdiff;
            }
        }
    return maxprofit;
    */
     int minprice = Integer.MAX_VALUE;
        int maxprofit = 0;
        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
    
}