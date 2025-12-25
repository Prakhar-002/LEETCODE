//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q1

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <unordered_map>
#include <random>
using namespace std;

class RandomizedSet {
private:
      // numMap: maps value to its index in numList
      unordered_map<int, int> numMap;
      // numList: stores all values in a vector for O(1) random access
      vector<int> numList;
      // Random engine and distribution for getRandom
      mt19937 gen;
      uniform_int_distribution<int> dis;

public:
      RandomizedSet() : gen(random_device{}()), dis(0, 0) {
            // Constructor
      }

      bool insert(int val) {
            // Check if val is already present
            bool res = numMap.find(val) == numMap.end();
            if (res) {
                  // Add val to the map with its index (current end of vector)
                  numMap[val] = numList.size();
                  // Append val to the vector
                  numList.push_back(val);
                  // Update distribution range
                  dis = uniform_int_distribution<int>(0, numList.size() - 1);
            }
            return res;
      }

      bool remove(int val) {
            // Check if val is present
            bool res = numMap.find(val) != numMap.end();
            if (res) {
                  // Get index of val in the vector
                  int idx = numMap[val];
                  // Get the last value in the vector
                  int lastVal = numList.back();
                  // Move lastVal to the position of val
                  numList[idx] = lastVal;
                  // Remove the last element (val is now overwritten)
                  numList.pop_back();
                  // Update the map: lastVal is now at index idx
                  numMap[lastVal] = idx;
                  // Remove val from the map
                  numMap.erase(val);
                  // Update distribution range
                  dis = uniform_int_distribution<int>(0, numList.size() - 1);
            }
            return res;
      }

      int getRandom() {
            // Return a random element from the vector
            return numList[dis(gen)];
      }
};
