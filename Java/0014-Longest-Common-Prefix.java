class Solution {
    public String longestCommonPrefix(String[] strs) {
        String prefix = "";
        String check = "";
        for (int i = 0; i < strs[0].length(); i++) {
            check = prefix + strs[0].charAt(i);
            for (int j = 1; j < strs.length; j++) {
                if (strs[j].indexOf(check) == -1 || strs[j].indexOf(check) != 0) {
                    return prefix;
                }
            }
            prefix = check;
        }

        return prefix;
    }
}