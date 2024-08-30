class Solution {
private:
    bool valid(char ch) {
        return isalnum(ch); 
    }

    char lowercase(char ch) {
        if (isupper(ch)) {
            return tolower(ch); 
        } else {
            return ch;
        }
    }

    bool isPalindrom(string a) {
        int s = 0;
        int e = a.length() - 1;
        while (s < e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = ""; 

        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i])) {
                temp.push_back(lowercase(s[i])); 
            }
        }

        return isPalindrom(temp); 
    }
};