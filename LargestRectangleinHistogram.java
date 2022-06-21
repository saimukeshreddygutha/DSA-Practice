class Solution {
    
    public int[] beforeSmaller(int[] a, int n){
        Stack<Integer> s = new Stack<>();
        int[] b = new int[n];
        Arrays.fill(b, 0);
        for(int i = 0;i < n;i++){
            while(!s.empty() && a[s.peek()] >= a[i])s.pop();
            if(!s.empty())b[i] = s.peek() + 1;
            s.push(i);
        }
        return b;
    }
    
    public int[] nextSmaller(int[] a, int n){
        Stack<Integer> s = new Stack<>();
        int[] c = new int[n];
        Arrays.fill(c, n - 1);
        for(int i = n - 1;i > -1;i--){
            while(!s.empty() && a[s.peek()] >= a[i])s.pop();
            if(!s.empty())c[i] = s.peek() - 1;
            s.push(i);
        }
        return c;
    }
    
    public int largestRectangleArea(int[] heights) {
        int len = heights.length;
        int[] l = beforeSmaller(heights, len);
        int[] r = nextSmaller(heights, len);
        int ans = Integer.MIN_VALUE;
        for(int i = 0;i < len;i++){
            ans = Math.max(ans, (r[i] - l[i] + 1) * heights[i]);
        }
        return ans;
    }
}
