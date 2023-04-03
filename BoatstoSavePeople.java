class Solution {
    public int numRescueBoats(int[] people, int limit) {
        
        Arrays.sort(people);
        int ans  = 0;
        int p1 = 0, p2 = people.length - 1;

        while(p1 < p2){
            if((long)people[p1] + people[p2] <= limit){p2--;p1++;}
            else{p2--;}
            ans++;
        }

        if(p1==p2)ans++;
        return ans;
    }
}
