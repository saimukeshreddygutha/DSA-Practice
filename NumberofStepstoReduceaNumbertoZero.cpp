class Solution {
public:
    int numberOfSteps(int num) {
        int temp=num,ans =0;
        while(temp){
            ans++;
            if((temp&1) == 0)
                temp = temp/2;
            else
                temp -= 1;
        }
        return ans;
    }
};
