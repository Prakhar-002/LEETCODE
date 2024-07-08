//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1823

//? ⌚ Time complexity -> O(n * k) 👉 Given

//? 🧺 Space complexity -> O(n) 👉 Using a dequeue

import java.util.LinkedList;
import java.util.Queue;

class Solution {
      public int findTheWinner(int n, int k) {
            // for circle we use Queue to add at last and remove from first
            Queue<Integer> q = new LinkedList<>();

            // first add our n friends goes from 1 to n
            for (int i = 1; i <= n; i++) {
                  q.offer(i);
            }

            while (q.size() > 1) {
                  // first count up to k - 1 and add them back to queue
                  for (int i = 0; i < k - 1; i++) {
                        // we poll from front and add our friend to back
                        q.offer(q.poll());
                  }

                  // remove the Kth friend from queue
                  q.poll();
            }

            // return the winner
            return q.peek();
      }
}

// -------------------------------------------------------------

// * Better approach -> "Recursion" 💡

// ? ⌚ Time complexity -> O(n) 👉 Given

// ? 🧺 Space complexity -> O(n) 👉 Using recursion

class Solution {
      private int winner(int n, int k) {
            // base case if 1 elem is remain 0 will be It's index
            if (n == 1) {
                  return 0;
            }

            // call for n - 1 people with plus k and have a mod for circular
            return (winner(n - 1, k) + k) % n;
      }

      public int findTheWinner(int n, int k) {
            // find the index and return the our friend number
            return winner(n, k) + 1;
      }
}

// * Better approach -> "Recursion Two Line" 💡

class Solution {
      public int findTheWinner(int n, int k) {
            if (n == 1) {
                  return 1;
            } else {
                  // recursion
                  return (findTheWinner(n - 1, k) + k - 1) % n + 1;
            }
      }
}

// -------------------------------------------------------------

// * Best approach "Constant Space" 💡

// ? ⌚ Time complexity -> O(n) 👉 Given

// ? 🧺 Space complexity -> O(1)

class Solution {
      public int findTheWinner(int n, int k) {
            int winnerIdx = 0;

            for (int people = 1; people <= n; people++) {
                  winnerIdx = (winnerIdx + k) % people;
            }

            return winnerIdx + 1;
      }
}
