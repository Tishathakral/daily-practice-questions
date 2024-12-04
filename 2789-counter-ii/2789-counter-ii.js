/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let a = init;
    return {
       increment:  function increment(){
           return ++a;
        }, 
       decrement: function decrement(){
            return --a;
        },
       reset: function reset(){
            a = init;
            return a;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */