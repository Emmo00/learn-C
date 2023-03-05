static int letterStarts[26];

/* words are grouped by the first letter and then ordered by the length within a letter */
int comp(const void* a, const void* b) {
    char* aword = *((char**)a);
    char* bword = *((char**)b);
    if (aword[0] != bword[0]) return aword[0]-bword[0];
    else return strlen(bword) - strlen(aword);
}

bool find_word(char** dict, int dictSize, char* word, int offset, int skipIndex) {
    int restlen = strlen(word+offset);
    if (restlen == 0) return true;

    char firstLetter = (word+offset)[0];
    int letterStartsIdx = firstLetter-'a';
    int startDictIdx = letterStarts[letterStartsIdx];
    /* no words starting with the current first letter, no match */
    if (startDictIdx == -1) return false;
    
    int endDictIdx = dictSize;
    
    while (letterStartsIdx < 25) {
        letterStartsIdx++;
        if (letterStarts[letterStartsIdx] != -1) break;
    }
    if (firstLetter != 'z' && letterStarts[letterStartsIdx] != -1) endDictIdx = letterStarts[letterStartsIdx];
    for (int i = endDictIdx-1; i >= startDictIdx; i--) {
        if (i == skipIndex) continue;
        int len = strlen(dict[i]);
        /* when the words that we are matching are long enough that a match would leave too few
         * letters to match the shortest word, we can exit. There is no match for that word.
         */
        if (len == 0) continue;
        if (strncmp(dict[i], word+offset, len) == 0) {
            bool res = find_word(dict, dictSize, word, offset+len, skipIndex);
            if (res) return true;
        }
    }
    return false;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findAllConcatenatedWordsInADict(char ** words, int wordsSize, int* returnSize){
    char** res = malloc(1000 * sizeof(char*));
    int resCounter = 0;

    qsort(words, wordsSize, sizeof(char*), comp);
    
    /* letterStarts is an array of indices that delimit groups of words starting with the same letter */
    for (int i = 0; i < 26; i++) letterStarts[i] = -1;
    for (int i = 0; i < wordsSize; i++) {
        if (strlen(words[i]) == 0) continue;
        if (letterStarts[words[i][0]-'a'] == -1) letterStarts[words[i][0]-'a'] = i; 
    }

    for (int i = 0; i < wordsSize; i++) {
        int len = strlen(words[i]);
        if (len && find_word(words, wordsSize, words[i], 0, i)) {
            res[resCounter] = malloc(len+1);
            strcpy(res[resCounter++], words[i]);
        }
    }
    *returnSize = resCounter;
    return res;
}
