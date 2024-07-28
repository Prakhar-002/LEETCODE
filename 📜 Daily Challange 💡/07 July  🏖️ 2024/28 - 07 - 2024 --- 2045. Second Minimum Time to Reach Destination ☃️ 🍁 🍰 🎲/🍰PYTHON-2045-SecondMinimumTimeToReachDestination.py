#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2045

#? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = No of cities,  m = No. of edges

#? 🧺 Space complexity ➺ O(n) 👉🏻 making adjacency list, deque of cities

from collections import defaultdict, deque

class Solution:
      def secondMinimum(self, n: int, edges: List[List[int]], time: int, change: int) -> int:
            # make adjacency list for all edges
            adjacency = defaultdict(list)

            for cityOne, cityTwo in edges:
                  # append cities to their neighbors
                  adjacency[cityOne].append(cityTwo)
                  adjacency[cityTwo].append(cityOne)

            # for bfs
            q = deque([1])
            # current time will tell up weather we are at green light or red light
            curTime = 0

            # isSecTime visit will insure that we have the 2nd minimum time to reach dest
            isSecTime = False

            # this will insure that every node is visited at most twice 
            # and we store the time that have been visited before 
            # and check for not to be same as before
            visitedTimes = defaultdict(list) # node -> [visit]

            while q:
                  for i in range(len(q)):
                        city = q.popleft()
                        # if we are at our dest
                        if city == n:
                              # check for 2nd time visit
                              if isSecTime:
                                    return curTime
                              # else just sec out isSecTime to true
                              isSecTime = True

                        # and if we are not at our dest then go for the all neighbor of our city
                        for nei in adjacency[city]:
                              neiTime = visitedTimes[nei]
                              # we are only allow to add in our que if this is at most 2nd time
                              # and pervious visiting time is not same as current visiting time
                              if len(neiTime) == 0 or (len(neiTime) == 1 and neiTime[0] != curTime):
                                    # then append in our que
                                    q.append(nei)
                                    # and add this time to our visited times
                                    neiTime.append(curTime)

                  # for every level we inc our current time
                  # catch is here we can't just update the current time by time
                  # see for weather it is a green light or red light
                  if (curTime // change) % 2 == 1:
                        # if it is odd the  we will wait for signal to be green
                        curTime += change - (curTime % change)

                  # if the signal is all ready green then update current time by given time
                  curTime += time