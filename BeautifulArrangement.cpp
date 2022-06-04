class Solution {
public:
    int count = 0;
    
    void generateAndCount(int n, int ind, bool taken[], int a[]){
        
        if(ind == n){
            // for(int i = 0;i < n;i++)cout<<a[i]<<" ";
            count++;
            return;
        }
        
        for(int i = 1;i <= n;i++){
            if(!taken[i-1]){
                if(i % (ind + 1) == 0 || (ind + 1) % i == 0){
                    taken[i-1] = true;
                    a[ind] = i;
                    generateAndCount(n, ind + 1, taken, a);
                    taken[i-1] = false;
                }
            }
            
            
        }
    }
    int countArrangement(int n) {
        bool taken[n];
        fill(taken, taken + n, false);
        int a[n];
        fill(a, a+ n, 0);
        generateAndCount(n, 0, taken, a);
        return count;
    }
};
