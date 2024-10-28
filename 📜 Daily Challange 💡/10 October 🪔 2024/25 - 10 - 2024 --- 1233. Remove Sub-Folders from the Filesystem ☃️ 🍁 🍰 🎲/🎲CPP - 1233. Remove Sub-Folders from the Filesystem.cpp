//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1233

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(folder)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<string> removeSubfolders(vector<string>& folder) {
            // Sort the folders lexicographically 
            // so parent folders come before their subfolders
            sort(folder.begin(), folder.end());

            // Initialize result vector with the first folder
            vector<string> ans;
            ans.push_back(folder[0]);

            // Iterate through remaining folders starting from index 1
            for (int i = 1; i < folder.size(); i++) {
                  // Get the last added folder path and add a trailing slash
                  string lastFolder = ans.back() + "/";

                  // Check if current folder starts with lastFolder
                  // If it doesn't start with lastFolder, then it's not a subfolder
                  if (folder[i].compare(0, lastFolder.length(), lastFolder) != 0) {
                        ans.push_back(folder[i]);
                  }
            }

            return ans;
      }
};

