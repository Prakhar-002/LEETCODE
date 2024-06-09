var timeLimit = function (fn, t) {

      return async function (...args) {
            return new Promise(async (resolve, reject) => {
                  setTimeout(() => reject("Time Limit Exceeded"), t);
                  try {
                        const res = await fn(...args);
                        resolve(res);
                  } catch (err) {
                        reject(err);
                  }
            })
      }
};