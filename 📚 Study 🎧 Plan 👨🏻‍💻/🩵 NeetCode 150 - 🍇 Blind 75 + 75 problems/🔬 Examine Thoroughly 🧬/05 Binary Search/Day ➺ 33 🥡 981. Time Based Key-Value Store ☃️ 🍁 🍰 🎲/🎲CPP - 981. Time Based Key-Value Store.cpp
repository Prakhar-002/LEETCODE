//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 981

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class TimeMap {
private:
      // Structure to store value and timestamp
      struct Pair {
            string val;
            int time;
      };

      // Hashmap to store key -> list of (value, timestamp)
      unordered_map<string, vector<Pair>> store;

public:
      TimeMap() {
            // Constructor initializes empty map
      }

      void set(string key, string value, int timestamp) {
            // Append value and timestamp for the key
            store[key].push_back({value, timestamp});
      }

      string get(string key, int timestamp) {
            string res = ""; // Default return value
            auto &values = store[key]; // Get the list for the key

            int l = 0, r = values.size() - 1;

            // Binary search for latest timestamp <= given timestamp
            while (l <= r) {
                  int m = (l + r) / 2;

                  if (values[m].time <= timestamp) {
                        res = values[m].val; // Candidate result
                        l = m + 1;           // Move to right half
                  } else {
                        r = m - 1;           // Move to left half
                  }
            }

            return res;
      }
};
