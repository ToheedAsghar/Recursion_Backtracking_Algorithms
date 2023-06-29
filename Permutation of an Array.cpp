// Permutation of an Array
// Toheed Asghar

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int> v);
void dfs(vector<int> v, vector<int> temp);

int main() {
  vector<int> v = {1, 2, 3};
  dfs(v);
  return 0;
}

void dfs(vector<int> v) {
  vector<int> perm;
  dfs(v, perm);
}

void dfs(vector<int> v, vector<int> perm) {
  if (perm.size() == v.size()) {
    for (int i : perm) {
      cout << i;
    }
    cout << endl;
  }

  for (int i = 0; i < v.size(); i++) {
    int t = v.at(i);
    if (find(perm.begin(), perm.end(), t) == perm.end()) {
      perm.push_back(t);
      dfs(v, perm);
      perm.pop_back();
    }
  }
}
