//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2070

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(items)

//? 🧺 Space complexity ➺ O(n + m) 👉🏻 m = len(queries) 

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
            // Step 1: Sort items based on price (first element in each sublist) in ascending order
            sort(items.begin(), items.end());

            // Step 2: Create a sorted list of queries, each element is a pair (query, index)
            //         where 'index' keeps track of the original position of each query
            vector<pair<int, int>> sortedQueries;
            for (int i = 0; i < queries.size(); ++i) {
                  sortedQueries.push_back({queries[i], i});
            }
            sort(sortedQueries.begin(), sortedQueries.end());

            // Step 3: Initialize an answer vector with zeros, sized to the length of queries
            vector<int> answer(queries.size(), 0);

            // Initialize 'max_bea' to track the maximum beauty encountered so far
            int max_bea = 0;
            // 'j' serves as the pointer to iterate over items
            int j = 0;

            // Step 4: Iterate through each query in the sorted queries list
            for (const auto& [q, i] : sortedQueries) {
                  // Update max_bea by iterating through items whose price <= current query value
                  while (j < items.size() && items[j][0] <= q) {
                        // Update max_bea to the max beauty seen so far
                        max_bea = max(max_bea, items[j][1]);
                        // Move to the next item
                        ++j;
                  }

                  // Step 5: Assign the maximum beauty value found for the query at the original index
                  answer[i] = max_bea;
            }

            // Step 6: Return the vector of answers corresponding to each query
            return answer;
      }
};

