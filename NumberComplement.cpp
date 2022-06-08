class Solution {
public:
    int findComplement(int num) {
        int ans = 0, i = 0;
        while(num){
            if(!(num&1))ans = ans | (1 << i);
            i++;
            num = num >> 1;
            
        }
        return ans;
    }
};
