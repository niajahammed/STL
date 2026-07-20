#include <bits/stdc++.h>
using namespace std;

// int main () {
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


    


  // Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

  // Input :
  // Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

  // Output :
  // If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
  // Examples
  // Input :
  // aaaa
  // aaaA

  // Output :
  // 0

  // Input :
  // abs
  // Abz

  // Output :
  // -1

  // Input :
  // abcdefg
  // AbCdEfF

  // Output :
  // 1
  // Solve :
  /*
  string a, b;
  cin >> a >> b;

  // for lowercase :
  for (int i = 0; i < a.size(); i++) {
    if (a[i] >= 'A' && a[i] <= 'Z') {
      a[i] += 32;
    }

    if (b[i] >= 'A' && b[i] <= 'Z') {
      b[i] += 32;
    }
  }

  // if (a == b) cout << 0 << endl;
  // else if (a < b) cout << -1 << endl;
  // else cout << 1 << endl;

  // Alternative :
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == b[i]) {
      continue;
    } else if (a[i] < b[i]) {
      cout << -1 << endl;
      return 0;
    } else {
      cout << 1 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  */




  // Nikita had a word consisting of exactly 3 lowercase Latin letters. The letters in the Latin alphabet are numbered from 1 to 26, where the letter "a" has the index 1, and the letter "z" has the index 26.

  // He encoded this word as the sum of the positions of all the characters in the alphabet. For example, the word "cat" he would encode as the integer 3+1+20=24, because the letter "c" has the index 3 in the alphabet, the letter "a" has the index 1, and the letter "t" has the index 20.

  // However, this encoding turned out to be ambiguous! For example, when encoding the word "ava", the integer 1+22+1=24 is also obtained.

  // Determine the lexicographically smallest word of 3 letters that could have been encoded.

  // A string a is lexicographically smaller than a string b if and only if one of the following holds:

  //     a is a prefix of b, but a≠b;
  //     in the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b.

  // Input :
  // The first line of the input contains a single integer t (1≤t≤100) — the number of test cases in the test.

  // This is followed by the descriptions of the test cases.

  // The first and only line of each test case contains an integer n (3≤n≤78) — the encoded word.

  // Output :
  // For each test case, output the lexicographically smallest three-letter word that could have been encoded on a separate line.
  // Example
  // Input :
  // 5
  // 24
  // 70
  // 3
  // 55
  // 48

  // Output :
  // aav
  // rzz
  // aaa
  // czz
  // auz
  // Solve :
  // string s = "CAT";

  // int sum = 0;

  // for (char c: s) {
  //   sum += c-'A'+1;   // character theke 'A' - korle 0 pabo, dorkar 1 based character, tai 1 add.
  // }
  // cout << sum << endl;


  

  


  // return 0;
// }



void solve () {
  int sum;
  cin >> sum;

  // for 3 length :
  for (char i = 'a'; i <= 'z'; i++) {
    for (char j = 'a'; j <= 'z'; j++) {
      for (char k = 'a'; k <= 'z'; k++) {
        // string s = "";
        // s += i;
        // s += j;
        // s += k;

        // cout << s << " ";

        int x = 0;
        x += i-'a'+1;
        x += j-'a'+1;
        x += k-'a'+1;

        if (x == sum) {
          cout << i << j << k << endl;
          return;
        }
      }
    }
  }
}

int main () {
  // Nikita had a word consisting of exactly 3 lowercase Latin letters. The letters in the Latin alphabet are numbered from 1 to 26, where the letter "a" has the index 1, and the letter "z" has the index 26.

  // He encoded this word as the sum of the positions of all the characters in the alphabet. For example, the word "cat" he would encode as the integer 3+1+20=24, because the letter "c" has the index 3 in the alphabet, the letter "a" has the index 1, and the letter "t" has the index 20.

  // However, this encoding turned out to be ambiguous! For example, when encoding the word "ava", the integer 1+22+1=24 is also obtained.

  // Determine the lexicographically smallest word of 3 letters that could have been encoded.

  // A string a is lexicographically smaller than a string b if and only if one of the following holds:

  //     a is a prefix of b, but a≠b;
  //     in the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b.

  // Input :
  // The first line of the input contains a single integer t (1≤t≤100) — the number of test cases in the test.

  // This is followed by the descriptions of the test cases.

  // The first and only line of each test case contains an integer n (3≤n≤78) — the encoded word.

  // Output :
  // For each test case, output the lexicographically smallest three-letter word that could have been encoded on a separate line.
  // Example
  // Input :
  // 5
  // 24
  // 70
  // 3
  // 55
  // 48

  // Output :
  // aav
  // rzz
  // aaa
  // czz
  // auz
  // Solve :
  // string s = "CAT";

  // int sum = 0;

  // for (char c: s) {
  //   sum += c-'A'+1;   // character theke 'A' - korle 0 pabo, dorkar 1 based character, tai 1 add.
  // }
  // cout << sum << endl;

  // int t;
  // cin >> t;

  // while (t--) {
  //   solve();
  // }




  // Permutation :
  // string s;
  // cin >> s;

  // cout << next_permutation(s.begin(), s.end()) << endl;
  // cout << s << endl;

  // All possible permutation for a string :
  // do {
  //   cout << s << endl;
  // } while (next_permutation(s.begin(), s.end()));




  // In this problem you have to find the permutations using the first N English capital letters. Since there can be many permutations, you have to print the first K.

  // Input :
  // Input starts with an integer T (≤ 100), denoting the number of test cases.

  // Each case contains two integers N, K (1 ≤ N ≤ 26, 1 ≤ K ≤ 30).

  // Output :
  // For each case, print the case number in a line. Then print the first K permutations that contain the first N English capital letters in alphabetical order. If there are less than K permutations then print all of them.
  // Sample
  // Input :	
  // 2
  // 3 8
  // 10 10
    
  // Output :
  // Case 1:
  // ABC
  // ACB
  // BAC
  // BCA
  // CAB
  // CBA
  // Case 2:
  // ABCDEFGHIJ
  // ABCDEFGHJI
  // ABCDEFGIHJ
  // ABCDEFGIJH
  // ABCDEFGJHI
  // ABCDEFGJIH
  // ABCDEFHGIJ
  // ABCDEFHGJI
  // ABCDEFHIGJ
  // ABCDEFHIJG
  // Solve :
  /*
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string s = "";

    int case_no = 1;


    for (int i = 0; i < n; i++) {
      s += 'A'+i;
    }
    // cout << s << endl;

    int count = 0;

    cout << "Case " << case_no++ << ":\n";

    do {
      cout << s << endl;
      count++;
      if (count == k) break;
    } while (next_permutation(s.begin(), s.end()));
  }
  */




  // Puro string input neyar jonno :
  // string s;
  // getline(cin, s);

  // cout << s << endl;


  


  return 0;
}
