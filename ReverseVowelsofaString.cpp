class Solution {
public:
    bool isVowel(char a){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')return true;
        return false;
    }
    string reverseVowels(string s) {
        int p1 = 0;
        int p2 = s.size() - 1;
        while(p1 < p2){
            if(isVowel(s[p1]) && isVowel(s[p2])){
                char t = s[p1];
                s[p1] = s[p2];
                s[p2] = t;
                p1++;p2--;
            }
            else if(isVowel(s[p1]))p2--;
            else if(isVowel(s[p2]))p1++;
            else {p1++;p2--;}

        }
        return s;
    }
};
