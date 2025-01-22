const nums = [1,1,1,2,2,3]


function topKFrequent(nums, k) {
    map = new Map();

    for (let i of nums) {
        map.set(i, (map.get(i) || 0) + 1);
    }
    console.log(map);
    const arr = new Array(nums.length + 1).fill(null).map(() => []);
        for (let [number, freq] of map) {
            arr[freq].push(number);
        }
    console.log(arr);

    const count = [];
    for (let i = arr.length - 1; i >= 0 && count.length < k; i--) {
        if (arr[i].length > 0) {
            count.push(...arr[i]);
        }
    }
    return count.slice(0, k);

}

topKFrequent(nums, 2);