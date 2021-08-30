// Problem :    https://leetcode.com/problems/corporate-flight-bookings/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-30


class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> seatsBooking(n, 0);
        for (auto booking : bookings) {
            for (int seatIndex = booking[0] - 1; seatIndex < booking[1]; ++seatIndex) {
                seatsBooking[seatIndex] += booking[2];
            }
        }
        return seatsBooking;
    }
};

// brute force
