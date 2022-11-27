class Trie{
    public:
    Trie* child[2];
    Trie(){
        for(int i = 0;i < 2;i++)this->child[i] = nullptr;
    }
};

void insert(Trie* root, int val){
    for(int i = 31;i > -1;i--){
        int bit = ((val>>i)&1);
        if(root->child[bit] ==nullptr)root->child[bit] = new Trie();
        root = root -> child[bit];
    }
}

class Solution {
public:
    int ans;
    void maxXoR(Trie* root, int val){
        int mx = 0;
        for(int i = 31;i > -1;i--){
            int bit = ((val>>i)&1);

            if(bit == 1){
                
                if(root->child[0]){root = root-> child[0];mx|=(1 << i);}
                else root = root->child[1];
                
            }else{
                if(root->child[1]){mx|=(1<<i);root=root->child[1];}
                else root = root->child[0];
                
            }
        }
        ans = max(ans, mx);

    }
    int findMaximumXOR(vector<int>& nums) {
        Trie* root = new Trie();
        for(auto i: nums)insert(root, i);
        ans = INT_MIN;
        for(int i = 0;i < nums.size();i++){
            maxXoR(root, nums[i]);
        }
        return ans;
    }
};
