//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2058

//? ⌚ Time complexity -> O(n) 👉 Total nodes

//? 🧺 Space complexity -> O(1)

#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution{
private:
      // Check if the current node is a critical point
      bool isCritical(ListNode *prev, ListNode *cur, ListNode *nxt){
            return (
                  (prev->val > cur->val && cur->val < nxt->val) 
                              ||
                  (prev->val < cur->val && cur->val > nxt->val));
      }

public:
      // Time complexity: O(n) where n is the number of nodes
      // Space complexity: O(1)
      vector<int> nodesBetweenCriticalPoints(ListNode *head){
            // We'll use 3 pointers
            // [1,  2,  3, ...n]
            //  ^   ^   ^
            // prev cur nxt
            ListNode *prev = head;
            ListNode *cur = head->next;
            ListNode *nxt = cur->next;

            // Initialize min and max distances
            int minDist = INT_MAX;
            int maxDist = -1;

            int prevCritPoint = 0;
            int firstCritPoint = 0;
            int curCritIndex = 1;

            while (nxt != nullptr){
                  // If we have a critical point
                  if (isCritical(prev, cur, nxt)){
                        // Checking if we had a critical point before
                        if (firstCritPoint != 0){
                              // Max dist will be current critical - first critical
                              maxDist = curCritIndex - firstCritPoint;
                              // MinDist will be min of itself or current critical - previous critical
                              minDist = min(minDist, curCritIndex - prevCritPoint);
                        }
                        else{
                              // If it's the first occurring critical point, update it
                              firstCritPoint = curCritIndex;
                        }

                        // Every time we found one critical point, our previous critical will update
                        prevCritPoint = curCritIndex;
                  }

                  // Update all pointers
                  prev = cur;
                  cur = nxt;
                  nxt = nxt->next;
                  curCritIndex++;
            }

            // If minDist is not changed yet, assign it with -1
            if (minDist == INT_MAX){
                  minDist = -1;
            }

            return {minDist, maxDist};
      }
};