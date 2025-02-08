//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2349

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(unique Index)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_map>
#include <set>

using namespace std;

class NumberContainers {
private:
      unordered_map<int, set<int>> num_idx_set; // Maps number to sorted indices
      unordered_map<int, int> idx_num; // Maps index to number

public:
      // Constructor
      NumberContainers() {}

      /*
      * Updates the mapping of an index to a new number.
      * If the index was previously associated with a different number,
      * it removes the index from the old number's set.
      */
      void change(int index, int number) {
            // Check if the index already has a number assigned
            if (idx_num.find(index) != idx_num.end()) {
                  int prevNum = idx_num[index]; // Get the previous number
                  num_idx_set[prevNum].erase(index); // Remove index from previous number's set

                  // If no more indices exist for previous number, remove the entry
                  if (num_idx_set[prevNum].empty()) {
                        num_idx_set.erase(prevNum);
                  }
            }

            // Assign the new number to the index
            idx_num[index] = number;

            // Add the index to the set corresponding to the new number
            num_idx_set[number].insert(index);
      }

      /*
      * Finds the smallest index associated with the given number.
      * If no index is found, returns -1.
      */
      int find(int number) {
            // Check if the number exists in the mapping and has associated indices
            if (num_idx_set.find(number) == num_idx_set.end() || num_idx_set[number].empty()) {
                  return -1;
            }
            return *num_idx_set[number].begin(); // O(1) operation to get the smallest index
      }
};
