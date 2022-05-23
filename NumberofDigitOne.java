class Solution {
    public int countDigitOne(int n) {
        int res = 0;
        int m = 1;
        int k = 0;
        while(n >= m) {
            int a = (n / (m * 10)) * m;
            int b = n % (m * 10) - k;

            if(b <= 0) {
                b = 0;
            } else if(b >= m) {
                b = m;
            }
            res = res + a + b;
            m = m * 10;
            k = k * 10 + 9;
        }
        return res;
    }
}
