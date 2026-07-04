/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let i = 0;
    return function() {
        if(i === 0){
            i++;
            return n;
        }

        n = n+1;
        return n;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */