class Solution {
    // public boolean findInList(List<String> res, String sb){
    //     for(String s: res){
    //         if(s.equals(sb))return true;
    //     }
    //     return false;
    // }
    public List<String> partitionString(String s) {
        
        int n = s.length();
        StringBuffer sb = new StringBuffer();
        List<String> res = new ArrayList<>();
        Map<String, Boolean> m = new HashMap<>();
        for(int i = 0;i < n;i++){
            sb.append(s.charAt(i));
            if(!m.getOrDefault(sb.toString(), false)){
                res.add(sb.toString());
                m.put(sb.toString(), true);
                sb = new StringBuffer();
            }
        }

        return res;
    }
}
