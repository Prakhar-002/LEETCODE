//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 349

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(n) 👉 using HashSet

#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
      vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            vector<int> res;
            unordered_set<int> firstSet;

            for (auto && n : nums1){
                  firstSet.insert(n);
            }

            // traversing second array
            for (int n : nums2) {
                  //if elem of 2nd array in the first array set
                  if (firstSet.count(n) > 0) {
                  // add to our res 
                  res.push_back(n);
                  // and delete the element from set cause we don't want repeat elem
                  firstSet.erase(n);
                  }
            }

            return res;
      }
};