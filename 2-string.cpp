#include <bits/stdc++.h>
using namespace std;

int main () {
  // string s = "Hello";
  // cout << s << endl;



  // string s;   // empty string.
  // cout << s << endl;



  // String concatenation :
  // string s1 = "Hello ";
  // string s2 = "World";
  // string s = s1 + s2;
  // cout << s << endl;



  // Vector akare string :
  // string s = {'H', 'e', 'l', 'l', 'o'};   // character er vector.
  // cout << s << endl;



  // Size :
  // string s = "Hello";
  // cout << s.size() << endl;



  // Length :
  // string s = "Hello";
  // cout << s.length() << endl;



  // String er sathe character concate kora :
  // char c = '!';
  // string s = "Hello";
  // cout << s+c << endl;



  // Vector use kore string e push_back :
  // string s1 = "";
  // s1.push_back('s');
  // cout << s1 << endl;

  // string s2 = "Hell";
  // s2.push_back('o');
  // cout << s2 << endl;

  // string s3 = "He";
  // s3.push_back('l');
  // s3.push_back('l');
  // s3.push_back('o');
  // cout << s3 << endl;



  // pop_back :
  // string s = "Hello";
  // s.pop_back();
  // s.pop_back();
  // cout << s << endl;



  // Index access :
  // string s = "Hello";
  // cout << s[0] << endl;
  // cout << s[2] << endl;



  // for loop :
  // string s1 = "Hello";
  // for (int i = 0; i < 5; i++) {
  //   cout << s1[i] << endl;
  // }

  // string s2 = "Hello world";
  // for (int i = 0; i < s2.size(); i++) {
  //   cout << s2[i] << endl;
  // }



  // range-based loop :
  // string s = "Hello";
  // for (char c: s) {
  //   cout << c << endl;
  // }



  // iterator :
  // string s = "Hey there";
  // for (auto it = s.begin(); it != s.end(); it++) {
  //   cout << *it << endl;
  // }

  // string s = "Hey there";
  // char c = *s.begin();
  // cout << c << endl;



  // iterator declare :
  // string s = "Hey";
  // string::iterator it = s.begin();
  // it++;

  // string::iterator it = s.end();

  // auto it = s.end();
  // it--;
  // char c = *it;
  // cout << c << endl;
  // cout << c << endl;



  // reverse :
  // string s = "Jack";
  // for (int i = s.size() - 1; i >= 0; i--) {
  //   cout << s[i] << endl;
  // }

  // string r = "";
  // for (int i = s.size() - 1; i >= 0; i--) {
  //   // r += s[i];
  //   r.push_back(s[i]);
  // }
  // cout << r << endl;

  // string s = "";
  // string r = "";
  // // Emon empty string thakle age setar size take typecast kore nibo integer e :
  // int sz = s.size();
  // for (int i = sz - 1; i >= 0; i--) {
  //   cout << i << endl;
  //   r += s[i];
  // }
  // cout << r << endl;



  // reverse function use kore :
  // string s = "abcdef";
  // reverse(s.begin(), s.end());
  // cout << s << endl;

  // Prothom 2 ta character reverse korbo :
  // reverse (s.begin(), s.begin() + 2);
  // cout << s << endl;

  // (aedcbf) emon print korte chai :
  // reverse (s.begin() + 1, s.begin() + 5);
  // cout << s << endl;



  // Palindrome example :
  // string s = "abcd";
  // string r = s;
  // reverse(r.begin(), r.end());
  // cout << s << endl;   // abcd
  // cout << r << endl;   // dcba

  // if (s == r) cout << "Palindrome" << endl;
  // else cout << "Not a palindrome" << endl;



  // Character comparison :
  // char c1 = 'a';
  // char c2 = 'b';
  // cout << max(c1, c2) << endl;

  // char c3 = '+';
  // char c4 = '-';
  // cout << max(c3, c4) << endl;

  // ASCII code value pawar jonno :
  // int code = '+';   // 43
  // cout << code << endl;

  // int zero = '0';   // 48
  // cout << zero << endl;

  // char c = 'a';
  // c++;   // 97 + 1 = 98
  // cout << c << endl;

  // char c = 97;
  // cout << c << endl;   // a


  // lower to upper :
  // char c = 'a';
  // c -= 32;
  // cout << c << endl;   // 'A'

  // char c1 = 'e';
  // c1 -= 32;
  // cout << c1 << endl;   // 'E'


  // upper to lower :
  // char c1 = 'A';
  // c1 += 32;
  // cout << c1 << endl;   // 'a'

  // char c2 = 'Q';
  // c2 += 32;
  // cout << c2 << endl;   // 'q'



  // String comparison :
  // string s1 = "abcd";
  // string s2 = "abdd";
  // cout << min(s1, s2) << endl;   // abcd

  // string s3 = "abd";
  // string s4 = "abdd";
  // cout << min(s3, s4) << endl;   // abd

  // string s5 = "abd";
  // string s6 = "X";
  // cout << min(s5, s6) << endl;   // X



  // String theke character remove :
  // string s = "abcdef";
  // s.erase(s.begin());  // a remove hobe.
  // cout << s << endl;

  // string s = "abcdef";
  // s.erase(s.begin() + 1);  // b remove hobe.
  // cout << s << endl;



  // String character sort :
  // string s = "hello";
  // sort(s.begin(), s.end());
  // cout << s << endl;

  // string s1 = "784651";
  // sort(s1.begin(), s1.end());
  // cout << s1 << endl;

  // string s2 = "9184675";
  // sort(s2.begin(), s2.begin() + 4);
  // cout << s2 << endl;



  // Reverse sort :
  // string s = "hello";
  // sort(s.rbegin(), s.rend());
  // cout << s << endl;

  // string s1 = "19278364";
  // sort(s1.rbegin(), s1.rend());
  // cout << s1 << endl;



  // Substring :
  // string s = "abcd";
  // cout << s.substr(0, 2) << endl;   // ab

  // string s = "hello";
  // cout << s.substr(1, 4) << endl;   // ello

  // Ekta string e kotogula substring thakte pare :
  // string s = "hello";
  // for (int i = 0; i < s.size(); i++) {
  //   int max_len = s.size() - i;
  //   for (int len = 1; len <= max_len; len++) {
  //     cout << s.substr(i, len) << endl;
  //   }
  // }

  // Alternative :
  // string s = "hello";
  // for (int i = 0; i < s.size(); i++) {
  //   string x = "";
  //   for (int j = i; j < s.size(); j++) {
  //     x += s[j];
  //     cout << x << endl;
  //   }
  // }



  // Special case :
  // string s = "ab\"cd";
  // cout << s << endl;

  // string s1 = "ab\ncd";
  // cout << s1 << endl;

  // string s2 = "ab\tcd";   // tab
  // cout << s2 << endl;

  // '\' :
  // string s3 = "ab\\cd";
  // cout << s3 << endl;

  // String er moddhe 2 ta \ chai :
  // string s4 = "ab\\\\cd";
  // cout << s4 << endl;


  return 0;
}