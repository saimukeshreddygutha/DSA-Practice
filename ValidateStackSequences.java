class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        
        Stack<Integer> stack = new Stack<>();

        int idx = 0;
        for(int i = 0;i < pushed.length;i++){
            stack.push(pushed[i]);
            while(!stack.empty() && idx < popped.length && stack.peek() == popped[idx]){stack.pop();idx++;}
        }

        return idx == popped.length;
    }
}
