class Solution {
    public int partitionString(String s) {
        
        HashMap<Character, Integer> map = new HashMap<>();
        int n = s.length();

        int count = 0;
        int start = 0;

        for(int i = 0;i < n;i++){
            if(map.containsKey(s.charAt(i))){count++;start = i;map.clear();}
            map.put(s.charAt(i), i);
        }
        return count+1;
    }
}
