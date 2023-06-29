// String Permutations - Unique
// Toheed Asghar

#include <iostream>
using namespace std;

// using concepts of wrapping functions
void dfs(string str);
void dfs(string str, string permutation);

int main() {
  string str = "abcd";
  dfs(str);
}

void dfs(string str) {
  dfs(str, " ");
  return;
}

void dfs(string str, string permutation) {
  if (str.size() == 0) {
    cout << permutation << endl;
  }

  for (int i = 0; i < str.size(); i++) {
    string temp = str;
    temp.erase(temp.begin() + i);
    dfs(temp, permutation + str.at(i));
  }
}