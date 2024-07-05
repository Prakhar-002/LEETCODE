//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2058

//? ⌚ Time complexity -> O(n) 👉 Total nodes

//? 🧺 Space complexity -> O(1)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

// Function to check if a node is a critical point
bool isCritical(struct ListNode *prev, struct ListNode *cur, struct ListNode *nxt){
      return (
            (prev->val > cur->val && cur->val < nxt->val) 
            ||
            (prev->val < cur->val && cur->val > nxt->val));
}

// Function to find the minimum and maximum distances between critical points
int *nodesBetweenCriticalPoints(struct ListNode *head, int *returnSize){
      // Initialize three pointers for traversal
      struct ListNode *prev = head;
      struct ListNode *cur = head->next;
      struct ListNode *nxt = cur->next;

      // Initialize min and max distances
      int minDist = INT_MAX;
      int maxDist = -1;

      int prevCritPoint = 0;
      int firstCritPoint = 0;
      int curCritIndex = 1;

      // Traverse the linked list
      while (nxt != NULL){
            // Check if current node is a critical point
            if (isCritical(prev, cur, nxt)){
                  // If we have found a critical point before
                  if (firstCritPoint != 0){
                        // Update max distance
                        maxDist = curCritIndex - firstCritPoint;
                        // Update min distance
                        minDist = fmin(minDist, curCritIndex - prevCritPoint);
                  }
                  else{
                        // If it's the first critical point, update firstCritPoint
                        firstCritPoint = curCritIndex;
                  }

                  // Update previous critical point
                  prevCritPoint = curCritIndex;
            }

            // Move pointers forward
            prev = cur;
            cur = nxt;
            nxt = nxt->next;
            curCritIndex++;
      }

      // If no critical points found, set minDist to -1
      if (minDist == INT_MAX){
            minDist = -1;
      }

      // Allocate memory for result array
      int *result = (int *)malloc(2 * sizeof(int));
      result[0] = minDist;
      result[1] = maxDist;

      // Set return size
      *returnSize = 2;
      return result;
}