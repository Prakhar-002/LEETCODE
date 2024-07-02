//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 350

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(n) 👉 using HashMap

#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
      vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            // creating map of first array for num : freq
            unordered_map<int, int> mp;

            for (auto &&n : nums1){
                  // storing freq of nums
                  mp[n]++;
            }

            vector<int> res;

            // traverse 2nd array
            for (auto &&n : nums2){
                  // if n contain in map
                  if (mp[n] > 0){
                        // add it to oue array res
                        res.push_back(n);
                        // dec the freq of n from map
                        mp[n]--;
                  } 
            }

            return res;
      }
};
