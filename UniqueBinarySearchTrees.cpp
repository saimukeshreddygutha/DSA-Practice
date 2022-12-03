class Solution {
public:
    int catalanNumber(int n){
        int a[n + 1];
        a[0] = 1;
        a[1] = 1;
        for(int i = 2;i < n + 1;i++){
            a[i] = 0;
            for(int j = 0;j < i;j++)a[i] += a[j] * a[i - j -1];
        }
        return a[n];
    }
    int numTrees(int n) {
        return catalanNumber(n);
    }
};
