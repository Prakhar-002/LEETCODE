//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 966

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(wordlist + queries)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
      //      For exact match lookups
      unordered_set<string> words_perfect;
      //      Lowercased word map for case-insensitive matches
      unordered_map<string, string> words_cap;
      //      Devoweled, lowercased word map for vowel-error matches
      unordered_map<string, string> words_vow;

      //      Replace vowels with '*' for flexible matching
      string devowel(const string &word) {
            string result = word;
            for (char &c : result)
                  c = isVowel(c) ? '*' : c;
            return result;
      }

      //      Check if character is a vowel
      bool isVowel(char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
      }

      //      Decide the best match for a query, applying rules in order
      string solve(const string &query) {
            //      1. Exact match
            if (words_perfect.count(query))
                  return query;

            //      2. Case-insensitive match
            string queryL = query;
            for (auto &ch : queryL)
                  ch = tolower(ch);
            if (words_cap.count(queryL))
                  return words_cap[queryL];

            //      3. Vowel-error match
            string queryLV = devowel(queryL);
            if (words_vow.count(queryLV))
                  return words_vow[queryLV];

            //      4. No match found
            return "";
      }

public:
      vector<string> spellchecker(vector<string> &wordlist, vector<string> &queries) {
            //      Initialize sets and maps for the three matching rules
            words_perfect.clear();
            words_cap.clear();
            words_vow.clear();

            for (const string &word : wordlist) {
                  words_perfect.insert(word); //      Add word for exact-matching

                  string wordlow = word;
                  for (auto &ch : wordlow)
                        ch = tolower(ch);
                  //      Store first occurrence for case-insensitive original preservation
                  if (!words_cap.count(wordlow))
                        words_cap[wordlow] = word;
                  //      Store first occurrence for vowel-error match
                  string wordlowDV = devowel(wordlow);
                  if (!words_vow.count(wordlowDV))
                        words_vow[wordlowDV] = word;
            }

            vector<string> ans;
            for (const string &query : queries)
                  ans.push_back(solve(query)); //      Solve each query using defined rules
            return ans;
      }
};
