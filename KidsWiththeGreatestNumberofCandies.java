class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        

        int mx = 0;
        int n = candies.length;

        List<Boolean> ans = new ArrayList<Boolean>();
        for(int i = 0;i < n;i++)if(candies[i] > mx){mx = candies[i];}

        for(int i = 0;i < n;i++){
            if(candies[i] + extraCandies >= mx)ans.add(true);
            else ans.add(false);
        }

        return ans;
    }
}
