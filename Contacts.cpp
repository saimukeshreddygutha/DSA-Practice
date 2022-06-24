
class Trie{
    public:
    int count = 0;
    Trie *child[26];
  Trie(){
      for(int i = 0;i < 26;i++){
          this->child[i] = nullptr;
      }
  }  
};


void insert(Trie *r, string s){
    int l = s.size();
    for(int i = 0;i < l;i++){
        if(r->child[s[i] - 'a'] == nullptr){
            r->child[s[i] - 'a'] = new Trie();
        }
        r->child[s[i] - 'a']->count++;
        r = r->child[s[i] - 'a'];
    }
}

int find(Trie *r, string s){
    int l = s.size();
    for(int i = 0;i < l;i++){
        if(r == nullptr){
            return 0;
        }
        if(r->child[s[i]-'a'] != nullptr)
            r = r->child[s[i]-'a'];
        else return 0;
    }
    
    return r->count;
}
vector<int> contacts(vector<vector<string>> queries) {
        Trie *r = new Trie();
        vector<int> ans;
        int ql = queries.size();
        for(int i = 0;i < ql;i++){
            if(queries[i][0] == "add")insert(r, queries[i][1]);
            else ans.push_back(find(r, queries[i][1]));
        }
        return ans;
}
