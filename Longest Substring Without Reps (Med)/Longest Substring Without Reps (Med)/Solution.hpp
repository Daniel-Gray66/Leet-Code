#include <string>
#include <map>

#include<iostream>
using namespace std;



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> Table; // Map to store the last index of each character
        int maxLength = 0;    
        int j = 0;        
        int longestStart = 0; 

        for (int i = 0; i < s.length(); i++) {

            if (Table.find(s[i]) != Table.end() && Table[s[i]] >= j) {
                j = Table[s[i]] + 1;
            }

            // This will continue updating the map 
            Table[s[i]] = i;


            int currentLength = i - j + 1;


            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestStart = j;
            }

        }

        string longestSubstring = s.substr(longestStart, maxLength);
        cout << longestSubstring << endl;
        return  longestSubstring.length();
    }
};