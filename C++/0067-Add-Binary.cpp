class Solution {
public:
    string addBinary(string a, string b) {
        bool overflow = false;
        vector<char> added;
        string newNum = "";
        if (a == "0" && b == "0") {
            return "0";
        }
        else if (a == "0") {
            return b;
        }
        else if (b == "0") {
            return a;
        }
        if (a.length() > b.length()) {
            for (int i = b.length() - 1; i >= 0; i--) {
                if (a[i + a.length() - b.length()] == '0') {
                    if (overflow == true) {
                        if (b[i] == '1') {
                            added.push_back('0');
                        }
                        else {
                            added.push_back('1');
                            overflow = false;
                        }
                    }
                    else {
                        added.push_back(b[i]);
                    }
                }
                else if (b[i] == '0') {
                    if (overflow == true) {
                        if (a[i + a.length() - b.length()] == '1') {
                            added.push_back('0');
                        }
                        else {
                            added.push_back('1');
                            overflow = false;
                        }
                    }
                    else {
                        added.push_back(a[i + a.length() - b.length()]);
                    }
                }
                else if (a[i + a.length() - b.length()] == '1' && b[i] == '1') {
                    if (overflow == true) {
                        added.push_back('1');
                    }
                    else {
                        added.push_back('0');
                        overflow = true;
                    }
                }
                else {
                    added.push_back('0');
                    overflow = true;
                }
            }
            for (int i = a.length() - b.length() - 1; i < a.length(); i--) {
                if (overflow == true) {
                    if (a[i] == '1') {
                        added.push_back('0');
                    }
                    else {
                        added.push_back('1');
                        overflow = false;
                    }
                }
                else {
                    added.push_back(a[i]);
                }
            }
        }
        else if (a.length() < b.length()) {
            for (int i = a.length() - 1; i >= 0; i--) {
                if (a[i] == '0') {
                    if (overflow == true) {
                        if (b[i + b.length() - a.length()] == '1') {
                            added.push_back('0');
                        }
                        else {
                            added.push_back('1');
                            overflow = false;
                        }
                    }
                    else {
                        added.push_back(b[i + b.length() - a.length()]);
                    }
                }
                else if (b[i + b.length() - a.length()] == '0') {
                    if (overflow == true) {
                        if (a[i] == '1') {
                            added.push_back('0');
                        }
                        else {
                            added.push_back('1');
                            overflow = false;
                        }
                    }
                    else {
                        added.push_back(a[i]);
                    }
                }
                else if (a[i] == '1' && b[i + b.length() - a.length()] == '1') {
                    if (overflow == true) {
                        added.push_back('1');
                    }
                    else {
                        added.push_back('0');
                        overflow = true;
                    }
                }
                else {
                    added.push_back('0');
                    overflow = true;
                }
            }
            for (int i = b.length() - a.length() - 1; i < b.length(); i--) {
                if (overflow == true) {
                    if (b[i] == '1') {
                        added.push_back('0');
                    }
                    else {
                        added.push_back('1');
                        overflow = false;
                    }
                }
                else {
                    added.push_back(b[i]);
                }
            }
        }
        else {
            for (int i = b.length() - 1; i >= 0; i--) {
                if (a[i] == '0') {
                    if (overflow == true) {
                        if (b[i] == '1') {
                            added.push_back('0');
                        }
                        else {
                            added.push_back('1');
                            overflow = false;
                        }
                    }
                    else {
                        added.push_back(b[i]);
                    }
                }
                else if (b[i] == '0') {
                    if (overflow == true) {
                        if (a[i] == '1') {
                            added.push_back('0');
                        }
                        else {
                            added.push_back('1');
                            overflow = false;
                        }
                    }
                    else {
                        added.push_back(a[i]);
                    }
                }
                else if (a[i] == '1' && b[i] == '1') {
                    if (overflow == true) {
                        added.push_back('1');
                    }
                    else {
                        added.push_back('0');
                        overflow = true;
                    }
                }
                else {
                    added.push_back('0');
                    overflow = true;
                }
            }
        }
        if (overflow == true) {
            added.push_back('1');
        }
        for (int i = added.size() - 1; i >=0; i--) {
            newNum += added[i];
        }
    return newNum;
    }
};