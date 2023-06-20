int _isalpha(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; // Character is alphabetic
    } else {
        return 0; // Character is not alphabetic
    }
}
