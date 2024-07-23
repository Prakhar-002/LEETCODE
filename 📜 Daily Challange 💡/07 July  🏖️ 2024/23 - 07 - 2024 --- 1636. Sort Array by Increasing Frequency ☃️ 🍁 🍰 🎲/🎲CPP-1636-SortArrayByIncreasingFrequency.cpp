//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1636

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 using freq count HashMap 

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<int> frequencySort(vector<int>& nums) {
            // count the freq of every num in nums
            unordered_map<int, int> freqCount;
            for (int num : nums) {
                  freqCount[num]++;
            }

            // sort based on the freq of num 
            // if freq is same then sort by dec order 
            sort(nums.begin(), nums.end(), [&freqCount](int a, int b) {
                  if (freqCount[a] == freqCount[b]) {
                        return a > b;
                  }
                  return freqCount[a] < freqCount[b];
            });

            return nums;
      }
};