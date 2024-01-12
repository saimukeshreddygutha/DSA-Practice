/**
 * @param {string} s
 * @return {boolean}
 */
var halvesAreAlike = function(s) {
    s = s.toLowerCase();
    let n = s.length;
    const vowels = ['a', 'e', 'i', 'o', 'u'];
    let firstHalfCount = 0, secondHalfCount = 0;
    for(let i = 0;i < n/2;i++){
        if(vowels.includes(s[i]))firstHalfCount++;
        if(vowels.includes(s[i+n/2]))secondHalfCount++;
    }

    return firstHalfCount == secondHalfCount;
};
