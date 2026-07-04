/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let newarr = []
    arr.forEach((element, index)=> {
        newarr.push(fn(element, index))    
    } )
    return newarr;
};