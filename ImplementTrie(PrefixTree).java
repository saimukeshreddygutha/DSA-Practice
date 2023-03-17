class TrieNode{
    public TrieNode[] child =  new TrieNode[26];
    public boolean flag;

    public TrieNode(){
        flag = false;
        for(int i = 0;i < 26;i++)child[i]=null;
    }
}

class Trie {

    TrieNode root;
    public Trie() {
        this.root = new TrieNode();
    }

    public void insert(String word) {
        TrieNode r = root;
        for(int i = 0;i < word.length();i++){
            if(r.child[word.charAt(i)-'a'] == null)
                r.child[word.charAt(i) - 'a'] = new TrieNode();
            r = r.child[word.charAt(i) - 'a'];
        }
        r.flag = true;
    }
    
    public boolean search(String word) {
        TrieNode r=root;
        for(int i = 0;i < word.length();i++){
            if(r == null)return false;
            r = r.child[word.charAt(i) - 'a'];
        }
        return r != null && r.flag == true;
    }
    
    public boolean startsWith(String prefix) {
        TrieNode r = root;
        for(int i = 0;i < prefix.length();i++){
            if(r == null)return false;
            r = r.child[prefix.charAt(i)-'a'];
        }
        return r!=null;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */
