#include <bits/stdc++.h>
using namespace std;

int main () {
  // Take 2 students name and marks as input. Print the name and marks first whose marks is greater than the other.
  string name1, name2;
  int mark1, mark2;

  cin >> name1 >> mark1;
  cin >> name2 >> mark2;

  if (mark1 > mark2) {
    cout << "Name : " << name1 << ", Mark : " << mark1 << endl;
    cout << "Name : " << name2 << ", Mark : " << mark2 << endl;
  } else {
    cout << "Name : " << name2 << ", Mark : " << mark2 << endl;
    cout << "Name : " << name1 << ", Mark : " << mark1 << endl;
  }


  return 0;
}