//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2045

//? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = No of cities,  m = No. of edges

//? 🧺 Space complexity ➺ O(n) 👉🏻 making adjacency list, deque of cities

#include <vector>
#include <deque>
#include <unordered_map>
#include <list>

using namespace std;

class Solution {
public:
      int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
            // make adjacency list for all edges
            unordered_map<int, list<int>> adjacency;

            for (const auto& edge : edges) {
                  int cityOne = edge[0], cityTwo = edge[1];
                  // append cities to their neighbors
                  adjacency[cityOne].push_back(cityTwo);
                  adjacency[cityTwo].push_back(cityOne);
            }

            // for bfs
            deque<int> q = {1};
            // current time will tell us whether we are at green light or red light
            int curTime = 0;

            // isSecTime visit will ensure that we have the 2nd minimum time to reach dest
            bool isSecTime = false;

            // this will ensure that every node is visited at most twice
            // and we store the time that have been visited before
            // and check for not to be same as before
            unordered_map<int, vector<int>> visitedTimes;  // node -> [visit]

            while (!q.empty()) {
                  int qSize = q.size();
                  for (int i = 0; i < qSize; ++i) {
                        int city = q.front();
                        q.pop_front();
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
                        for (int nei : adjacency[city]) {
                              auto& neiTime = visitedTimes[nei];
                              // we are only allowed to add in our queue if this is at most 2nd time
                              // and previous visiting time is not same as current visiting time
                              if (neiTime.empty() || (neiTime.size() == 1 && neiTime[0] != curTime)) {
                                    // then append in our queue
                                    q.push_back(nei);
                                    // and add this time to our visited times
                                    neiTime.push_back(curTime);
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

            return -1; // in case there's no valid second minimum time
      }
};
