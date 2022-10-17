class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a = 0;
        for(char c : sentence){
            a |= (1 << c - 'a');
        }
        
        return a == 67108863;
    }
};
