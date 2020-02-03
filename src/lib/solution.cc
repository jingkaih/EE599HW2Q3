#include "solution.h"
//function1 for question1
void Solution::RemoveDuplicates(std::vector<int> &vect)
{

  for(int n = 0; n < vect.size(); ++n)//select a element vect[n] and check if there are duplicates after him
  {
    std::vector<int> temp;//declare temp vector to store non-duplicates in this round
    for(int j = 0; j <= n; ++j)
    {
      temp.push_back(vect[j]);//store the element we are processing now, and the previous elements that have been processed
    }
    for(int i = n + 1; i < vect.size(); ++i) 
    {
      if(vect[n] != vect[i])
      {
        temp.push_back(vect[i]);//store every elements that are not as same as vect[n], in another words, remove the duplicates
      }
    }
    /*By far we got a temp which consists of 2 parts*/
    vect = temp;
  }
}
//function2 for question1
void Solution::RemoveDuplicatesUsingSet(std::vector<int> &vect)
{
  std::set<int> s;
  for(auto &x : vect)
  {
    s.insert(x);
  }
  vect = {};
  for(auto &y : s)
  {
    vect.push_back(y);
  }
}
//function3 for question2
void Solution::VectorReversed(std::vector<int> &vect)
{
  std::reverse(vect.begin(),vect.end());
}
//function4 for question3
void Solution::RemoveOdds(std::vector<int> &vect)
{
  std::vector<int> results;
  std::vector<int>::iterator it = vect.begin();
  for(; it != vect.end(); ++it)
  {
    if(*it % 2 == 0)
    {
      results.push_back(*it);
    }
  }
  vect = results;
}
//function5 for question4
std::vector<int> Solution::Concatenating(const std::vector<int> &vect1, const std::vector<int> &vect2)
{
  std::vector<int> vect;
  vect.insert(vect.begin(),vect1.begin(),vect1.end());
  vect.insert(vect.end(),vect2.begin(),vect2.end());
  return vect;
}
//function6 for question5
std::vector<int> Solution::Union(const std::vector<int> &vect1, const std::vector<int> &vect2)
{
  std::vector<int> results;
  for(auto n : vect1)
  {
    for(auto m : vect2)
    {
      if(n == m)
      results.push_back(n);
    }
  }
  return results;
}