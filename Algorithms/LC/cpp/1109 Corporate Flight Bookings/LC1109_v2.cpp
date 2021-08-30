// Problem :    https://leetcode.com/problems/corporate-flight-bookings/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-30


class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> seatsBooking(n, 0);
        for (auto booking : bookings) {
            seatsBooking[booking[0] - 1] += booking[2];
            if (booking[1] < n) {
                seatsBooking[booking[1]] -= booking[2];
            }
        }
        for (int seatIndex = 1; seatIndex < n; ++seatIndex) {
            seatsBooking[seatIndex] += seatsBooking[seatIndex - 1];
        }
        return seatsBooking;
    }
};

// difference array
