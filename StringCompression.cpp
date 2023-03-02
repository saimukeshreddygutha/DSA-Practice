class Solution {
public:
    int addCountChars(vector<char>& chars, int i, int count){
        string s = to_string(count);
        for(int j = 0;j < (int)s.size();j++)chars[i++]=s[j];
        return i;
    }
    int compress(vector<char>& chars) {
        char prev = chars[0];
        int count = 1, i = 0;
        for(int j = 1;j < chars.size();j++){
            if(prev == chars[j])count++;
            else{
                chars[i++] = prev;
                prev = chars[j];
                if(count != 1){
                    
                    i=addCountChars(chars, i, count);
                }
                count = 1;
            }
        }
        chars[i++] = prev;
        if(count != 1)i=addCountChars(chars, i, count);
        return i;

    }
};
