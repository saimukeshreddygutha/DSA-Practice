class RandomizedSet {
public:
    set<int> s;
    int len;
    RandomizedSet() {
        s.clear();
        len = 0;
    }
    
    bool insert(int val) {
        if(s.count(val))return false;
        s.insert(val);
        len++;
        return true;
    }
    
    bool remove(int val) {
        if(s.count(val) == 0)return false;
        s.erase(val);
        len--;
        return true;
    }
    
    int getRandom() {
        set<int>:: iterator itr = s.begin();
        int r = rand()%len;
        advance(itr, r);
        return *itr;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
