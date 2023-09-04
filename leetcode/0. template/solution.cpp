#include "../../common/common-utils.cpp"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

class Solution {
public:
  int uniquePaths(int m, int n) {
    int result = 0;
    return result;
  }
};

int main(int argc, char *argv[]) {
  std::vector<std::string> inputLines = readLinesFromFile("input.txt");

  // Read the number of cases from the first line
  int numCases = std::stoi(inputLines[0]);
  std::ofstream actualOutputFile = clearAndOpenFile("actual.txt");

  // Start from the second line
  for (int i = 1; i <= numCases; ++i) {
    std::string input = inputLines[i];
    std::istringstream iss(input);
    int m, n;

    if (!(iss >> m >> n)) {
      std::cerr << "Failed to parse numbers from: " << input << std::endl;
      continue; // Skip this line and proceed to the next
    }

    Solution solution;
    int result = solution.uniquePaths(m, n);

    actualOutputFile << result << "\n";
  }

  actualOutputFile.close();

  return 0;
}
