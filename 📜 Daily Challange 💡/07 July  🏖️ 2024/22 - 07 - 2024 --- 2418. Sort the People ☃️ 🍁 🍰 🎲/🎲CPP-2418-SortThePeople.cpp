//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2418

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 people heights array 

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
            // first map height with their name
            unordered_map<int, string> heightNameMap;

            for (size_t i = 0; i < heights.size(); i++) {
                  // map height : name
                  heightNameMap[heights[i]] = names[i];
            }

            // sorted people height
            sort(heights.begin(), heights.end());

            vector<string> peopleHeights(heights.size());
            int peopleIdx = 0;

            // traverse in reverse order with sorted height
            for (int i = heights.size() - 1; i >= 0; i--) {
                  // append the corresponding name assigned with height
                  peopleHeights[peopleIdx++] = heightNameMap[heights[i]];
            }

            return peopleHeights;
      }
};