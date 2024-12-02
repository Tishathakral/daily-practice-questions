/**
 * @param {string} sentence
 * @param {string} searchWord
 * @return {number}
 */
var isPrefixOfWord = function(sentence, searchWord) {
    let words = sentence.split(" ");
    for (let i = 0; i < words.length; i++) {
        let isPrefix = true; // Flag to check if searchWord is a prefix
        for (let j = 0; j < searchWord.length; j++) {
            // Check if the characters match
            if (j >= words[i].length || words[i][j] !== searchWord[j]) {
                isPrefix = false;
                break;
            }
        }
        if (isPrefix) {
            return i + 1; // Return 1-based index
        }
    }
    return -1; // Return -1 if no word has the searchWord as a prefix
};
