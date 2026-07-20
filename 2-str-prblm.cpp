#include <bits/stdc++.h>
using namespace std;

int main () {
  // 1. Convert string to uppercase, lowercase. And also convert characters uppercase who are in lowercase in input and lowercase who are in uppercase in input.
  // Input : abCD
  // Output : 1. ABCD
  //          2. abcd
  //          3. ABcd
  // Solve :
  /*
  string s;
  cin >> s;

  string lower = s;
  string upper = s;
  string both = s;

  for (int i = 0; i < lower.size(); i++) {
    // for lower :
    if (lower[i] >= 'A' && lower[i] <= 'Z') {
      lower[i] += 32;
    } 

    // for upper :
    if (upper[i] >= 'a' && upper[i] <= 'z') {
      upper[i] -= 32;
    }

    // for both :
    if (both[i] >= 'A' && both[i] <= 'Z') {
      both[i] += 32;
    } else if (both[i] >= 'a' && both[i] <= 'z') {
      both[i] -= 32;
    }
  }

  cout << lower << endl;
  cout << upper << endl;
  cout << both << endl;
  */




  // 2. How many digits are there in a string.
  // Solve :
  /*
  string s;
  cin >> s;

  int digit_count = 0;

  for (auto c: s) {
    if (c >= '0' && c <= '9') {
      digit_count++;
    }
  }
  cout << digit_count << endl;
  */




  // 3. A string will be given. Out of all the substrings within this string, you need to print only those substrings that are palindromes.
  // Solve :
  /*
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    int max_len = s.size() - i;

    for (int len = 1; len <= max_len; len++) {
      string x = s.substr(i, len);

      string r = x;

      reverse(r.begin(), r.end());

      if (r == x) {
        cout << x << endl;
      }
    }
  }
  */

  // Upper/Lower :
  /*
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    int max_len = s.size() - i;

    for (int len = 1; len <= max_len; len++) {
      string x = s.substr(i, len);

      // lowercase :
      string x1 = x;

      for (auto &c: x1) {
        if (c >= 'A' && c <= 'Z') {
          c += 32;
        }
      }
      
      // for palindrome :
      string x2 = x1;
      reverse(x2.begin(), x2.end());

      if (x1 == x2) {
        cout << x << endl;
      }
    }
  }
  */




  // 4. You are given N strings S1​,S2​,…,SN​ in this order.
  /*
  Print SN​,SN−1​,…,S1​ in this order.
  Constraints

      1≤N≤10
      N is an integer.
      Si​ is a string of length between 1 and 10, inclusive, consisting of lowercase English letters, uppercase English letters, and digits.

  Input
  The input is given from Standard Input in the following format:

  N
  S1​
  S2​
  ⋮
  SN​

  Output

  Print N lines. The i-th (1≤i≤N) line should contain SN+1−i​.
  Sample Input 1
  Copy

  3
  Takahashi
  Aoki
  Snuke

  Sample Output 1
  Copy

  Snuke
  Aoki
  Takahashi

  We have N=3, S1​= Takahashi, S2​= Aoki, and S3​= Snuke.

  Thus, you should print Snuke, Aoki, and Takahashi in this order.
  Sample Input 2
  Copy

  4
  2023
  Year
  New
  Happy

  Sample Output 2
  Copy

  Happy
  New
  Year
  2023

  The given strings may contain digits.
  */
  // Solve :
  /*
  vector <string> vec = {"Happy", "New"};

  vec.push_back("Year");

  for (auto s: vec) {
    cout << s << endl;
  }
  */

  /*
  int N;
  cin >> N;

  vector <string> vec;
  string s;

  for (int i = 0; i < N; i++) {
    cin >> s;
    vec.push_back(s);
  }

  cout << "---Output---" << endl;
  
  // Reverse :
  // reverse(vec.begin(), vec.end());

  // for loop :
  for (int i = vec.size() - 1; i >= 0; i--) {
    cout << vec[i] << endl;
  }

  // for (auto x: vec) {
  //   cout << x << endl;
  // }
  */




  // 5. There were N participants in a contest. The participant ranked i-th had the nickname Si​.
  // Print the nicknames of the top K participants in lexicographical order.
  // What is lexicographical order?
  // Constraints
  //     1≤K≤N≤100
  //     K and N are integers.
  //     Si​ is a string of length 10 consisting of lowercase English letters.
  //     Si​=Sj​ if i=j.

  // Input
  // The input is given from Standard Input in the following format:

  // N K
  // S1​
  // S2​
  // ⋮
  // SN​

  // Output
  // Print the nicknames, separated by newlines.

  // Sample Input 1
  // 5 3
  // abc
  // aaaaa
  // xyz
  // a
  // def

  // Sample Output 1
  // aaaaa
  // abc
  // xyz

  // This contest had five participants. The participants ranked first, second, third, fourth, and fifth had the nicknames abc, aaaaa, xyz, a, and def, respectively.

  // The nicknames of the top three participants were abc, aaaaa, xyz, so print these in lexicographical order: aaaaa, abc, xyz.
  // Sample Input 2
  // 4 4
  // z
  // zyx
  // zzz
  // rbg

  // Sample Output 2
  // rbg
  // z
  // zyx
  // zzz

  // Sample Input 3
  // 3 1
  // abc
  // arc
  // agc

  // Sample Output 3
  // abc
  // Solve :
  /*
  int N;
  cin >> N;

  int K;
  cin >> K;

  vector <string> vec;
  string s;

  for (int i = 0; i < N; i++) {
    cin >> s;
    vec.push_back(s);
  }

  sort(vec.begin(), vec.begin()+K);

  for (int i = 0; i < K; i++) {
    cout << vec[i] << endl;
  }
  */

  // Alternative using array :
  /*
  int n, k;
  cin >> n >> k;

  string s[n];

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort (s, s+k);

  for (int i = 0; i < k; i++) {
    cout << s[i] << endl;
  }
  */






  return 0;
}