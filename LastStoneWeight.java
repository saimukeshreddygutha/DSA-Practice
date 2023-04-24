class Solution {
    public int lastStoneWeight(int[] stones) {
        final int n = 1001;
        int[] count = new int[n];
        int mx = -1;

        for(int i = 0;i < stones.length;i++)count[stones[i]]++;

        int i = n-1;
        while(i > 0){

            if(count[i] == 0){i--;continue;}
            if(mx != -1){
                count[mx - i]++;count[i]--;
                i = Math.max(i, mx-i);
                
                mx = -1;
                continue;
            }else{
                mx = i;
                count[mx]--;
                continue;
            }
            

        }
        return mx==-1?0:mx;

    }
}

// 8 7 4 2 1 1
