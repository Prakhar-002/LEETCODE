//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <random>
using namespace std;

class RandomizedCollection {
private:
      // Vector to store all values (including duplicates) for O(1) random access
      vector<int> numList;
      // Map: value → set of indices where it appears in numList
      unordered_map<int, unordered_set<int>> idx;
      // Random engine for generating random indices
      mt19937 gen;

public:
      /** Initialize your data structure here. */
      RandomizedCollection() : gen(random_device{}()) {
            // Constructor: initialize the random engine
      }

      /**
       * Inserts a value to the collection. Returns true if the collection did not
       * already contain the specified element.
       */
      bool insert(int val) {
            // Add the current index (end of vector) to the set of indices for this value
            idx[val].insert(numList.size());
            // Append the value to the vector
            numList.push_back(val);
            // Return true if this was the first occurrence of the value (set size is 1)
            return idx[val].size() == 1;
      }

      /**
       * Removes a value from the collection. Returns true if the collection contained
       * the specified element.
       */
      bool remove(int val) {
            // If val is not in the collection, return false
            if (idx.find(val) == idx.end() || idx[val].empty()) {
                  return false;
            }
            // Get any index where val appears (we remove one occurrence)
            int remove_idx = *idx[val].begin();
            // Remove this index from val’s set
            idx[val].erase(remove_idx);
            // Get the last value in the vector
            int last = numList.back();
            // Move the last value to the position of the value being removed
            numList[remove_idx] = last;
            // Update the index set for the last value:
            //   - Add the index remove_idx to last’s set
            idx[last].insert(remove_idx);
            //   - Remove the old last index (size-1) from last’s set
            idx[last].erase(numList.size() - 1);
            // Remove the last element from the vector (the value we just moved is now duplicated at the end)
            numList.pop_back();
            return true;
      }

      /** Get a random element from the collection. */
      int getRandom() {
            // Return a random element from the vector
            uniform_int_distribution<int> dis(0, numList.size() - 1);
            return numList[dis(gen)];
      }
};
