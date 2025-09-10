//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2327

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int peopleAwareOfSecret(int n, int delay, int forget) {
            //      Double-ended queues store (day, number of people)
            deque<pair<int, int>> know, share;

            know.emplace_back(1, 1);        //      On day 1, one person knows the secret

            int know_cnt = 1;               //      Number who know but cannot share yet
            int share_cnt = 0;              //      Number actively sharing the secret

            //      Simulate days from 2 to n
            for (int i = 2; i <= n; ++i) {
                  //      Move people from 'know' to 'share' after 'delay' days
                  if (!know.empty() && know[0].first == i - delay) {
                        know_cnt = (know_cnt - know[0].second + mod) % mod;          //      Remove from 'know' pool
                        share_cnt = (share_cnt + know[0].second) % mod;              //      Add to sharing pool
                        share.push_back(know[0]);                                   //      Track their sharing day
                        know.pop_front();                                           //      Remove from 'know'
                  }

                  //      Remove people from 'share' after 'forget' days
                  if (!share.empty() && share[0].first == i - forget) {
                        share_cnt = (share_cnt - share[0].second + mod) % mod;       //      They forget the secret
                        share.pop_front();                                           //      Remove from 'share'
                  }

                  //      People sharing teach new people today
                  if (!share.empty()) {
                        know_cnt = (know_cnt + share_cnt) % mod;                     //      Add new knowers
                        know.emplace_back(i, share_cnt);                             //      Track when they learned
                  }
            }

            //      Return total people still aware (not forgotten)
            return (know_cnt + share_cnt) % mod;
      }

private:
      static constexpr int mod = 1000000007;      //      Modulo for output size constraints
};
