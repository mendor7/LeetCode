class Solution {
    public int romanToInt(String s) {
        int value = 0;
        for (int i = 0; i < s.length(); i++) {
            switch(s.charAt(i)) {
                case 'I':
                    if (i != s.length() - 1) {
                        if (s.charAt(i + 1) == 'V') {
                            value += 4;
                            i++;
                            break;
                        }
                        else if (s.charAt(i + 1) == 'X') {
                            value += 9;
                            i++;
                            break;
                        }
                    }
                    value += 1;
                    break;
                case 'V':
                    value += 5;
                    break;
                case 'X':
                    if (i != s.length() - 1) {
                        if (s.charAt(i + 1) == 'L') {
                            value += 40;
                            i++;
                            break;
                        }
                        else if (s.charAt(i + 1) == 'C') {
                            value += 90;
                            i++;
                            break;
                        }
                    }
                    value += 10;
                    break;
                case 'L':
                    value += 50;
                    break;
                case 'C':
                    if (i != s.length() - 1) {
                        if (s.charAt(i + 1) == 'D') {
                            value += 400;
                            i++;
                            break;
                        }
                        else if (s.charAt(i + 1) == 'M') {
                            value += 900;
                            i++;
                            break;
                        }
                    }
                    value += 100;
                    break;
                case 'D':
                    value += 500;
                    break;
                case 'M':
                    value += 1000;
                    break;
            }
        }
        return value;
    }
}