class Solution {
public:
    vector<int> counts(int n){
        vector<int> ans(10,0);
        while(n > 0){
            ans[n % 10]++;
            n /= 10;
        }
        
        
        return ans;
    }
    bool reorderedPowerOf2(int n) {
        if(n == 1)return true;
        int i = 0;
        vector<int> c = counts(n);
        for(;i < 31;i++){
            vector<int> d = counts(1<<i);
            bool f = true;
            for(int j = 0;j < 10;j++)if(c[j] != d[j])f = false;
            if(f)return f;
        }
        return false;
    }
};
