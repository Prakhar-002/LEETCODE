//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1733

//? ⌚ Time complexity ➺ O(m * n)  👉🏻  n = given

//? 🧺 Space complexity ➺ O(m + n) 👉🏻  m = lang

#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
            unordered_set<int> sadUsers;  //      Users who cannot communicate

            //      Identify sad users who have friends without a common language
            for (auto& f : friendships) {
                  int u = f[0] - 1;        //      Zero-based index
                  int v = f[1] - 1;

                  unordered_set<int> langSet(languages[u].begin(), languages[u].end()); //      Languages u knows

                  bool canTalk = false;
                  for (int lang : languages[v]) {
                        if (langSet.count(lang)) {
                              canTalk = true;   //      They share a language
                              break;
                        }
                  }

                  if (!canTalk) {
                        sadUsers.insert(u);
                        sadUsers.insert(v);
                  }
            }

            unordered_map<int, int> languageCount;  //      Language counts among sad users
            int mostKnownLang = 0;

            //      Count languages among sad users
            for (int user : sadUsers) {
                  for (int lang : languages[user]) {
                        languageCount[lang]++;
                        mostKnownLang = max(mostKnownLang, languageCount[lang]);
                  }
            }

            //      Minimum number of teachings needed
            return sadUsers.size() - mostKnownLang;
      }
};
