#include <bits/stdc++.h>
using namespace std;

int main () {
  // maximum no. of students in a class 100
  // total class 12
  // int arr[13][101];  // 1 base indexing.



  // 1. Given an array A to N integers, classify it as being Good, Bad or Average. It is called Good, if it contains exactly X distinct integers. Bad if it contains less than X distinct integers and Average if it contains more than X distinct integers.
  /* Input format :
      First line consists of a single integer T denoting the number of test cases.
      First line of each test case consists of two space separated integers denoting N and K.
      Second line of each test case consists of N separated integers denoting the array elements.

    Output format :
      Print the required answer for each test case on a new line.

    Constaints :
      1 <= T <= 50
      1 <= X, N <= 13000
      1 <= A[i] <= 10^9
  */
  // Solve :
  /*
  int T;
  cout << "Enter number of test case : ";
  cin >> T;

  while (T--) {
    int n, x;
    cout << "Enter size : ";
    cin >> n;

    cout << "Enter number of distinct integer : ";
    cin >> x;

    vector <int> vec;

    int inp;

    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);
    }
    sort(vec.begin(), vec.end());

    vector <int> uniqVec;
    for (int i = 0; i < n; i++) {
      if (uniqVec.size() > 0 && uniqVec.back() == vec[i]) {
        // do nothing
      } else {
        uniqVec.push_back(vec[i]);
      }
    }
    if (uniqVec.size() == x) cout << "Good" << endl;
    else if (uniqVec.size() > x) cout << "Average" << endl;
    else cout << "Bad" << endl;
  }
  */

  // Alternative :
  /*
  int T;
  cout << "Enter number of test case : ";
  cin >> T;

  while (T--) {
    int n, x;
    cout << "Enter size : ";
    cin >> n;

    cout << "Enter number of distinct integer : ";
    cin >> x;

    vector <int> vec;

    int inp;

    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);
    }
    sort(vec.begin(), vec.end());

    int count = 0;
    int lastElement = 0;
    for (int i = 0; i < n; i++) {
      if (count > 0 && lastElement == vec[i]) {
        // do nothing
      } else {
        count++;
        lastElement = vec[i];
      }
    }
    if (count == x) cout << "Good" << endl;
    else if (count > x) cout << "Average" << endl;
    else cout << "Bad" << endl;
  }
  */



  // 1. Distinct Elements Count. The Concept: You are given an array of N integers and a target number K. You need to determine if the number of unique elements in the array is exactly K, less than K, or greater than K.Why it’s similar: This is virtually identical to your problem, just with different label names (e.g., "Perfect", "Under", "Over" instead of "Good", "Bad", "Average"). It’s great for practicing the core logic of using a Hash Set.
  // Solve :
  /*
  int N;
  cout << "Enter array size : ";
  cin >> N;

  vector <int> vec;
  int inp;

  for (int i = 0; i < N; i++) {
    cin >> inp;
    vec.push_back(inp);
  }
  sort (vec.begin(), vec.end());

  int K;
  cout << "Enter target : ";
  cin >> K;

  int uniq_count = 0;
  if (N > 0) {
    uniq_count = 1;
  }

  for (int i = 1; i < N; i++) {
    if (vec[i] != vec[i - 1]) {
      uniq_count++;
    }
  }

  if (uniq_count == K) {
    cout << "Perfect" << endl;
  } else if (uniq_count < K) {
    cout << "Under" << endl;
  } else {
    cout << "Over" << endl;
  }
  */




  // "Chef and Elements" (Common Beginner Platform Variety). The Concept: Given an array of N ingredients (represented by integers), Chef can only make a special dish if the number of distinct ingredients is at least X. If it's less than X, he fails.Input Format: * First line: T (test cases).Each test case: N and X, followed by the array of N integers.Why it’s similar: It uses the exact same input structure and requires counting unique elements, but condenses the output into a binary choice (Success/Failure) instead of three categories.
  // Solve :
  /*
  int T;
  cout << "Enter number of test case : ";
  cin >> T;

  while (T--) {
    int N, X;
    cout << "Enter ingrediants : ";
    cin >> N;

    vector <int> vec;
    int inp;
    for (int i = 0; i < N; i++) {
      cin >> inp;
      vec.push_back(inp);
    }
    sort(vec.begin(), vec.end());

    cout << "Enter number of target ingrediants : ";
    cin >> X;

    int uniq_count = 0;
    if (N > 0) {
      uniq_count = 1;
    }

    for (int i = 1; i < N; i++) {
      if (vec[i] != vec[i - 1]) {
        uniq_count++;
      }
    }

    if (uniq_count >= X) {
      cout << "Success" << endl;
    } else {
      cout << "Failure" << endl;
    }
    }
    */





    // 3. "The Duplicate Finder". The Concept: You are given an array of size N. You need to find out if removing all duplicate elements reduces the size of the array by exactly D elements.Why it’s similar: Instead of comparing the distinct count to a threshold, you are comparing the number of duplicates (N - \text{distinct count}$) to a threshold. The underlying data structure solution (HashSet/Frequency Map) remains exactly the same.
    // Solve :
    /*
    int T;
    cout << "Enter test case : ";
    cin >> T;

    while (T--) {
      int N;
      cout << "Enter array size : ";
      cin >> N;

      vector <int> vec;
      int inp;
      for (int i = 0; i < N; i++) {
        cin >> inp;
        vec.push_back(inp);
      }
      sort(vec.begin(), vec.end());

      int D;
      cout << "Enter duplicate : ";
      cin >> D;

      int uniq_count = 0;
      if (N > 0) {
        uniq_count = 1;
      }

      for (int i = 1; i < N; i++) {
        if (vec[i] != vec[i - 1]) {
          uniq_count++;
        }
      }

      int duplicate_removed = N - uniq_count;

      if (duplicate_removed == D) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
    */





    // 2. Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card : either the leftmost card in a row or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

    // Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his moves.

    // Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

    // Input : The first line contains integers n (1 <= n <= 1000) - the number of cards on the table. The second line contains space-separated numbers on the cards from the left to right. The numbers on the card are distinct integers from 1 to 1000.

    // Output : On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, the second number is the number of Dima's points at the end of the game.

    // Input :
    // 4
    // 4 1 2 10
    // Output :
    // 12 5

    // Input :
    // 7
    // 1 2 3 4 5 6 7
    // Output :
    // 16 12

    // Solve :
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> cards;
    int x;
    for (int i = 0; i < n; i++) {
      cin >> x;
      cards.push_back(x);
    }

    int firstIndex = 0, lastIndex = n - 1;
    int serejaScore = 0, dimaScore = 0;
    int move = 0;
    */
    /*
      move == 0 means sereja playing
      move == 1 means dima playing
    */

    /*
    while (lastIndex - firstIndex + 1 != 0) {
      // Play the game :
      if (move == 0) {
        if (cards[firstIndex] > cards[lastIndex]) {
          serejaScore += cards[firstIndex];
          firstIndex++;
        } else {
          serejaScore += cards[lastIndex];
          lastIndex--;
        }
        move = 1;
      } else {
        if (cards[firstIndex] > cards[lastIndex]) {
          dimaScore += cards[firstIndex];
          firstIndex++;
        } else {
          dimaScore += cards[lastIndex];
          lastIndex--;
        }
        move = 0;
      }
    }

    cout << "Sereja : " << serejaScore << ". Dima : " << dimaScore << endl;
    */






    // "Valid Palindrome" (with a twist) or "Two Sum II"

    // The Concept: Given a sorted array of integers, find two numbers such that they add up to a specific target number.

    // Why it’s similar: You place one pointer at the start and one at the end. If the sum of the two elements is too large, you move the right pointer inward to decrease the sum. If it's too small, you move the left pointer inward to increase it.

    // The Pattern: It relies entirely on the mechanic of narrowing down a window from both ends simultaneously until the pointers meet in the middle (left > right), which is exactly how the card game ends.
    // Solve :
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> vec;
    int inp;
    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);
    }

    int target;
    cout << "Enter target : ";
    cin >> target;

    int left = 0;
    int right = n - 1;

    while (left < right) {
      int current_sum = vec[left] + vec[right];

      if (current_sum == target) {
        cout << left + 1 << " " << right + 1 << endl;
        return 0;
      } else if (current_sum < target) {
        left++;
      } else {
        right--;
      }
    }
    cout << -1 << endl;
    */






    // "Container With Most Water" (LeetCode 11). The Concept: You are given an array of N non-negative integers representing vertical lines where the width between each line is 1. You need to find two lines that, together with the x-axis, form a container that holds the most water.Why it’s similar: You solve this efficiently using two pointers: one starting at the very left (left = 0) and one at the very right (right = N - 1). In each step, you calculate the area, and then—similarly to the greedy choice in Sereja and Dima—you look at both ends and move the pointer that points to the shorter line inward.The Pattern: Instead of collecting points from the outer edges, you are shrinking your boundaries inward based on a conditional check of the outer boundaries.
    // Solve :
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> vec;
    int inp;
    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);
    }

    int left = 0;
    int right = n - 1;
    int max_water = 0;

    while (left < right) {
      int width = right - left;
      int height = min(vec[left], vec[right]);

      int current_water = width * height;
      max_water = max(max_water, current_water);

      if (vec[left] < vec[right]) {
        left++;
      } else {
        right--;
      }
    }
    cout << "Max water : " << max_water << endl;
    */




    // 3. A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
    // Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

    // Input : arr = [3, 5, 1]
    // Output : true
    // Explanation : we can reorder the elements as [1, 3, 5] or [5, 3, 1] with differences 2 and -2.

    // Input : arr = [1, 2, 4]
    // Output : false
    // Explanation : there is no way to reorder the elements to obtain an arithmetic progression.
    // Solve :
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> vec;
    int inp;
    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);
    }
    sort(vec.begin(), vec.end());

    if (n <= 2) {
      cout << "True" << endl;
      return 0;
    }

    int diff = vec[1] - vec[0];
    bool is_ap = true;

    for (int i = 2; i < n; i++) {
      if (vec[i] - vec[i - 1] != diff) {
        is_ap = false;
        break;
      }
    }

    if (is_ap) {
      cout << "True" << endl;
    } else {
      cout << "False" << endl;
    }
    */





    // "Can Make Geometric Progression" (The Direct Cousin). The Concept: Similar to your problem, you are given an array of numbers. You need to determine if the array can be rearranged to form a Geometric Progression (GP), meaning the ratio between any two consecutive elements is the same (e.g., [2, 6, 18] where frac{6}{2} = 3 and frac{18}{6} = 3).Why it’s similar: The approach is identical. You sort the array, find the common ratio using the first two elements (ratio = frac{A[1]}{A[0]}), and loop through the rest to verify if A[i] = A[i-1] \times ratio.The Twist: You have to handle division by zero carefully if the array contains zeros (e.g., [0, 0, 0]).
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> vec;
    int inp;
    int zero_count = 0;

    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);

      if (vec[inp] == 0) {
        zero_count++;
      }
    }

    sort(vec.begin(), vec.end());

    if (n <= 2) {
      cout << "True" << endl;
      return 0;
    }

    if (zero_count > 1 && zero_count != n) {
      cout << "False" << endl;
      return 0;
    }

    bool is_ap = true;
    for (int i = 2; i < n; i++) {
      if (vec[i] * vec[i - 2] != vec[i - 1] * vec[i - 1]) {
        is_ap = false;
        break;
      }
    }

    if (is_ap) {
      cout << "True" << endl;
    } else {
      cout << "False" << endl;
    }
    */






    // "Minimum Absolute Difference". The Concept: Given an array of distinct integers, find all pairs of elements with the minimum absolute difference between any two elements.Why it’s similar: Just like finding the common difference (diff) in an Arithmetic Progression, you find the minimum difference by sorting the array first. Once sorted, the minimum absolute difference can only exist between adjacent elements (A[i] - A[i-1]).The Pattern: It reinforces the rule that consecutive element differences are best analyzed right after a sort() operation.
    // input : [4, 2, 1, 3]
    // after sorting : [1, 2, 3, 4]
    // output : [1, 2], [2, 3], [3, 4]
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> vec;
    int inp;
    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);
    }

    sort(vec.begin(), vec.end());
    int min_diff = INT_MAX;

    for (int i = 1; i < n; i++) {
      min_diff = min(min_diff, vec[i] - vec[i - 1]);
    }

    cout << "Pairs with minimum absolute difference : " << endl;

    for (int i = 1; i < n; i++) {
      if (vec[i] - vec[i - 1] == min_diff) {
        cout << "[" << vec[i - 1] << ", " << vec[i] << "]";
      }
    }
    cout << endl;
    */






    // Check if Array is Good". The Concept: Given an array of integers, check if it is a permutation of an arithmetic sequence that strictly starts at 1 and increases by 1 each time, but the maximum number n appears exactly twice (e.g., base array of size n+1 looks like [1, 2, 3, ..., n-1, n, n]).Why it’s similar: It asks you to validate a very strict geometric/arithmetic structural rule after sorting the vector. If you sort it, the elements must match their index position (A[i] == i + 1) perfectly until the very end.
    // input :  [1, 3, 3, 2], size = 4
    // after sorting : [1, 2, 3, 3]
    // output : true
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> vec;
    int inp;
    for (int i = 0; i < n; i++) {
      cin >> inp;
      vec.push_back(inp);
    }

    sort(vec.begin(), vec.end());

    int x = vec.size();

    bool isPermu = true;

    if (x < 2) {
      isPermu = false;
    }

    else if (vec[x - 1] != x - 1 || vec[x - 1] != vec[x - 2]) {
      isPermu = false;
    }

    if (isPermu) {
      for (int i = 0; i < x - 1; i++) {
        if (vec[i] != i + 1) {
          isPermu = false;
          break;
        }
      }
    }

    if (isPermu) {
      cout << "true (Array is good)" << endl;
    } else {
      cout << "false (Array is not good)" << endl;
    }
    */





    // 4. You are given an integer mountain arr of length n where the values increase to a peak element and then decrease. Return the index of the peak element.
    // Your task is to solve it in O(log(n)) time conplexity.

    /*
      Example 1 :
      Input: arr = [0, 1, 0]
      Output: 1

      Example 2 :
      Input: arr = [0, 2, 1, 0]
      Output: 1

      Example 3 :
      Input: arr = [0, 15, 5, 2]
      Output: 1
    */
    // Solve :
    /*
    int N;
    cout << "Enter size : ";
    cin >> N;

    vector <int> vec;
    int inp;
    for (int i = 0; i < N; i++) {
      cin >> inp;
      vec.push_back(inp);
    }

    int peak_element = vec[0];
    int index;

    for (int i = 0; i < N; i++) {
      if (vec[i] > peak_element) {
        peak_element = vec[i];
        index = i;
      }
    }

    cout << "Index of peak element : " << index << endl;
    */





    // Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    // You may assume that each input would have exactly one solution, and you may not use the same element twice.

    // You can return the answer in any order.

    /*
      Example 1:

      Input: nums = [2,7,11,15], target = 9
      Output: [0,1]
      Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

      Example 2:

      Input: nums = [3,2,4], target = 6
      Output: [1,2]

      Example 3:

      Input: nums = [3,3], target = 6
      Output: [0,1]
    */
    // Solve :
    /*
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector <int> nums;
    int inp;
    for (int i = 0; i < n; i++) {
      cin >> inp;
      nums.push_back(inp);
    }

    int target;
    cout << "Enter target : ";
    cin >> target;

    vector <pair<int, int>> vec;
    for (int i = 0; i < n; i++) {
      vec.push_back({nums[i], i});
    }

    sort(vec.begin(), vec.end());

    int left = 0, right = n - 1;
    int index1 = -1, index2 = -1;

    while (left < right) {
      int sum = vec[left].first + vec[right].first;

      if (sum == target) {
        index1 = vec[left].second;
        index2 = vec[right].second;
        break;
      } else if (sum < target) {
        left++;
      } else {
        right--;
      }
    }
    if (index1 != -1 && index2 != -1) {
      cout << "[" << index1 << ", " << index2 << "]" << endl;
    } else {
      cout << "No two numbers is the target" << endl;
    }
    */





    // Given an array of integers nums and an integer target, return indices+1 of the two numbers such that they add up to target.

    // You may assume that each input would have exactly one solution, and you may not use the same element twice.

    // You can return the answer in any order.

    /*
      Example 1:

      Input: nums = [2,7,11,15], target = 9
      Output: [1,2]
      Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

      Example 2:

      Input: nums = [3,2,4], target = 6
      Output: [2,3]

      Example 3:

      Input: nums = [3,3], target = 6
      Output: [1,2]
    */
    


  return 0;
}