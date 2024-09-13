//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1310

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(arr) q = Len(queries)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
            // `prefix` is a vector initialized with length `arr.size() + 1`
            vector<int> prefix(arr.size() + 1, 0);

            // calculates the cumulative XOR up to that element and stores
            for (int i = 0; i < arr.size(); i++) {
                  // XOR of the previous element in `prefix` current element `arr[i]`
                  prefix[i + 1] = prefix[i] ^ arr[i];
            }

            // For `arr = [1, 3, 4, 8]` : `prefix = [0, 1, 2, 6, 14]`

            // initialized to store the results of each query
            vector<int> answer(queries.size());

            // iterates each query ( vector of two integers `[left, right]`) in `queries`
            for (int i = 0; i < queries.size(); i++) {
                  // To get the XOR of elements from index `left` to `right`
                  // Use `prefix[right + 1] ^ prefix[left]`
                  int left = queries[i][0];
                  int right = queries[i][1];
                  // `prefix[right + 1]` => XOR of all elements from start up to `right`
                  // `prefix[left]` => XOR of all elements from the start up to `left - 1`
                  // XORing these two values cancels out the elements before `left`
                  answer[i] = prefix[right + 1] ^ prefix[left];
            }

            // returns the `answer` vector containing the results for all queries
            return answer;
      }
};


