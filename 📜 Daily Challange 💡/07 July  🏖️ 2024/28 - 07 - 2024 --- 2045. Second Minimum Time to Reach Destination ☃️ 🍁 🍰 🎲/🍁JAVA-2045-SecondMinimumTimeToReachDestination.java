//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2045

//? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = No of cities,  m = No. of edges

//? 🧺 Space complexity ➺ O(n) 👉🏻 making adjacency list, deque of cities

import java.util.*;

class Solution {
      public int secondMinimum(int n, int[][] edges, int time, int change) {
            // make adjacency list for all edges
            Map<Integer, List<Integer>> adjacency = new HashMap<>();
            for (int i = 1; i <= n; i++) {
                  adjacency.put(i, new ArrayList<>());
            }

            for (int[] edge : edges) {
                  int cityOne = edge[0];
                  int cityTwo = edge[1];
                  // append cities to their neighbors
                  adjacency.get(cityOne).add(cityTwo);
                  adjacency.get(cityTwo).add(cityOne);
            }

            // for bfs
            Deque<Integer> q = new ArrayDeque<>();
            q.add(1);
            // current time will tell us whether we are at green light or red light
            int curTime = 0;

            // isSecTime visit will ensure that we have the 2nd minimum time to reach dest
            boolean isSecTime = false;

            // this will ensure that every node is visited at most twice
            // and we store the time that have been visited before
            // and check for not to be same as before
            Map<Integer, List<Integer>> visitedTimes = new HashMap<>();

            while (!q.isEmpty()) {
                  int size = q.size();
                  for (int i = 0; i < size; i++) {
                        int city = q.poll();
                        // if we are at our dest
                        if (city == n) {
                              // check for 2nd time visit
                              if (isSecTime) {
                                    return curTime;
                              }
                              // else just set isSecTime to true
                              isSecTime = true;
                        }

                        // and if we are not at our dest then go for all neighbors of our city
                        for (int nei : adjacency.get(city)) {
                              List<Integer> neiTime = visitedTimes.getOrDefault(nei, new ArrayList<>());
                              // we are only allowed to add in our queue if this is at most 2nd time
                              // and previous visiting time is not same as current visiting time
                              if (neiTime.size() == 0 || (neiTime.size() == 1 && !neiTime.get(0).equals(curTime))) {
                                    // then append in our queue
                                    q.add(nei);
                                    // and add this time to our visited times
                                    neiTime.add(curTime);
                                    visitedTimes.put(nei, neiTime);
                              }
                        }
                  }

                  // for every level we increment our current time
                  // catch is here we can't just update the current time by time
                  // see for whether it is a green light or red light
                  if ((curTime / change) % 2 == 1) {
                        // if it is odd then we will wait for signal to be green
                        curTime += change - (curTime % change);
                  }

                  // if the signal is already green then update current time by given time
                  curTime += time;
            }

            return -1; // if no second minimum time is found
      }
}
