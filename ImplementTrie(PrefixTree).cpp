class TrieNode
{
public:
    TrieNode *child[26];
    bool isWord;
    
    TrieNode()
    {
        for(int i = 0;i < 26;i++)child[i]= nullptr;
        isWord = false;
    }
};

class Trie
{
    TrieNode *root;
public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string s)
    {
        TrieNode *p = root;
        for(int i = 0; i < s.size(); ++ i)
        {
            if(p -> child[s[i] - 'a'] == nullptr)
                p -> child[s[i] - 'a'] = new TrieNode();
            p = p -> child[s[i] - 'a'];
        }
        p -> isWord = true;
    }

    bool search(string key)
    {
        TrieNode *p = find(key);
        return p != nullptr && p -> isWord;
    }

    bool startsWith(string prefix)
    {
        return find(prefix) != nullptr;
    }

private:
    TrieNode* find(string key)
    {
        TrieNode *p = root;
        for(int i = 0; i < key.size() && p != nullptr; ++ i)
            p = p -> child[key[i] - 'a'];
        return p;
    }
};
