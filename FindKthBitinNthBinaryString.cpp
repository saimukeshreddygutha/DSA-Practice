class Solution {
public:
    char reverse(char v){
        if(v == '0')return '1';
        return '0';
    }
    int lenOfStringSn(int n){
        return (1 << n) - 1;
    }
    char findKthBit(int n, int k) {
        if(k == 1)return '0';
        int len = lenOfStringSn(n);
        if(k == len || (k-1 == len/2))return '1';

        if(k-1 > len/2){
            return reverse(findKthBit(n-1, len - k + 1));
        }
        return findKthBit(n-1, k);
    }
};

// s1 = 0 - 1-0
// s2 = 011 - 3-1
// s3 = 0111001 - 7-3
// s4 = 011100110110001 - 15
