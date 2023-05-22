class PairClass{
    public Integer v;
    public Integer k;

    PairClass(Integer v, Integer k){
        this.k = k;
        this.v = v;
    }
}

class CustomComparator implements Comparator<PairClass>{
    public int compare(PairClass a, PairClass b){
        return b.v - a.v;
    }
}
class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        
        HashMap<Integer, Integer> map = new HashMap<>();
        int[] ans = new int[k];
        for(int i = 0;i < nums.length;i++)
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);

        PriorityQueue<PairClass> pq = new PriorityQueue<PairClass>(new CustomComparator());
        for(Integer i: map.keySet()){
            pq.add(new PairClass(map.get(i), i));
        }

        for(int i = 0;i < k;i++){
            ans[i] = pq.poll().k;
        }

        return ans;


    }
}
