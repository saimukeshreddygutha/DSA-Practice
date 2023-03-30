class Solution {

    public HashMap<String, Integer> map = new HashMap<>();

    public boolean scramble(String s1, String s2){
        int n = s1.length();

        if(s1.equals(s2))return true;

        String key = s1 + s2;
        if(map.containsKey(key))return map.get(key) == 1 ? true : false;
    
        for(int i =  1;i < n;i++){

            if((scramble(s1.substring(0, i), s2.substring(0, i)) && scramble(s1.substring(i), s2.substring(i)))
             || (scramble(s1.substring(0, i), s2.substring(n-i)) && scramble(s1.substring(i), s2.substring(0, n-i)))){

                 map.put(key, 1);
                 return true;
             }
        }

        map.put(key, 0);
        return false;
    }
    public boolean isScramble(String s1, String s2) {

        if(s1.length() != s2.length())return false;
        return scramble(s1, s2);
    }
}
