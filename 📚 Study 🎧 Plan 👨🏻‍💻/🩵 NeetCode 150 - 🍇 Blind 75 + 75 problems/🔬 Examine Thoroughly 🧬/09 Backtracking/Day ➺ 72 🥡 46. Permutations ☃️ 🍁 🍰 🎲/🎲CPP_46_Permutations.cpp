//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 46

//? ⌚ Time complexity -> O(n! * n^2) 👉 length of nums array

//? 🧺 Space complexity -> O(n! * n) 👉 length of nums array

#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
      vector<vector<int>> permute(vector<int> &nums){
            if (nums.empty()){
                  return {{}};
            }

            // for every sequence we get
            // call for n - 1 elem except 0th elem
            vector<int> subArray(nums.begin() + 1, nums.end());

            vector<vector<int>> perms = permute(subArray);
            vector<vector<int>> res;

            for (const auto &perm : perms){
                  // go to every position of sequence and insert nums[0]
                  for (int i = 0; i <= perm.size(); i++){
                        // make a copy of our perms cause we will not use our original perm
                        vector<int> permCopy = perm;
                        // insert at every position our nums[0]
                        permCopy.insert(permCopy.begin() + i, nums[0]);
                        // append in our res
                        res.push_back(permCopy);
                  }
            }

            return res;
      }
};