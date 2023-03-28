class Solution {
    public int mincostTickets(int[] days, int[] costs) {
        int[] dp = new int[days.length+1];
        int monthStart = 1;
        int weekStart = 1;
        
        for(int i=0;i<days.length;i++){
            
            int dayPass = costs[0] + dp[i];
            
            while(days[i]-days[weekStart-1]+1>7)
                weekStart++;
            
            int weekPass = costs[1] + dp[weekStart-1];
            
            while(days[i]-days[monthStart-1]+1>30)
                monthStart++;
            
            int monthPass = costs[2] + dp[monthStart-1];
            
            dp[i+1] = Math.min(dayPass,Math.min(weekPass,monthPass));
        }
        return dp[days.length];
    }
}
