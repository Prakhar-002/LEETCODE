//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2126

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
            // Sort so we always face the smallest asteroid first
            sort(asteroids.begin(), asteroids.end());

            long long currentMass = mass;    // Use long long to prevent overflow after absorptions

            for (int asteroid : asteroids) {
                  // Can't destroy asteroid — it's too heavy
                  if (currentMass < asteroid)
                        return false;

                  // Absorb asteroid and grow
                  currentMass += asteroid;
            }

            return true;
      }
};