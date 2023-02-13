class Solution {
    public int countOdds(int low, int high) {
        int ans = 0;
        if((low&1) == 1){ans++;low++;}

        if((high&1) == 1){ans++;high--;}
        return (high-low)/2 + ans;
    }
}
