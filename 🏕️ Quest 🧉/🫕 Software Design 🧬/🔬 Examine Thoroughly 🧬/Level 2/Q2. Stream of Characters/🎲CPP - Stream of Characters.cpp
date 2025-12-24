//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L2 Q2

//? ⌚ Time complexity ➺ O(min(maxLen,len(w))) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(∑len(w))

class StreamChecker {
private:
      struct TrieNode {
            TrieNode* children[26];
            bool isEnd;
            TrieNode() {
                  for (int i = 0; i < 26; ++i) children[i] = nullptr;
                  isEnd = false;
            }
      };

      TrieNode* root;
      string stream;
      int maxLen;

public:
      StreamChecker(vector<string>& words) {
            root = new TrieNode();
            maxLen = 0;
            stream = "";

            // Insert each word in reverse order into the trie
            for (string& word : words) {
                  maxLen = max(maxLen, (int)word.size());
                  TrieNode* node = root;
                  // Insert from last char to first (reverse)
                  for (int i = word.size() - 1; i >= 0; i--) {
                        int idx = word[i] - 'a';
                        if (node->children[idx] == nullptr) {
                              node->children[idx] = new TrieNode();
                        }
                        node = node->children[idx];
                  }
                  node->isEnd = true;
            }
      }

      bool query(char letter) {
            // Append new letter to the stream
            stream += letter;

            // We only need to check the last maxLen characters
            int start = max(0, (int)stream.size() - maxLen);
            TrieNode* node = root;

            // Traverse from the most recent character backwards
            for (int i = stream.size() - 1; i >= start; i--) {
                  int idx = stream[i] - 'a';
                  if (node->children[idx] == nullptr) {
                        return false;
                  }
                  node = node->children[idx];
                  // If we hit the end of a word, this suffix matches
                  if (node->isEnd) {
                        return true;
                  }
            }

            return false;
      }
};
