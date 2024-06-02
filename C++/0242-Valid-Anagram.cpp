class Solution {
public:
    bool isAnagram(string s, string t) {
        bool anagram = false;
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map <char, int> hashmap;
        hashmap.insert({ 'a', 0});
        hashmap.insert({ 'b', 0});
        hashmap.insert({ 'c', 0});
        hashmap.insert({ 'd', 0});
        hashmap.insert({ 'e', 0});
        hashmap.insert({ 'f', 0});
        hashmap.insert({ 'g', 0});
        hashmap.insert({ 'h', 0});
        hashmap.insert({ 'j', 0});
        hashmap.insert({ 'k', 0});
        hashmap.insert({ 'l', 0});
        hashmap.insert({ 'm', 0});
        hashmap.insert({ 'n', 0});
        hashmap.insert({ 'o', 0});
        hashmap.insert({ 'p', 0});
        hashmap.insert({ 'q', 0});
        hashmap.insert({ 'r', 0});
        hashmap.insert({ 's', 0});
        hashmap.insert({ 't', 0});
        hashmap.insert({ 'u', 0});
        hashmap.insert({ 'v', 0});
        hashmap.insert({ 'w', 0});
        hashmap.insert({ 'x', 0});
        hashmap.insert({ 'y', 0});
        hashmap.insert({ 'z', 0});

        unordered_map <char, int> hashmap2;
        hashmap2.insert({ 'a', 0});
        hashmap2.insert({ 'b', 0});
        hashmap2.insert({ 'c', 0});
        hashmap2.insert({ 'd', 0});
        hashmap2.insert({ 'e', 0});
        hashmap2.insert({ 'f', 0});
        hashmap2.insert({ 'g', 0});
        hashmap2.insert({ 'h', 0});
        hashmap2.insert({ 'j', 0});
        hashmap2.insert({ 'k', 0});
        hashmap2.insert({ 'l', 0});
        hashmap2.insert({ 'm', 0});
        hashmap2.insert({ 'n', 0});
        hashmap2.insert({ 'o', 0});
        hashmap2.insert({ 'p', 0});
        hashmap2.insert({ 'q', 0});
        hashmap2.insert({ 'r', 0});
        hashmap2.insert({ 's', 0});
        hashmap2.insert({ 't', 0});
        hashmap2.insert({ 'u', 0});
        hashmap2.insert({ 'v', 0});
        hashmap2.insert({ 'w', 0});
        hashmap2.insert({ 'x', 0});
        hashmap2.insert({ 'y', 0});
        hashmap2.insert({ 'z', 0});

        for (int i = 0; i < s.length(); i++) {
            hashmap[s[i]]++;
            hashmap2[t[i]]++;
        }
        if (hashmap == hashmap2) {
            anagram = true;
        }

        return anagram;
    }
};