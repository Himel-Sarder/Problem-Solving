Problem: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

Answer:
-------
int strStr(string haystack, string needle) {
    size_t pos = haystack.find(needle);
    if (pos != string::npos) {
        return pos;
    } else {
        return -1;
    }
}


Full code:
----------
#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle) {
    size_t pos = haystack.find(needle);
    if (pos != string::npos) {
        return pos;
    } else {
        return -1;
    }
}

int main() {
    // Test cases
    string haystack1 = "sadbutsad";
    string needle1 = "sad";
    cout << "Index of first occurrence: " << strStr(haystack1, needle1) << endl; // Output: 0

    string haystack2 = "leetcode";
    string needle2 = "leeto";
    cout << "Index of first occurrence: " << strStr(haystack2, needle2) << endl; // Output: -1

    return 0;
}
