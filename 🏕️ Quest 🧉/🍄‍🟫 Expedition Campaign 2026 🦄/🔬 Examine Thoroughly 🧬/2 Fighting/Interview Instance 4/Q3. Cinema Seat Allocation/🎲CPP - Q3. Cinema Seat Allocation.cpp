//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1386

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {

      // Helper function to check if 4 consecutive seats are free
      bool blockFree(unordered_set<int>& seats, int start) {

            // Check seats start → start+3
            for (int i = start; i < start + 4; i++) {

                  // If seat reserved → block unavailable
                  if (seats.count(i))
                        return false;
            }

            // All seats free
            return true;
      }

public:
      int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

            // Map row → reserved seats
            unordered_map<int, unordered_set<int>> rows;

            // Fill reserved seats
            for (auto &s : reservedSeats)
                  rows[s[0]].insert(s[1]);

            // Rows without reservations allow 2 families
            int res = (n - rows.size()) * 2;

            // Process only rows having reserved seats
            for (auto &p : rows) {

                  auto &seats = p.second;

                  // Check possible blocks
                  bool left = blockFree(seats, 2);   // seats 2-5
                  bool middle = blockFree(seats, 4); // seats 4-7
                  bool right = blockFree(seats, 6);  // seats 6-9

                  if (left && right)
                        res += 2;
                  else if (left || middle || right)
                        res += 1;
            }

            return res;
      }
};