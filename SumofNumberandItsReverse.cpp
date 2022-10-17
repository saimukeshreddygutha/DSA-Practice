class Solution {
public:
    int rev(int n){
        int s = 0;
        while(n){
            int r = n%10;
            s = s*10 + r;
            n/=10;
        }
        
        return s;
    }
    
    bool sumOfNumberAndReverse(int num) {
        if(num == 0)return true;
        for(int i = num-1;i > -1;i--){
            if(i + rev(i) == num)return true;
        }
        
        return false;
    }
};
