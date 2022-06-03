class Solution {
public:
    string sub(string s, int i, int j){
        string ans = "";
        for(int k = i;k < j;k++)ans += s[k];
        return ans;
    }
    bool valid(int countt[],int counts[]){
        for(int i = 65; i < 123;i++)
            if(countt[i] > counts[i])return false;
        return true;
    }
    string minWindow(string s, string t) {
        int ls = s.size(), lt = t.size();
        int counts[256], countt[256];
        fill(counts, counts + 256, 0);
        fill(countt, countt + 256, 0);
        for(int i = 0;i < lt;i++)countt[(int)t[i]]++;
        int ans = INT_MAX;
        string ansstr = "";
        int p1 = 0;
        int p2 = 0;
        while(p1 < ls){
            if(!valid(countt, counts) && p2 < ls){
                counts[(int)s[p2]]++;
                p2++;
            }
            if(valid(countt, counts)){
                
                if(ans > p2 - p1){
                    ans = p2 - p1;
                    ansstr = sub(s, p1, p2);
                }
                counts[(int)s[p1]]--;
                p1++;
            }else if(p2 == ls){
                counts[(int)s[p1]]--;
                p1++;
            }
        }
        
        
        return ansstr;
    }
};
