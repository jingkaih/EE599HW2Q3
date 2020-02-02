#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(RemoveDuplicates, ShouldWork) {
  Solution solution;
  std::vector<int> vect = {1,4,1,2,4,6,6};
  solution.RemoveDuplicates(vect);
  std::vector<int> expected = {1,4,2,6};
  EXPECT_EQ(expected, vect);
}
TEST(RemoveDuplicatesUsingSet, ShouldWork) {
  Solution solution;
  std::vector<int> vect = {1,4,1,2,4,6,6};
  solution.RemoveDuplicatesUsingSet(vect);
  std::vector<int> expected = {1,2,4,6};
  EXPECT_EQ(expected, vect);
}
TEST(VectorRervese, ShouldWork) {
  Solution solution;
  std::vector<int> vect = {1,4,1,2,4,6,6};
  solution.VectorReversed(vect);
  std::vector<int> expected = {6,6,4,2,1,1};
  EXPECT_EQ(expected, vect);
}
TEST(RemoveOdds, ShouldWork) {
  Solution solution;
  std::vector<int> vect = {1,1,5,1,3,5,7,1,2,4,6,5,1,6};
  solution.RemoveOdds(vect);
  std::vector<int> expected = {2,4,6,6};
  EXPECT_EQ(expected, vect);
}
TEST(Concatenating, ShouldWork) {
  Solution solution;
  std::vector<int> vect1 = {1,2,3}, vect2 = {3,2,1};
  std::vector<int> actual = solution.Concatenating(vect1, vect2);
  std::vector<int> expected = {1,2,3,3,2,1};
  EXPECT_EQ(expected, actual);
}
TEST(Union, ShouldWork) {
  Solution solution;
  std::vector<int> vect1 = {1,2,3,6}, vect2 = {2,4,6};
  std::vector<int> actual = solution.Union(vect1, vect2);
  std::vector<int> expected = {2,6};
  EXPECT_EQ(expected, actual);
}