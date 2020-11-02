#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Anagram {
public:
    static bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
                
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s.compare(t) == 0 ? true : false;
    }
};

int main() {
  string word1 = "ana";
  string word2 = "naa";

  string result = Anagram::isAnagram(word1, word2) ? "true" : "false";
  cout << word2 << "is an anagram of " << word1
        << "? " <<  result << endl;
}