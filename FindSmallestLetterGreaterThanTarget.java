class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        
        int n = letters.length;
        int l = 0, h = n - 1;
        while(l < h){
            int m = (h - l)/2 + l;
            if(letters[m] <= target){
                l = m+ 1; 
            }else h = m;
        }

        return letters[h] <= target ? letters[0] : letters[h];
    }
}
