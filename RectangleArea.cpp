class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        if(bx1 >= ax2 || ax1 >= bx2 || ay1 >= by2 || by1 >= ay2)
            return abs((long)ax2 -  ax1) * abs(ay2 - ay1) + abs((long)by2 - by1) * abs(bx2 - bx1);
        else{
            long x1 = max(ax1, bx1);
            long y1 = max(ay1, by1);
            long x2 = min(ax2, bx2);
            long y2 = min(by2, ay2);
            return abs(ax2 -  ax1) * abs(ay2 - ay1) + abs((long)by2 - by1) * abs(bx2 - bx1) - abs(x1 - x2) * abs(y1 - y2);
        }

    }
};
