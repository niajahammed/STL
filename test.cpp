#include <bits/stdc++.h>
using namespace std;

int main () {
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
  


  return 0;
}