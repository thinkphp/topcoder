#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ValueOfString {

      public:
      //constructor of the class
      ValueOfString(){};
    
      int findValue(string s) {
          
          vector<int> count(26);
          int size = s.length(), sum = 0, ans = 0;
          
          for(int i = 0; i < size; ++i) count[ s[i] - 'a' ]++;
          
          for(int i = 0; i < 26; ++i) {
              
                 sum += count[ i ];
              
                 ans += sum * (i+1) * count[i];
          }
          
          return ans;
      }         
};

