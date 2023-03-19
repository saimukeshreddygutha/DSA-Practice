class Trie{
    
    Trie[] child = new Trie[26];
    boolean flag;

    Trie(){
        this.flag = false;
        for(int i = 0;i < 26;i++)this.child[i]=null;
    }
}

class WordDictionary {
    Trie root;
    public WordDictionary() {
        this.root = new Trie();
    }
    
    public void addWord(String word) {
        Trie r = root;
        for(int i = 0;i < word.length();i++){
            if(r.child[word.charAt(i) - 'a'] == null)r.child[word.charAt(i)-'a'] = new Trie();
            r = r.child[word.charAt(i)-'a'];
        }
        r.flag = true;
    }
    public boolean find(String word, int i, Trie r){
        if(r == null)return false;
        if(word.length() == i)return r.flag;
        // if(word.length() > i)return false;
        if(word.charAt(i) == '.'){
            boolean flag = false;

            for(int j = 0;j < 26;j++)flag |= find(word, i+1, r.child[j]);
            return flag;
        }

        return find(word, i+1, r.child[word.charAt(i) -'a']);
    }

    public boolean search(String word) {
        return find(word, 0, root);
        
    }
}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * boolean param_2 = obj.search(word);
 */
