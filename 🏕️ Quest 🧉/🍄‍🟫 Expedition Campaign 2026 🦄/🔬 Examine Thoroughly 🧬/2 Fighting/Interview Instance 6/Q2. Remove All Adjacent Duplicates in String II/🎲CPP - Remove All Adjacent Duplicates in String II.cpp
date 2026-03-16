//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1209

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
      string removeDuplicates(string s, int k) {
            // Stack stores pairs of {character, count}
            // Initialized with sentinel value '$' to avoid empty stack checks
            stack<pair<char, int>> st;
            st.push({'$', 0});

            for (char ch : s) {
                  // If current char matches top of stack, increment its count
                  if (st.top().first == ch) {
                        st.top().second++;

                        // If count reaches k, remove the group entirely
                        if (st.top().second == k) {
                              st.pop();
                        }
                  }
                  // Otherwise push new character with count 1
                  else {
                        st.push({ch, 1});
                  }
            }

            // Reconstruct string from remaining stack pairs
            string result = "";

            // Convert stack to vector for ordered traversal (bottom to top)
            vector<pair<char, int>> temp;
            while (!st.empty()) {
                  temp.push_back(st.top());
                  st.pop();
            }

            // Traverse in reverse to maintain original order
            for (int i = temp.size() - 1; i >= 0; i--) {
                  // Skip the sentinel '$' entry at the bottom
                  if (temp[i].first == '$') continue;
                  // Repeat the character by its count
                  result += string(temp[i].second, temp[i].first);
            }

            return result;
      }
};