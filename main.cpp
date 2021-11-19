#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

  vector<int> resultsOfHashes;
  for (int i = 1; i <= 26; i++) {
    for (int j = 1; j <= 26; j++) {
      for (int k = 1; k <= 26; k++) {
        resultsOfHashes.push_back((i + j + k) % 10);
      }
    }
  }

  map<int, int> frequencies;
  for (int i = 0; i <= 9; i++) {
    frequencies.insert({i, 0});
  }

  for (int result : resultsOfHashes) {
    frequencies.at(result)++;
  }

  cout << "\n";
  for (const auto& pair : frequencies) {
    cout << pair.first << " occurred " << pair.second << " times\n";
  }
  cout << "\n";

}