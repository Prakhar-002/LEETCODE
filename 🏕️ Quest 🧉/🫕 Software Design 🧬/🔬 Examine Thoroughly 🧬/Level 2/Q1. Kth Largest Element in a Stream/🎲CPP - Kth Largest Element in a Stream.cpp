
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 703

//? ⌚ Time complexity ➺ O(n Log k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(K) 👉🏻 Min-Heap Size

#include <queue>
#include <vector>
using namespace std;

// The purpose of this class is to find 
// and maintain the k-th largest element in a stream of numbers
class KthLargest {
private:
      // which will store the k largest elements in increasing order
      priority_queue<int, vector<int>, greater<int>> minHeap;
      int k;

public:
      // `k`: An integer that indicates the k-th largest elem to maintain
      // `nums`: A vector from which the k-th largest elem needs to be maintained
      KthLargest(int k, vector<int>& nums) : k(k) {
            //  A range-based `for` loop is used to iterate through each number in the `nums` vector,
            // and each number is added to the heap using the `add` method
            for (int num : nums) {
                  add(num);
            }
      }

      // `val`: An integer value that is to be added
      int add(int val) {
            if (minHeap.size() < k) {
                  // adds the new value `val` to the min-heap if size is less than k
                  minHeap.push(val);
            } else if (val > minHeap.top()) {
                  // if val is greater than the smallest element and heap size is k,
                  minHeap.pop();
                  // remove the smallest and add val
                  minHeap.push(val);
            }

            // Returns the smallest element in the heap, which is the k-th largest overall
            return minHeap.top();
      }
};
