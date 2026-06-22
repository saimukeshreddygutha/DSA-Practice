class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp = {{'b', 0}, {'a', 0}, {'l', 0}, {'o', 0}, {'n', 0}};
        for(auto c: text){
            mp[c] += 1;
        }

        return min(mp['b'], min(mp['a'], min(mp['l']/2, min(mp['o']/2, mp['n']))));
    }
};
