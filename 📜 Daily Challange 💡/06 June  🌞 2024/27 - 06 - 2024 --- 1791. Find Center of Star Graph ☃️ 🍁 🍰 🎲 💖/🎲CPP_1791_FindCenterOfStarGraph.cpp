//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1791 

//? ⌚ Time complexity -> O(1) 

//? 🧺 Space complexity -> O(1) 

#include <vector>
using namespace std;

class Solution {
public:
      int findCenter(vector<vector<int>>& edges) {
            // We have n edge of star with two node only 
            // so concept is take an any two edge and find the common element of them

            // First node of our first edge
            int starFirstNode = edges[0][0];
            // second node of our first edge
            int starSecondNode = edges[0][1];

            // first Node of first edge will be =>

            // either equal to first node of any second edge (let say 2nd edge)
            if (starFirstNode == edges[1][0]) {
                  return starFirstNode;
            } 

            // or equal to second node of any second edge (let say 2nd edge)
            else if (starFirstNode == edges[1][1]) {
                  return starFirstNode;
            } 

            // And if first node is not common is both edge second Node will common for sure
            else {
                  return starSecondNode;
            }
      }
};