class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle = minutes * 6.0;
        double hourAngle = hour * 30.0 + minutes * 0.5;
        double diffAngle = abs(minuteAngle - hourAngle);
        return min(diffAngle, 360-diffAngle);
    }
};
