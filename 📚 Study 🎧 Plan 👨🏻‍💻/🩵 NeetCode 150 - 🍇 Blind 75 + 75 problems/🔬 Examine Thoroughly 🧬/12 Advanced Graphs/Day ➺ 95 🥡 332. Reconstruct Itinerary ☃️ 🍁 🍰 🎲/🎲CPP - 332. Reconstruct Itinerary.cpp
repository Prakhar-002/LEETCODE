//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 332

//? ⌚ Time complexity ➺ O(E log E) 👉🏻  E = Edges

//? 🧺 Space complexity ➺ O(E)

#include <vector>
#include <string>
#include <map>
#include <algorithm> // For sort
#include <list>      // For list (acting as a stack/deque for adjacencies)
using namespace std;

class Solution {
public:
      // Adjacency list: map airport string to a list of its destinations.
      // Using map allows ordered iteration by key (airport name).
      // Using list for destinations allows efficient `pop_back()` and `push_back()`.
      // The destinations in the list will be sorted in reverse lexicographical order
      // so `pop_back()` always gives the lexicographically smallest.
      map<string, list<string>> adj;
      // `res` will store the itinerary, built in reverse order by DFS.
      vector<string> res;

      void dfs(const string& src) {
            // While there are still outgoing edges from the current airport `src`.
            // `adj.count(src)` checks if `src` has any entries (is a source in any ticket).
            while (adj.count(src) && !adj[src].empty()) {
                  // Get the lexicographically smallest destination.
                  // Since `adj[src]` contains destinations in reverse lexical order due to
                  // how we populated it, `pop_back()` gives the smallest one.
                  string dst = adj[src].back(); // Get last element
                  adj[src].pop_back();              // Remove last element
                  // Recursively call DFS on the destination.
                  dfs(dst);
            }
            // After exhausting all outgoing edges from `src`, add `src` to the result.
            // This builds the itinerary in reverse order.
            res.push_back(src);
      }

      vector<string> findItinerary(vector<vector<string>>& tickets) {
            // ----------------------------------------------------------
            // Step 1: Build the Adjacency List (Graph Representation)
            // ----------------------------------------------------------
            // Sort tickets. `sort` by default sorts by the first element, then second, etc.
            // This gives us tickets sorted by src, then by dst.
            sort(tickets.begin(), tickets.end());

            // Populate the adjacency list.
            // To ensure `pop_back()` gives the lexicographically smallest, we need to add
            // destinations to the `list` in reverse lexicographical order.
            // Since `tickets` is sorted `A->B, A->C`, we iterate it in reverse to get `A->C` then `A->B`
            // and push_back to the list, so `B` is at the back.
            for (int i = tickets.size() - 1; i >= 0; --i) {
                  const vector<string>& ticket = tickets[i];
                  const string& src = ticket[0];
                  const string& dst = ticket[1];
                  adj[src].push_back(dst);
            }

            // ----------------------------------------------------------
            // Step 2: Implement Hierholzer's Algorithm (DFS for Eulerian Path)
            // ----------------------------------------------------------
            // (DFS function `dfs` is defined as a member function above `findItinerary`.)

            // ----------------------------------------------------------
            // Step 3: Execute DFS and Return Result
            // ----------------------------------------------------------
            // Start the DFS from 'JFK', the specified starting point.
            dfs("JFK");

            // The `res` vector contains the itinerary in reverse order.
            // Reverse it to get the correct chronological order and return.
            reverse(res.begin(), res.end());
            return res;
      }
};
