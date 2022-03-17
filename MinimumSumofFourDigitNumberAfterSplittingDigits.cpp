class Solution {
public:
    int minimumSum(int num) {
        vector< int > digits;
        int temp = num;
        
        while(temp){
            digits.push_back(temp%10);
            temp = temp/10;
        }
        
        sort(digits.begin(),digits.end());
        
        int firstnum = digits[0]*10+digits[2];
        int secondnum = digits[1]*10+digits[3];
        
        return firstnum + secondnum;
    }
};
