var flat = function (arr, n) {
      if (n === 0) {
            return arr.slice()
      }

      let flatArr = []

      for (let i = 0; i < arr.length; i++) {
            if (Array.isArray(arr[i])) {
                  const nestedArr = flat(arr[i], n - 1)
                  flatArr.push(...nestedArr)
            } else {
                  flatArr.push(arr[i])
            }
      }

      return flatArr
};