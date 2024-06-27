//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1438 

#include <deque>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

class Solution{
public:
      int longestSubarray(vector<int> &nums, int limit){
            // Increasing deq which will max at first position of an subArray
            // Decreasing deq which will min at first position of an subArray
            deque<int> incDeq, decDeq;
            // Taking two pointer
            int left = 0, subArray = 0, right;
            for (right = 0; right < nums.size(); right++){
                  // cause we have to make this deque increasing so we'll remove if last elem is
                  // greater than upcoming elem
                  // cause this deq will store max at first position
                  while (!incDeq.empty() && nums[right] > incDeq.back()){
                        incDeq.pop_back();
                  }
                  // cause we have to make this deque decreasing so we'll remove if last elem is
                  // less than upcoming elem
                  // cause this deq will store min at first position
                  while (!decDeq.empty() && nums[right] < decDeq.back()){
                        decDeq.pop_back();
                  }
                  // simply add the coming elem in both deq in last of deq
                  incDeq.push_back(nums[right]);
                  decDeq.push_back(nums[right]);
                  // If condition is not true then we'll shift out left pointers
                  while (incDeq.front() - decDeq.front() > limit){
                        // if we update our left pointer we have to remove left pointer elem from both deque
                        // if left pointer value is present in decDeq remove it
                        if (incDeq.front() == nums[left]){
                              incDeq.pop_front();
                        }
                        // if left pointer value is present in incDeq remove it
                        if (decDeq.front() == nums[left]){
                              decDeq.pop_front();
                        }
                        // finally update our left pointer
                        left++;
                  }
                  subArray = max(subArray, right - left + 1);
            }
            // return the right pointer - left pointer
            return subArray;
      }
};