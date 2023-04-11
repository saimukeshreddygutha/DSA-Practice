class Solution {
    public String removeStars(String s) {
        
        int n = s.length();
        String ans = "";
        int i = n -1;
        int noOfStars = 0;
        while(i > -1){
            if(s.charAt(i) == '*'){noOfStars++;i--;continue;}
            if(noOfStars > 0){i--;noOfStars--;continue;}
            ans = s.charAt(i) + ans;
            i--;
        }

        return ans.toString();
    }
}
