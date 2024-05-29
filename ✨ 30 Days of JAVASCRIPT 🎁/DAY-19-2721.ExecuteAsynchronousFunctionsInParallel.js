var promiseAll = function (functions) {
      return new Promise((resolve, reject) => {
            let n = functions.length
            let res = Array(n)

            for (let i = 0; i < n; i++) {
                  functions[i]()
                        .then((result) => {
                              res[i] = result;
                              n--
                              if (n === 0) resolve(res)
                        }).catch(reject)
            }
      })
};