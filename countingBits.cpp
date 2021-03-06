class Solution {
public:
    /*
    https://leetcode.com/problems/counting-bits/
    approach is that an even number e will have same number of set bits as e/2
    an odd number o will have one less set bit than o/2
    ex 11 -> 3
       11/2 = 5 -> 2
    */

    vector<int> countBits(int n) {
        
        vector<int> bits;
        
        
        bits.push_back(0);
        if(n==0)
            return bits;
        bits.push_back(1);
        if(n==1)
            return bits;
        
        
        for(int i=2;i<=n;i++){
            if((i&1)==0){
                bits.push_back(bits[i/2]);
            }
            else{
                bits.push_back(bits[i/2]+1);
            }
        }
        
        return bits;
        
    }
};
