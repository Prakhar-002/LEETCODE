var subsets = function (nums) {
      let result = [];
      let temp = [];
      solver(nums, 0, temp, result);

      return result;
};

var solver = function (arr, idx, temp, result) {
      if (idx == arr.length) {
            result.push([...temp]);
            return;
      }

      temp.push(arr[idx])
      solver(arr, idx + 1, temp, result);
      temp.pop();
      solver(arr, idx + 1, temp, result);
}