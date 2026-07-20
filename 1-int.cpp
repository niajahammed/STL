#include <bits/stdc++.h>
using namespace std;



/*
  vector <int>
  push_back() -> O(1)
  pop_back() -> O(1)
  size() -> O(1)
  range-based loop
  vector initialization
  vector with size & without size
  vector.begin() -> O(1)
  vector.end() -> O(1)
  vector.back() -> O(1)
  sort/reverse
*/



int main () {
  // int n;

  // cout << "Enter array size : ";
  // cin >> n;

  // int arr[n];
  // for (int i = 0; i < n; i++) {
  //   cout << "Enter numbers : ";
  //   cin >> arr[i];
  // }

  // for (int i = n - 1; i >= 0; i--) {
  //   cout << arr[i] << " ";
  // }



  // input nite thakbo, jokhon -1 asbe tokhon input neya off korbo & baki number gula reverse print korbo :
  // eikhetre vector use korbo. vector onekta array er motoi kaj kore. notun ekta element rakhte chaile size boro kore ney :
  // vector <int> vec;

  // while (true) {
  //   int x;
  //   cin >> x;
  //   if (x == -1) break;

  //   // notun element push korte chaile :
  //   vec.push_back(x);
  //   cout << "Size : " << vec.size();
  // }

  // // ekhon vector er moddhe koyta digit ache ba size ache tar jonno :
  // int n = vec.size();

  // for (int i = 0; i < n; i++) {
  //   cout << vec[i] << " ";
  // }



  // size soho vector :
  // int n;
  // cin >> n;
  // vector <int> vec(n);

  // for (int i = 0; i < vec.size(); i++) {
  //   cin >> vec[i];
  // }

  // // vector er last theke delete kora :
  // vec.pop_back();

  // for (int i = 0; i < vec.size(); i++) {
  //   cout << vec[i] << " ";
  // }



  // range-based loop :
  // int n;
  // cin >> n;
  // vector <int> vec(n, 100);

  // for (auto x : vec) {
  //   cout << x << endl;
  // }



  // int n;
  // cin >> n;
  // vector <int> v;
  // int x;
  // for (int i = 0; i < n; i++) {
  //   cin >> x;
  //   v.push_back(x);
  // }

  // cout << "===Output===" << endl;

  // // vector er address er jonno - .begin() 0 index er address dey, .end() last index er porer block er address dey :
  // sort(v.begin(), v.end());

  // for (auto x : v) {
  //   cout << x << endl;
  // }



  // vector er majher kichu digit sort korte chaile :
  // vector <int> vec = {6, 7, -8, 34, 3, 67, 100};
  // sort(vec.begin() + 1, vec.begin() + 5);
  // int x;
  // cout << "Output" << endl;
  // for (auto x : vec) {
  //   cout << x << endl;
  // }



  //  Last index element :
  // vector <int> vec = {6, 7, 8, -10, 100};
  // cout << "Last element : " << vec[vec.size() - 1] << endl;

  // Alternative :
  // cout << "Last element = " << vec.back() << endl;



  // vector inside vector :
  // vector < vector <int> > vec = {
  //   {1, 2, 3, 4},
  //   {5, 6, 7, 8},
  //   {9, 10, 11, 12}
  // };

  // for (auto v : vec) {
  //   for (auto x : v) {
  //     cout << x << " ";
  //   } cout << endl;
  // }

  // Alternative :
  // for (int i = 0; i < vec.size(); i++) {
  //   for (int j = 0; j < vec[i].size(); j++) {
  //     cout << vec[i][j] << " ";
  //   }
  //   cout << endl;
  // }



  // Double :
  // vector <double> vec = {1, 2.3, 4, 6.5};
  // for (auto x : vec) {
  //   cout << x << endl;
  // }



  // Nested double vector :
  // vector < vector <double> > vec = {
  //   {1, 2.3, 3.4, 4},
  //   {5, 4.1, 6.7, 9.0},
  //   {2, 2.1, 7.6, 9.1},
  //   {4.3, 5.4, 8.5, 10.0}
  // };
  // for (auto v : vec) {
  //   for (auto x : v) {
  //     cout << x << " ";
  //   }
  //   cout << endl;
  // }



  // Nested vector input from user :
  // int n;
  // vector < vector <int> > vec;

  // cout << "Enter list size : ";
  // cin >> n;

  // for (int i = 0; i < n; i++) {
  //   int m;
  //   cout << "Enter vector size : ";
  //   cin >> m;
  //   vector <int> v;

  //   int x;
  //   for (int j= 0; j < m; j++) {
  //     cin >> x;
  //     v.push_back(x);
  //   }
  //   vec.push_back(v);
  // }

  // cout << "---- Output ----" << endl;

  // cout << "Size of vec : " << vec.size() << endl;

  // for (auto v : vec) {
  //   cout << "Size of v : " << v.size() << endl;
  //   for (auto x : v) {
  //     cout << x << " ";
  //   }
  //   cout << endl;
  // }



  // nested vector without initialize :
  vector < vector <int> > vec(3, vector <int> (4, 100));

  cout << "Size of vec : " << vec.size() << endl;
  for (auto v : vec) {
    cout << "Size of v : " << v.size() << endl;
    for (auto x : v) {
      cout << x << " ";
    }
    cout << endl;
  }



  return 0;
}