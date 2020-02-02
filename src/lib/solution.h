#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <algorithm>
class Solution {
public:
  void RemoveDuplicates(std::vector<int> &vect);
  void RemoveDuplicatesUsingSet(std::vector<int> &vect);
  void VectorReversed(std::vector<int> &vect);
  void RemoveOdds(std::vector<int> &vect);
  std::vector<int> Concatenating(const std::vector<int> &vect1, const std::vector<int> &vect2);
  std::vector<int> Union(const std::vector<int> &vect1, const std::vector<int> &vect2);
};

#endif