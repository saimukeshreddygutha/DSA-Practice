class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        int len = bits.size();
        int i = 0;
        while(i < len){
            if((i == len -1) && bits[i] == 0)return true;
            if(bits[i] == 1){
                i += 2;
            }
            else i += 1;
        }
        return false;
    }
};
