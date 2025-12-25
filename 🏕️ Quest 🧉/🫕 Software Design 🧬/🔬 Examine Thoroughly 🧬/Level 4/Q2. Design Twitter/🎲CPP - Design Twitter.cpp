
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 355

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N * m + N * M + n)

#include <bits/stdc++.h>
using namespace std;

class Twitter {
private:
      // Counter for tweet timestamps (decremented for each tweet).
      int count; 
      // Map userId to a vector of their tweets, each as (count, tweetId).
      unordered_map<int, vector<pair<int, int>>> tweetMap;
      // Map userId to their set of followees.
      unordered_map<int, unordered_set<int>> followMap;

public:
      Twitter() {
            count = 0;
      }

      // Post a tweet: append the tweet (with timestamp) to the user's tweet list.
      void postTweet(int userId, int tweetId) {
            tweetMap[userId].push_back({count, tweetId});
            count--; // Decrement count so newer tweets are prioritized.
      }

      // Get the 10 most recent tweet IDs in the user's news feed.
      vector<int> getNewsFeed(int userId) {
            vector<int> res;
            // Min-heap to select tweets with most recent timestamps (smallest count).
            priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

            // Ensure user follows themselves to see their own tweets.
            followMap[userId].insert(userId);

            // For each followee, push their latest tweet onto the heap.
            for (int followeeId : followMap[userId]) {
                  if (tweetMap.find(followeeId) != tweetMap.end()) {
                        int index = tweetMap[followeeId].size() - 1;
                        auto [c, tid] = tweetMap[followeeId][index];
                        // Node: {count, tweetId, followeeId, previous tweet index}
                        minHeap.push({c, tid, followeeId, index - 1});
                  }
            }

            // Pop up to 10 tweets, always pushing the next oldest per followee.
            while (!minHeap.empty() && res.size() < 10) {
                  auto node = minHeap.top();
                  minHeap.pop();
                  res.push_back(node[1]); // Add tweetId to result.
                  int index = node[3];
                  // If more tweets remain for this followee, push the next older tweet.
                  if (index >= 0) {
                        auto [c, tid] = tweetMap[node[2]][index];
                        minHeap.push({c, tid, node[2], index - 1});
                  }
            }
            return res;
      }

      // Add 'followeeId' to the set of users 'followerId' follows.
      void follow(int followerId, int followeeId) {
            followMap[followerId].insert(followeeId);
      }

      // Remove 'followeeId' from 'followerId's set, if present.
      void unfollow(int followerId, int followeeId) {
            followMap[followerId].erase(followeeId);
      }
};
