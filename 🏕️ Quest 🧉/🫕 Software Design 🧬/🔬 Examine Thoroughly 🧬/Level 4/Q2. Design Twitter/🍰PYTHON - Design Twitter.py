#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 355

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(N * m + N * M + n)

from collections import defaultdict
import heapq
from typing import List 

class Twitter:
      def __init__(self):
            # This counter will act as a timestamp (decreasing to preserve recent first order)
            self.count = 0

            # Mapping from userId to list of their tweets, each tweet stored as [count, tweetId]
            # The 'count' ensures we can sort tweets chronologically (most recent first)
            self.tweetMap = defaultdict(list)

            # Mapping from userId to the set of users they follow
            self.followMap = defaultdict(set)

      def postTweet(self, userId: int, tweetId: int) -> None:
            # Append the new tweet with chronological count
            self.tweetMap[userId].append([self.count, tweetId])

            # Decrement the count so newer tweets have smaller counts (higher priority in min-heap)
            self.count -= 1

      def getNewsFeed(self, userId: int) -> List[int]:
            res = []            # Result list to store up to 10 most recent tweetIds
            minHeap = []        # Min-heap to keep track of the most recent tweets

            # Ensure the user follows themselves so their own tweets appear in their feed
            self.followMap[userId].add(userId)

            # Add the most recent tweet from each followee to the heap
            for followeeId in self.followMap[userId]:
                  if followeeId in self.tweetMap:
                        index = len(self.tweetMap[followeeId]) - 1
                        count, tweetId = self.tweetMap[followeeId][index]
                        heapq.heappush(minHeap, [count, tweetId, followeeId, index - 1])

            # Extract tweets from heap until we have the 10 most recent
            while minHeap and len(res) < 10:
                  count, tweetId, followeeId, index = heapq.heappop(minHeap)
                  res.append(tweetId)

                  # If this followee has more tweets, push the previous one into the heap
                  if index >= 0:
                        count, tweetId = self.tweetMap[followeeId][index]
                        heapq.heappush(minHeap, [count, tweetId, followeeId, index - 1])
            return res

      def follow(self, followerId: int, followeeId: int) -> None:
            # Add followee to follower's follow list
            self.followMap[followerId].add(followeeId)

      def unfollow(self, followerId: int, followeeId: int) -> None:
            # Remove followee if they are currently being followed
            if followeeId in self.followMap[followerId]:
                  self.followMap[followerId].remove(followeeId)