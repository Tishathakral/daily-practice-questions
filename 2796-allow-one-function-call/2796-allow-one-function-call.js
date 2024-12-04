/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
        
     let Called = false;
     let res; 

    return function(...args){
     if(!Called){
        res = fn(...args);
        Called = true;
        return res;
    }else{
        return undefined;
    }
}
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
