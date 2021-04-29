void reverseString(char* s, int sSize) {
    char temporary = " ";
    for(int i = 0; i < sSize/2; i++) {
        temporary = s[i];
        s[i] = s[sSize-1-i];
        s[sSize-1-i] = temporary;
    }
}


