class Solution {
    public int maxProfit(int[] prices, int fee) {
        int b = Integer.MIN_VALUE;
        int res = 0;
        for(int price: prices){
            b = Math.max(b, res - price);
            res = Math.max(res, b + price - fee);
        }

        return res;
    }
}
