// Problem :    https://leetcode.com/problems/generate-random-point-in-a-circle/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-5


#include <random>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;


class Solution {
private:
    mt19937 gen32{ random_device{}() };
    uniform_real_distribution<double> distribution;
    double r, x, y;

public:
    Solution(double radius, double x_center, double y_center) : r(radius), x(x_center), y(y_center) {
    }

    vector<double> randPoint() {
        vector<double> point(2);
        double newR = r * sqrt(distribution(gen32));
        double newTheta = distribution(gen32) * 2 * M_PI;
        point[0] = x + newR * cos(newTheta);
        point[1] = y + newR * sin(newTheta);
        return point;
    }
};

// mt19937

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */