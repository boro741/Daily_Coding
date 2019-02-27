import java.io.*;
import java.util.Dictionary;

import com.sun.tools.javac.util.Pair;;


class test{
    public static void main(String args[]){
        string str = "ababab";
        Dictionary<string, int>dict = new Dictionary<string, int>();
KeyValuePair int count = 0;
int ngramcount = 6;
string substring = "";

// Add entries to the hash table
while (count < str.length) {
    // copy the words into the substring
    int i = 0;
    substring = "";
    while (ngramcount > 0 && count < str.length) {
        substring[i] = str[count];
        if (str[i] == ' ')
            ngramcount--;
        i++;
        count++;
    }
    ngramcount = 6;
    substring.Trim();  // get rid of the last blank in the substring
    // Update the dictionary (hash table) with the substring
    if (dict.Contains(substring)) {  // substring is already in hash table so increment the count
        int hashCount = dict[substring];
        hashCount++;
        dict[substring] = hashCount;
    }
    else
        dict[substring] = 1;
}

// Find the most commonly occurrring pattern in the string
// by searching the hash table for the greatest count.
int maxCount = 0;
string mostCommonPattern = "";
foreach (KeyValuePair<string,int> pair in dict) {
    if (pair.Value > maxCount) {
        maxCount = pair.Value;
        mostCommonPattern = pair.Key;
    }
}
    }
}