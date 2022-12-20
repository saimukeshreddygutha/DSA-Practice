class Solution {
public:
    void visit(vector<vector<int>>& rooms, vector<int> &allRooms, int idx){
        allRooms[idx]=1;
        for(auto v: rooms[idx]){
            if(!allRooms[v]){visit(rooms, allRooms, v);}
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> allRooms(n, 0);
        visit(rooms, allRooms, 0);
        for(int i = 0;i < n;i++)if(!allRooms[i])return false;
        return true;
        
    }
};
