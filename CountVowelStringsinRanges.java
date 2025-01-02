class Solution {
    private boolean isStartEndWithVowel(String word){
        char s = word.charAt(0);
        char e = word.charAt(word.length() - 1);
        return ((s == 'a') || (s == 'e') || (s == 'i') || (s == 'o') || (s == 'u')) && ((e == 'a') || (e == 'e') || (e == 'i') || (e == 'o') || (e == 'u'));
    }
    public int[] vowelStrings(String[] words, int[][] queries) {
        int n = words.length + 1;
        int[] countArray = new int[n];
        for(int i = 1;i < n;i++){
            if(isStartEndWithVowel(words[i-1])){
                countArray[i] = countArray[i-1] + 1;
            }else {
                countArray[i] = countArray[i-1];
            }
        }
        int qLength = queries.length;
        int[] result = new int[qLength];
        for(int i = 0;i < qLength;i++){
            result[i] = countArray[queries[i][1]+1] - countArray[queries[i][0]];
        }
        return result;
    }
}
