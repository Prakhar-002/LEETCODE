var addTwoPromises = async function (promise1, promise2) {
      return Promise.all([promise1, promise2]).then((values) => {
            return values.reduce((a, b) => (a + b))
      })
};