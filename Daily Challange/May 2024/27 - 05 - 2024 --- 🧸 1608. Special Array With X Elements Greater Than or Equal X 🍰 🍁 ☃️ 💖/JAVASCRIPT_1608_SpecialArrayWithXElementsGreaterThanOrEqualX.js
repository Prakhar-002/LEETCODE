var specialArray = function (nums) {
      let countNo = new Array(nums.length + 1).fill(0);

      for (const el of nums) {
            countNo[Math.min(el, nums.length)]++;
      }

      let rightTotal = 0;

      for (let i = nums.length; i >= 0; i--) {
            rightTotal += countNo[i];
            if (i == rightTotal) {
                  return rightTotal;
            }
      }

      return -1;
};