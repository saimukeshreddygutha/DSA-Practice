class Solution {
    public int longestValidParentheses(String s) {
        int n = s.length();
        HashMap<Integer, Integer> map = new HashMap<>();
        int sum = 0;
        map.put(0, -1);
        int ans = 0;
        for(int i = 0;i < n;i++){
            if(s.charAt(i) == '('){
                sum++;
                if(map.containsKey(sum) && sum == 0){
                    ans = Math.max(i - map.get(sum), ans);
                }else map.put(sum, i);
            }
            else{
                sum--;
                if(sum == -1){
                    map.clear();
                    map.put(0, i);
                    sum = 0;
                }else{
                    if(map.containsKey(sum)){
                        ans = Math.max(i - map.get(sum), ans);
                    }else map.put(sum, i+1);
                }
            }
        }
        return ans;

    }
}
