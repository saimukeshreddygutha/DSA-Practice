class Solution {
public:
    unordered_map<int, int> m;
    static bool sortkeyval(pair<int, int> a, pair<int, int> b){
        if(a.second == b.second)
            return a.first<b.first;
        return a.second < b.second;
    }
    int getPower(int x){
        if(x==1)
            return 0;
        int count=0;
        if(m[x])
            return m[x];
        if((x&1)==0){
            count = count + 1 + getPower(x/2);
        }
        else{
            count = count + 1 + getPower(3*x + 1);
        }
        return m[x]=count;
    }
    int getKth(int lo, int hi, int k) {
        vector < pair<int,int> > v;
        for(int i=lo;i<hi+1;i++){
            v.push_back({i,getPower(i)});
        }
        
        sort(v.begin(),v.end(), sortkeyval);
        for(int i=0;i<v.size();i++)
            cout<<v[i].first<<" "<<v[i].second<<endl;
        return v[k-1].first;
    }
};
