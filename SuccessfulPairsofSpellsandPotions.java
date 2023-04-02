class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        
        int noOfSpells = spells.length;
        int noOfPotions = potions.length;

        Arrays.sort(potions);
        int[] ans = new int[noOfSpells];
        for(int i = 0;i < noOfSpells;i++){

            int l = 0, h = noOfPotions - 1;
            int idx = -1;
            while(l <= h){
                int m = (h - l)/2 + l;
                if((long) spells[i] * potions[m] >= success){h = m -1;idx = m;}
                else l = m + 1;
            }
            if(idx == -1)continue;

            ans[i] = noOfPotions - idx;
        }
        return ans;
    }
    
}
