#include <bits/stdc++.h>
using namespace std;

int main () {
  // Take 2 students name and marks as input. Print the name and marks first whose marks is greater than the other.
  // string name1, name2;
  // int mark1, mark2;

  // cin >> name1 >> mark1;
  // cin >> name2 >> mark2;

  // if (mark1 > mark2) {
  //   cout << "Name : " << name1 << ", Mark : " << mark1 << endl;
  //   cout << "Name : " << name2 << ", Mark : " << mark2 << endl;
  // } else {
  //   cout << "Name : " << name2 << ", Mark : " << mark2 << endl;
  //   cout << "Name : " << name1 << ", Mark : " << mark1 << endl;
  // }

  // Alternative : (swap)
  // if (mark2 > mark1) {
  //   swap(name1, name2);
  //   swap(mark1, mark2);
  // }
  // cout << "Name : " << name1 << ", Mark : " << mark1 << endl;
  // cout << "Name : " << name2 << ", Mark : " << mark2 << endl;




  // Pair :
  // pair <string, int> info;
  // cin >> info.first >> info.second;
  // cout << info.first << " " << info.second << endl;

  // pair <string, int> info1, info2;

  // cin >> info1.first >> info1.second;
  // cin >> info2.first >> info2.second;

  // if (info2.second > info1.second) {
  //   swap(info1, info2);
  // }

  // cout << "Name = " << info1.first << ", Mark = " << info1.second << endl;
  // cout << "Name = " << info2.first << ", Mark = " << info2.second << endl;


  // Vector inside pair :
  // pair <string, vector <int>> info;

  // Nested pair :
  // pair <int, pair <int, int>> info;


  // Given n numbers of pairs. Sort them in ascending order.
  int n;
  cin >> n;

  vector <pair<int, int>> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i].first >> vec[i].second;
  }


  return 0;
}