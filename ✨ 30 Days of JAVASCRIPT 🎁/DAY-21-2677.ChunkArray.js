var chunk = function (arr, size) {
      const newArr = []

      for (let i = 0; i <= arr.length - 1; i = i + size) {
            var subarr = arr.slice(i, i + size);
            newArr.push(subarr);
      }
      return newArr
};