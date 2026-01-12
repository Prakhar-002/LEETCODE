//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class RangeFreqQuery {
public:
      RangeFreqQuery(vector<int>& arr) {
            /**
             * Preprocess: value → sorted list of indices
             * Time: O(N), Space: O(N)
             */
            for (int i = 0; i < arr.size(); i++) {
                  pos[arr[i]].push_back(i);
            }
      }
      
      int query(int left, int right, int value) {
            /**
             * Count occurrences of value in arr[left:right+1]
             * Time: O(log N) via binary search
             */
            auto it = pos.find(value);
            if (it == pos.end()) {
                  return 0;
            }

            // lower_bound: first iterator >= left
            auto start = lower_bound(it->second.begin(), it->second.end(), left);
            // lower_bound: first iterator >= right+1 (exclusive)
            auto end = lower_bound(it->second.begin(), it->second.end(), right + 1);
            return end - start;
      }

private:
      unordered_map<int, vector<int>> pos;
};
