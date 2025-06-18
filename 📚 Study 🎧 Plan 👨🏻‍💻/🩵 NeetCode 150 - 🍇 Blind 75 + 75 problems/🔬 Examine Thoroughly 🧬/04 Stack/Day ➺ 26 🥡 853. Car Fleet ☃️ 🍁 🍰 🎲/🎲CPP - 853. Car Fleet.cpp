//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 853

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int carFleet(int target, vector<int>& position, vector<int>& speed) {
            int n = position.size();

            // Create a vector of pairs (position, speed)
            vector<pair<int, int>> pairs;
            for (int i = 0; i < n; i++) {
                  pairs.push_back({position[i], speed[i]});
            }

            // Sort pairs in descending order of position
            sort(pairs.rbegin(), pairs.rend());

            vector<double> stack; // Stack to store time to reach target

            // Traverse the cars from closest to farthest from the target
            for (auto& [pos, spd] : pairs) {
                  // Time = Distance / Speed
                  double time = (double)(target - pos) / spd;
                  stack.push_back(time); // Push time to the stack

                  // If car behind catches the fleet in front, merge them
                  int sz = stack.size();
                  if (sz >= 2 && stack[sz - 1] <= stack[sz - 2]) {
                        stack.pop_back(); // Pop current car's time (they form one fleet)
                  }
            }

            // Number of elements in stack = number of fleets
            return stack.size();
      }
};
