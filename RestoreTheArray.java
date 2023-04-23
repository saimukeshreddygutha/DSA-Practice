class Solution {
    public final int mod = (int)1e9+7;
    HashMap<Integer, Long> map = new HashMap<>();
    public long helper(String s, int k, int n, int curInd){
        if(n == curInd)return 1;
        if(s.charAt(curInd) == '0')return 0;
        if(map.containsKey(curInd))return map.get(curInd);
        long cur = 0;
        long count = 0;
        int i = curInd;
        while(i < n && cur <= k){
            cur*=10;
            cur+=(s.charAt(i) - '0');
            i++;
            if(cur <= k)count =(count%mod + helper(s, k, n, i)%mod)%mod;
            else break;

        }
        map.put(curInd, count);
        return count;
    }
    public int numberOfArrays(String s, int k) {
        return (int)helper(s, k, s.length(), 0);
    }
}
