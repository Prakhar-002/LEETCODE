//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3321

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

class Helper {
public:
      // Constructor initializes the helper with parameter x (number of top elements)
      Helper(int x) {
            this->x = x;            // Number of largest pairs to consider
            this->result = 0;       // Running total of the sum of top x pairs
      }

      // Insert a number into the sliding window
      void insert(int num) {
            // If the number already exists, remove its previous occurrence pair
            if (occ[num]) {
                  internalRemove({occ[num], num});
            }
            // Increase occurrence count
            ++occ[num];
            // Insert the new (occurrence, number) pair
            internalInsert({occ[num], num});
      }

      // Remove a number from the sliding window
      void remove(int num) {
            // Remove the current (occurrence, number) pair
            internalRemove({occ[num], num});
            // Decrease occurrence count
            --occ[num];
            // If the number still exists, reinsert with updated occurrence
            if (occ[num]) {
                  internalInsert({occ[num], num});
            }
      }

      // Get the current sum of top x (occurrence * number) pairs
      long long get() {
            return result;
      }

private:
      int x;  // Number of top elements to keep
      long long result;  // Sum of top x pairs
      set<pair<int, int>> large, small; // Sets to maintain largest and remaining pairs
      unordered_map<int, int> occ; // Map to track occurrence counts

      // Helper for inserting a pair into sets
      void internalInsert(const pair<int, int>& p) {
            // If we haven't filled the large set or new pair is larger than smallest in large
            if ((int)large.size() < x || p > *large.begin()) {
                  // Add the pair to the total
                  result += static_cast<long long>(p.first) * p.second;
                  large.insert(p);
                  // If large exceeds size x, move smallest to small
                  if ((int)large.size() > x) {
                        auto transfer = *large.begin();
                        result -= static_cast<long long>(transfer.first) * transfer.second;
                        large.erase(transfer);
                        small.insert(transfer);
                  }
            } else {
                  // Otherwise, insert into small
                  small.insert(p);
            }
      }

      // Helper for removing a pair from sets
      void internalRemove(const pair<int, int>& p) {
            // If pair belongs to large set
            if (p >= *large.begin()) {
                  // Remove its contribution
                  result -= static_cast<long long>(p.first) * p.second;
                  large.erase(p);
                  // If small set is not empty, move largest from small to large
                  if (!small.empty()) {
                        auto transfer = *small.rbegin();
                        result += static_cast<long long>(transfer.first) * transfer.second;
                        small.erase(transfer);
                        large.insert(transfer);
                  }
            } else {
                  // Remove from small set
                  small.erase(p);
            }
      }
};

class Solution {
public:
      // Main function to compute results for each sliding window of size k
      vector<long long> findXSum(const vector<int>& nums, int k, int x) {
            Helper helper(x); // Instantiate helper with parameter x
            vector<long long> ans;

            for (int i = 0; i < (int)nums.size(); ++i) {
                  helper.insert(nums[i]);
                  // Remove oldest element once window exceeds size k
                  if (i >= k) {
                        helper.remove(nums[i - k]);
                  }
                  // Record the sum once the window hits size k
                  if (i >= k - 1) {
                        ans.push_back(helper.get());
                  }
            }
            return ans;
      }
};
