class Solution {
    hasDuplicate(nums) {
        const set  = new Set();
        for (let i of nums) {
            if (set.has(i)) {
                return true;
            }
            set.add(i);
        }
        return false;
    }
}

const solution = new Solution();
const arr = [1,2,3]
console.log(solution.hasDuplicate(arr))