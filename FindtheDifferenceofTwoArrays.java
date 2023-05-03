class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        
        HashMap<Integer, Integer> map1 = new HashMap<>();
        HashMap<Integer, Integer> map2 = new HashMap<>();

        for(int i = 0;i < nums1.length;i++)map1.put(nums1[i], map1.getOrDefault(nums1[i], 0) + 1);
        for(int i = 0;i < nums2.length;i++)map2.put(nums2[i], map2.getOrDefault(nums2[i], 0) + 1);

        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        List<Integer> ans1 = new ArrayList<>();

        for(Integer key : map1.keySet()){
            if(map1.getOrDefault(key, 0) != 0 && map2.getOrDefault(key, 0) == 0){ans1.add(key);}

        }
        List<Integer> ans2 = new ArrayList<>();
        for(Integer key : map2.keySet()){
            if(map2.getOrDefault(key, 0) != 0 && map1.getOrDefault(key, 0) == 0)ans2.add(key);

        }

        ans.add(ans1);
        ans.add(ans2);

        return ans;
    }
}
