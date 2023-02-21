class CustomStack {
    int size = 0;
    int top = -1;
    int[] stack;
    public CustomStack(int maxSize) {
        stack = new int[maxSize];
        size = maxSize;
    }
    
    public void push(int x) {
        if(top == size-1)return;
        stack[++top] = x;
    }
    
    public int pop() {
        return top == -1 ? top : stack[top--];
    }
    
    public void increment(int k, int val) {
        for(int i = 0;i < k && i <= top;i++)stack[i] += val;
    }
}

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack obj = new CustomStack(maxSize);
 * obj.push(x);
 * int param_2 = obj.pop();
 * obj.increment(k,val);
 */
