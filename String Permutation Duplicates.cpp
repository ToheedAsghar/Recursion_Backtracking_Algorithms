// String Permutation Duplicates
// Toheed Asghar

#include <algorithm>
#include <iostream>
using namespace std;

void dfs(string input);
void dfs(string input, string permutation);

int main() {
  string input = "aaaab";
  sort(input.begin(), input.end());
  dfs(input);
  return 0;
}

void dfs(string input) { dfs(input, ""); }
void dfs(string input, string permutation) {
  if (input.size() == 0) {
    cout << permutation << endl;
  }

  string check = "";

  for (int i = 0; i < input.size(); i++) {
    char ch = input.at(i);
    if (check.find(ch) == std::string::npos) {
      string temp = input;
      temp.erase(temp.begin() + i);
      dfs(temp, permutation + input.at(i));
    }
    check.push_back(ch);
  }
}