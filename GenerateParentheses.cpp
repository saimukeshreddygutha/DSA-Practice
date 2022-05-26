class Solution {
public:
    vector<string> ans;
    void genPara(int n, int oc, int cc, string s){
        if(oc + cc == 2 * n)ans.push_back(s);
        if(oc < n)genPara(n, oc + 1, cc, s + "(");
        if(cc < oc)genPara(n, oc, cc + 1, s + ")");
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        genPara(n, 0, 0, "");
        return ans;
    }
};
