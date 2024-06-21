var rob = function(nums) {
      let firstHouseRob = 0;
      let secHouseRob = 0;

      for (let n of nums) {
            let firstHouseSum = firstHouseRob;
            firstHouseRob = secHouseRob;
            secHouseRob = Math.max(secHouseRob, n + firstHouseSum);
      }

      return Math.max(firstHouseRob, secHouseRob);
};