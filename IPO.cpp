class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        vector<pair<int, int>> project;
        int n = profits.size();
        for(int i = 0;i < n;i++)project.push_back({capital[i], profits[i]});
        sort(project.begin(), project.end());
        priority_queue<int> maxheap;
        int j = 0;
        for(int i = 0;i < k;i++){
            while(j < n && w >= project[j].first){
                maxheap.push(project[j].second);
                j++;
            }
            if(maxheap.empty())break;
            w += maxheap.top();
            
            maxheap.pop();

        }
        return w;

    }
};
