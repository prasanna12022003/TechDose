char repeatedCharacter(char* s) {
    int chars[26] = {0}; // count elements
    int i = 0;

    while (s[i]) {
        chars[s[i] - 'a']++; //  here 'a' means character code of a 
        if(chars[s[i] - 'a'] == 2) // if 2, it comes twice
            return s[i];
        i++;
    }
    return NULL;
}