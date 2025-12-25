//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 355

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N * m + N * M + n)

class Twitter {
      constructor() {
            // Counter for tweet timestamps (decreasing for recency)
            this.count = 0;
            // Map of userId -> array of [count, tweetId] pairs for each tweet
            this.tweetMap = new Map();
            // Map userId -> Set of followee userIds
            this.followMap = new Map();
      }

      // Add a tweet for the given user with a timestamp.
      postTweet(userId, tweetId) {
            // Ensure tweet list exists for user
            if (!this.tweetMap.has(userId)) {
                  this.tweetMap.set(userId, []);
            }
            // Push tweet with count (timestamp)
            this.tweetMap.get(userId).push([this.count, tweetId]);
            this.count--; // Decrement for next tweet
      }

      // Return up to 10 most recent tweet IDs in the user's news feed.
      getNewsFeed(userId) {
            let res = [];
            let minHeap = [];

            // Make sure user follows themselves for their own tweets
            if (!this.followMap.has(userId)) {
                  this.followMap.set(userId, new Set());
            }
            this.followMap.get(userId).add(userId);

            // For each followee, add their most recent tweet to the min-heap
            for (let followeeId of this.followMap.get(userId)) {
                  if (this.tweetMap.has(followeeId)) {
                        let tweets = this.tweetMap.get(followeeId);
                        let index = tweets.length - 1; // Latest tweet
                        let [count, tid] = tweets[index];
                        // Store: [count, tweetId, followeeId, previous index]
                        minHeap.push([count, tid, followeeId, index - 1]);
                  }
            }
            // Sort the minHeap by count (to act as min-heap)
            minHeap.sort((a, b) => a[0] - b[0]);

            // Take up to 10 most recent tweets via pop-and-push
            while (minHeap.length && res.length < 10) {
                  let [count, tid, followeeId, index] = minHeap.shift();
                  res.push(tid); // Store tweetId
                  // If older tweet exists, add to heap
                  if (index >= 0) {
                        let [c, t] = this.tweetMap.get(followeeId)[index];
                        minHeap.push([c, t, followeeId, index - 1]);
                        minHeap.sort((a, b) => a[0] - b[0]);
                  }
            }
            return res;
      }

      // Add followeeId to followerId's follow list
      follow(followerId, followeeId) {
            if (!this.followMap.has(followerId)) {
                  this.followMap.set(followerId, new Set());
            }
            this.followMap.get(followerId).add(followeeId);
      }

      // Remove followeeId from followerId's follow list
      unfollow(followerId, followeeId) {
            if (this.followMap.has(followerId)) {
                  this.followMap.get(followerId).delete(followeeId);
            }
      }
}