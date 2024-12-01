/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var rotateString = function(s, goal) {
    for(let i=0;i<s.length;i++){
    i = i % s.length; 
    var new_str = s.substr(i) + s.substring(0, i);
    if(goal==new_str){
        return true;
    }
    }
    return false;
    
}
