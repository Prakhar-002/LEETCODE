//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2657

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
      public:
            vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
                  // Use long long to avoid overflow issues for bit shifting
                  long long seenBits = 0;

                  // Variable to count the number of common elements encountered so far
                  int commonCount = 0;

                  // Vector to store the prefix common counts
                  vector<int> prefixCommon;

                  // Iterate through the arrays A and B simultaneously
                  for (int i = 0; i < A.size(); i++) {
                        // Check if the current element in A has already been seen using bits
                        if (seenBits & (1LL << (A[i] - 1))) {
                              commonCount++;
                        }

                        // Set the corresponding bit for the element in A
                        seenBits |= (1LL << (A[i] - 1));

                        // Check if the current element in B has already been seen using bits
                        if (seenBits & (1LL << (B[i] - 1))) {
                              commonCount++;
                        }

                        // Set the corresponding bit for the element in B
                        seenBits |= (1LL << (B[i] - 1));

                        // Append the current count of common elements to the prefixCommon vector
                        prefixCommon.push_back(commonCount);
                  }

                  // Return the final vector of prefix common counts
                  return prefixCommon;
            }
};


//!------------------------------------------------------------------------------------- 

//* Using HashSet

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
            // Set to keep track of elements that have been seen
            unordered_set<int> seenElements;

            // Variable to count the number of common elements encountered so far
            int commonCount = 0;

            // Vector to store the prefix common counts
            vector<int> prefixCommon;

            // Iterate through the arrays A and B simultaneously
            for (int i = 0; i < A.size(); i++) {
                  // If the current element of A has already been seen, it is a common element
                  if (seenElements.find(A[i]) != seenElements.end()) {
                        commonCount++;
                  }

                  // Add the current element of A to the seen set
                  seenElements.insert(A[i]);

                  // If the current element of B has already been seen, it is a common element
                  if (seenElements.find(B[i]) != seenElements.end()) {
                        commonCount++;
                  }

                  // Add the current element of B to the seen set
                  seenElements.insert(B[i]);

                  // Append the current count of common elements to the prefixCommon vector
                  prefixCommon.push_back(commonCount);
            }

            // Return the final vector of prefix common counts
            return prefixCommon;
      }
};

//!------------------------------------------------------------------------------------- 

//* Using freq Array

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
            int n = A.size();

            // Frequency array to track occurrences of elements
            vector<int> freq(n + 1, 0);

            // Vector to store the count of prefix common elements
            vector<int> prefixCommon;

            // Counter for common elements seen so far
            int permutations = 0;

            // Iterate through both arrays A and B
            for (int i = 0; i < n; i++) {
                  // Increment frequency for the current element in A
                  freq[A[i]]++;
                  if (freq[A[i]] == 2) {
                        permutations++;
                  }

                  // Increment frequency for the current element in B
                  freq[B[i]]++;
                  if (freq[B[i]] == 2) {
                        permutations++;
                  }

                  // Add current count to the prefixCommon vector
                  prefixCommon.push_back(permutations);
            }

            return prefixCommon;
      }
};
