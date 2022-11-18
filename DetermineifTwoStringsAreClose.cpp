class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1 = word1.size(), l2 = word2.size();
        if(l1 != l2)return false;

        vector<int> count1(26, 0);
        vector<int> count2(26, 0);
        vector<int> ch1(26, 0);
        vector<int> ch2(26, 0);

        for(char c : word1){count1[c - 'a']++;ch1[c - 'a']=1;}
        for(char c : word2){count2[c - 'a']++;ch2[c - 'a']=1;}

        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());

        return count1 == count2 && ch1 == ch2;
    }
};
