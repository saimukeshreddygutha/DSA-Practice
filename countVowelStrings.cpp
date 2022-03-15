class Solution {
public:
  /*
  v[0] = sum(v[1:])
  */
    int countVowelStrings(int n) {
        int v[5]={1,1,1,1,1};
        for(int i=1;i<n;i++){
            for(int j=0;j<5;j++){
                v[j]=accumulate(v+j,v+5,0);
            }
        }
        return accumulate(v,v+5,0);
    }
};
