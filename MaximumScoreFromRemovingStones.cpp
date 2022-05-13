class Solution {
public:
    static bool csort(int a, int b){
        return a > b;
    }
    int maximumScore(int a, int b, int c) {
        
        if((a == 0 && b == 0) || (a == 0 && c == 0) || (b == 0 && c == 0))return 0;
        int arr[3] = {a, b, c};
        sort(arr, arr+3, csort);
        if(arr[2])
            return maximumScore(arr[0] - 1, arr[2] - 1, arr[1]) + 1;
        return maximumScore(arr[0]-1, arr[1]-1, 0) + 1;
    }
};
