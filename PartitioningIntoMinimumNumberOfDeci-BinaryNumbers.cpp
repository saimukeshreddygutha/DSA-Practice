// #include<ctype.h>
class Solution {
public:
    int minPartitions(string n) {
        int l = n.size();
        int ans = INT_MIN;
        for(int i = 0;i < l;i++){
            if(ans < n[i] - '0'){
                ans = n[i] - '0';
            }
        }
        return ans;
    }
};
