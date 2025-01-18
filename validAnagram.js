/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if (s.length != t.length) {
        return false;
    }
    const frequencyCounter1 = {};
    const frequencyCounter2 = {};

    for (let char of s) {
        frequencyCounter1[char] = (frequencyCounter1[char] || 0) + 1;
    }

    for (let char of t) {
        frequencyCounter2[char] = (frequencyCounter2[char] || 0) +1;
    }
   
   // Compare the frequency counters
   for (let key in frequencyCounter1) {
    if (frequencyCounter1[key] != frequencyCounter2[key]) {
        return false;
    }
   }
    return true;
   }
