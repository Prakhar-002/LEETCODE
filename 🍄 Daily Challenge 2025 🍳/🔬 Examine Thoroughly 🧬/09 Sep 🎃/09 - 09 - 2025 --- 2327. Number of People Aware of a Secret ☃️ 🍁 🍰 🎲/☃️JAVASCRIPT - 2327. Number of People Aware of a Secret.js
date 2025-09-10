//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2327

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

var peopleAwareOfSecret = function (n, delay, forget) {
      const MOD = 1000000007;             //      Modulo for large numbers

      const know = new Deque();           //      People who know but can't share yet ({ day, count })
      const share = new Deque();          //      People actively sharing the secret

      know.pushBack({ day: 1, count: 1 }); //      On day 1, one person knows the secret

      let knowCnt = 1;     //      Current count of people who know (not sharing)
      let shareCnt = 0;    //      Current count of people who are sharing

      //      Simulate each day from 2 to n
      for (let i = 2; i <= n; i++) {
            //      Move from 'know' to 'share' when delay passes
            if (!know.isEmpty() && know.front().day === i - delay) {
                  const first = know.popFront();
                  knowCnt = (knowCnt - first.count + MOD) % MOD;     //      Remove these from know count
                  shareCnt = (shareCnt + first.count) % MOD;         //      Add these to share count
                  share.pushBack(first);                             //      Track their sharing day
            }

            //      Remove sharers who forget after 'forget' days
            if (!share.isEmpty() && share.front().day === i - forget) {
                  const first = share.popFront();
                  shareCnt = (shareCnt - first.count + MOD) % MOD;   //      They forget the secret today
            }

            //      Each sharer teaches new people today
            if (!share.isEmpty()) {
                  knowCnt = (knowCnt + shareCnt) % MOD;              //      Add new people who know now
                  know.pushBack({ day: i, count: shareCnt });        //      Track when new people learned
            }
      }

      //      Return total people who still know the secret
      return (knowCnt + shareCnt) % MOD;
};
