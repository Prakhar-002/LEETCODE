//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 355

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N * m + N * M + n)

import java.util.*;

class Twitter {
      // Counter for timestamps; decremented so newer tweets have lower values.
      private int count;
      // Map each userId to a list of their tweets (each tweet: [count, tweetId]).
      private Map<Integer, List<int[]>> tweetMap;
      // Map each userId to a set of followee userIds.
      private Map<Integer, Set<Integer>> followMap;

      public Twitter() {
            count = 0;
            tweetMap = new HashMap<>();
            followMap = new HashMap<>();
      }

      // Add a tweet with its timestamp for a given user.
      public void postTweet(int userId, int tweetId) {
            tweetMap.putIfAbsent(userId, new ArrayList<>());
            tweetMap.get(userId).add(new int[] { count, tweetId });
            count--; // Decrement to ensure chronological order (recent tweets come first).
      }

      // Return up to 10 most recent tweet IDs in the user's news feed.
      public List<Integer> getNewsFeed(int userId) {
            List<Integer> res = new ArrayList<>();
            // Use a priority queue (min-heap) to extract most recent tweets by count.
            PriorityQueue<int[]> minHeap = new PriorityQueue<>((a, b) -> a[0] - b[0]);

            // Ensure the user follows themselves for their own tweets to appear.
            followMap.putIfAbsent(userId, new HashSet<>());
            followMap.get(userId).add(userId);

            // For each followee, add their most recent tweet to the heap.
            for (int followeeId : followMap.get(userId)) {
                  if (tweetMap.containsKey(followeeId)) {
                        List<int[]> tweets = tweetMap.get(followeeId);
                        int index = tweets.size() - 1; // Last (most recent) tweet
                        int[] tweet = tweets.get(index);
                        // Node: [count, tweetId, followeeId, previous tweet index]
                        minHeap.offer(new int[] { tweet[0], tweet[1], followeeId, index - 1 });
                  }
            }

            // Pop items from heap until 10 tweets are collected or heap is empty.
            while (!minHeap.isEmpty() && res.size() < 10) {
                  int[] node = minHeap.poll();
                  res.add(node[1]); // Add tweetId to the result.
                  int index = node[3]; // Previous tweet index for followee.
                  // If there are more (older) tweets, push the next one into heap.
                  if (index >= 0) {
                        int[] tweet = tweetMap.get(node[2]).get(index);
                        minHeap.offer(new int[] { tweet[0], tweet[1], node[2], index - 1 });
                  }
            }
            return res;
      }

      // Add 'followeeId' to 'followerId's set of followees.
      public void follow(int followerId, int followeeId) {
            followMap.putIfAbsent(followerId, new HashSet<>());
            followMap.get(followerId).add(followeeId);
      }

      // Remove 'followeeId' from 'followerId's set, if present.
      public void unfollow(int followerId, int followeeId) {
            if (followMap.containsKey(followerId)) {
                  followMap.get(followerId).remove(followeeId);
            }
      }
}