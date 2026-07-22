#include <bits/stdc++.h>
using namespace std;

// bool cmp (pair <int, int> x, pair <int, int> y) {
//   if (x.first == y.first) {
//     if (x.second > y.second) {
//       return true;
//     } else {
//       return false;
//     }
//   } else {
//     if (x.first < y.first) {
//       return true;
//     } else {
//       return false;
//     }
//   }
// }

/*
bool compare (pair <int, int> x, pair <int, int> y) {
  if (x.first == y.first) {
    if (x.second > y.second) {
      return true;
    } else {
      return false;
    }
  } else {
    if (x.first < y.first) {
      return true;
    } else {
      return false;
    }
  }
}
*/

/*
bool birthCmp (pair <pair <string, string>, int> x, pair <pair <string, string>, int> y) {
  if (x.first.second != y.first.second) {
    return x.first.second < y.first.second;
  } 
  if (x.first.first != y.first.first) {
    return x.first.first < y.first.first;
  }
  return x.second > y.second;
}
*/


int sum_of_digit (int num) {
  int ans = 0;

  while (num > 0) {
    int last_digit = num % 10;
    ans += last_digit;
    num /= 10;
  }

  return ans;
}

bool cmp (int x, int y) {
  if (sum_of_digit(x) < sum_of_digit(y)) {
    return true;
  } else {
    return false;
  }
}

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
  // int n;
  // cin >> n;

  // vector <pair<int, int>> vec(n);

  // for (int i = 0; i < n; i++) {
  //   cin >> vec[i].first >> vec[i].second;
  // }
  // sort(vec.begin(), vec.end());

  // cout << "---Output---" << endl;
  // for (int i = 0; i < n; i++) {
  //   cout << vec[i].first << " " << vec[i].second << endl;
  // }


  // Given n numbers of pairs. Sort them in descending order.
  // int n;
  // cin >> n;

  // vector <pair<int, int>> vec(n);

  // for (int i = 0; i < n; i++) {
  //   cin >> vec[i].first >> vec[i].second;
  // }
  // sort(vec.rbegin(), vec.rend());
  // sort(vec.begin(), vec.end(), greater<pair <int, int>>());

  // cout << "---Output---" << endl;
  // for (int i = 0; i < n; i++) {
  //   cout << vec[i].first << " " << vec[i].second << endl;
  // }



  // Given n numbers of pairs. Sort them in a way that the first column sort in ascending order and the second column sort in descending order.
  // int n;
  // cin >> n;

  // vector <pair <int, int>> vec(n);
  // for (int i = 0; i < n; i++) {
  //   cin >> vec[i].first >> vec[i].second;
  // }
  // sort(vec.begin(), vec.end(), cmp);

  // cout << "---Output---" << endl;
  // for (int i = 0; i < n; i++) {
  //   cout << vec[i].first << " " << vec[i].second << endl;
  // }




  // Problem 1 : Given n points in a two dimensional space, sort all the points in ascending order.
  // (x1, y1) > (x2, y2) if and only if (x1 > x2) or (x1 == x2 and y1 < y2)
  // Input :
  // The first line consists of an integer t, the number of test cases. Then for each test case the first line consists of an integer n, the number of points. Then the next n lines contains two integers xi, yi which represents the point.

  // Output :
  // For each test case print the sorted order of the points.

  // Input :
  // 1
  // 5
  // 3 4
  // -1 2
  // 5 -3
  // 3 3
  // -1 -2

  // Output :
  // -1 2
  // -1 -2
  // 3 4
  // 3 3
  // 5 -3
  // Solve :
  /*
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector <pair <int, int>> vec(n);
    for (int i = 0; i < n; i++) {
      cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end(), compare);

    cout << "---Output---" << endl;
    for (int i = 0; i < n; i++) {
      cout << vec[i].first << " " << vec[i].second << endl;
    }
  }
  */




  // Problem 2 : There are n people, each has a name, a surname and a year of birth. Sort them first lexicographically by surname, then by name. If there are several people with the same surname and name, then arrange them in descending order of their year of birth.
  // Input : 
  // 6
  // Mila Catron 1977
  // Ivan Mendel 1956
  // Mihail Egorov 1980
  // Eric Catron 1977
  // Mihail Egorov 1988
  // Petr Mendel 1990

  // Output :
  // Eric Catron 1977
  // Mila Catron 1977
  // Mihail Egorov 1988
  // Mihail Egorov 1980
  // Ivan Mendel 1956
  // Petr Mendel 1990
  // Solve :
  /*
  int n;
  cin >> n;

  vector <pair <pair <string, string>, int>> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i].first.first >> vec[i].first.second >> vec[i].second;
  }
  sort(vec.begin(), vec.end(), birthCmp);

  cout << "---Output---" << endl;
  for (int i = 0; i < n; i++) {
    cout << vec[i].first.first << " " << vec[i].first.second << " " << vec[i].second << endl;
  }
  */




  // Problem 3 : Indian summer is such a beautiful time of the year! A girl named Alyona is walking in the forest and picking a bouqet from fallen leaves. Alyona is very choosy - she doesn't take a leaf if it matches the color and the species of the tree of one of the leaves she already has. Find out how many leaves Alyona has picked.
  // Input :
  // 5
  // birch yellow
  // maple red
  // birch yellow
  // maple yellow
  // maple green

  // Output :
  // 4

  // Input :
  // 3
  // oak yellow
  // oak yellow
  // oak yellow

  // Output :
  // 1
  // Solve :
  /*
  int n;
  cin >> n;

  vector <pair <string, string>> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i].first >> vec[i].second;
  }
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());

  // for (int i = 0; i < vec.size(); i++) {
  //   cout << vec[i].first << " " << vec[i].second << endl;
  // }
  cout << vec.size() << endl;
  */




  // Problem 4 : Given n numbers. Sort them depending on their sum of digits.
  // Solve :
  int n;
  cin >> n;

  vector <int> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  sort(vec.begin(), vec.end(), cmp);

  for (int i = 0; i < n; i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  

  return 0;
}