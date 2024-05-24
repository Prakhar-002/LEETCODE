var cancellable = function (fn, args, t) {
      fn(...args)
      let timer = setInterval(() => {
            fn(...args)
      }, t)

      let cancleFn = () => clearInterval(timer)
      return cancleFn
};