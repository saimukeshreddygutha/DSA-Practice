class Solution {
public://make sure i is long long int as c may cross 32
    bool isPowerOfFour(int n) {
        long long int c = 0,i=1;
        while( n >= (i<<c)){
            if(n==(i<<c))
                return true;
            c+=2;
        }
        return false;
    }
};
