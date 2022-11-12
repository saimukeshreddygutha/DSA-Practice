class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
    MedianFinder() {
    }
    
    void addNum(int num) {
        
        if(maxheap.size() == 0){
            maxheap.push(num);
        }
        else if(maxheap.size()==minheap.size()){
           if(num < minheap.top())maxheap.push(num);
           else{

               int t = minheap.top();
               minheap.pop();
               maxheap.push(t);
               minheap.push(num);
           }
        }else if(maxheap.size() == minheap.size() + 1){
            if(num > maxheap.top())minheap.push(num);
            else{
                int t =maxheap.top();
                maxheap.pop();
                minheap.push(t);
                maxheap.push(num);
            }
        }
    }
    
    double findMedian() {
        int mx = maxheap.size();
        int mn = minheap.size();
        if((mx+mn)&1)return maxheap.top();
        else return ((double)maxheap.top() + minheap.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
