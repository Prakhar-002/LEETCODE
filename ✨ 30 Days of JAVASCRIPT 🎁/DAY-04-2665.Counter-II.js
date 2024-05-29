var createCounter = function (init) {
      let count = init;

      const increment = () => ++count;

      const decrement = () => --count;

      const reset = () => {
            count = init;
            return count;
      }

      return {
            increment,
            decrement,
            reset
      }
};