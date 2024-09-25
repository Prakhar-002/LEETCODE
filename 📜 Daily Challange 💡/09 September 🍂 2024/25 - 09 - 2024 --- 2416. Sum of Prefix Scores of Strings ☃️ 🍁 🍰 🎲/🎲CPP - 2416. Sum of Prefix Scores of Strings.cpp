//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2416

//? ⌚ Time complexity ➺ O(n * l) 👉🏻  n = len(words) l = avg len(each word)

//? 🧺 Space complexity ➺ O(n * l) 

#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

struct Node {
      // `umc` stores the current character's frequency and a pointer to the next node (for each child character)
      unordered_map<char, pair<int, Node*>> umc;
      // `is_end` is a boolean flag to indicate if the node represents the end of a word
      bool is_end = false;
};

class Trie {
private:
      // `root` is the pointer to the root node of the Trie
      Node *root;

public:
      // Constructor initializes the Trie by allocating memory for the root node
      Trie() {
            root = new Node();
      }

      // Function to insert a word into the Trie
      void insert(string s) {
            Node *cur = root;  // Start from the root node
            // Iterate over each character of the word
            for (int i = 0; i < s.size(); i++) {
                  // If the character is not present in the current node's unordered_map `umc`, create a new node
                  if (cur->umc.find(s[i]) == cur->umc.end()) {
                        cur->umc[s[i]].second = new Node();
                  }

                  // Increment the frequency count for the current character
                  cur->umc[s[i]].first++;
                  // Move to the next node in the Trie
                  cur = cur->umc[s[i]].second;
            }

            // Mark the last node as the end of the word
            cur->is_end = true;
            return;
      }

      // Function to check and return the prefix count for a given word
      int check_prefix_count(string s) {
            Node *cur = root;  // Start from the root node
            int count = 0;     // Initialize prefix count to 0

            // Iterate over each character of the word
            for (int i = 0; i < s.size(); i++) {
                  // If the character is not found in the current node, break the loop
                  if (cur->umc.find(s[i]) == cur->umc.end()) {
                        break;
                  }

                  // Add the frequency count of the current character to `count`
                  count += cur->umc[s[i]].first;
                  // Move to the next node in the Trie
                  cur = cur->umc[s[i]].second;
            }

            // Return the total count for the prefix
            return count;
      }
};

class Solution {
public:
      // Function to return a vector of prefix scores for each word in the input vector
      vector<int> sumPrefixScores(vector<string>& words) {
            Trie t;  // Instantiate the Trie

            // Insert each word from the `words` vector into the Trie
            for (auto &word : words) {
                  t.insert(word);
            }

            vector<int> answer;  // Vector to store the result (prefix scores for each word)
            // For each word in the input `words` vector
            for (auto &word : words) {
                  // Compute the prefix score by calling `check_prefix_count` 
                  // and store it in the `answer` vector
                  int tmp = t.check_prefix_count(word);
                  answer.push_back(tmp);
            }

            // Return the final result containing prefix scores
            return answer;
      }
};
