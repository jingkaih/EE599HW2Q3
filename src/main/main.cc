#include <iostream>
#include "src/lib/solution.h"
#include <vector>

int main()
{
    Solution solution ;
    std::vector<int> v = {1,4,1,2,4,6,6};
    std::vector<int> vv = {1,4,1,2,4,6,6};
    std::vector<int> vvv = {1,4,1,2,4,6,6};
    std::vector<int> vvvv = {1,1,5,1,3,5,7,1,2,4,6,5,1,6};
    std::vector<int> v1 = {1,2,3}, v2 = {3,2,1};
    std::vector<int> vv1 = {1,2,3,6}, vv2 = {2,4,6};

    solution.RemoveDuplicates(v);
    for(auto x : v)
    {
        std::cout << x;
    }
    std::cout << std::endl;

    solution.RemoveDuplicatesUsingSet(vv);
    for(auto x : vv)
    {
        std::cout << x;
    }
    std::cout << std::endl;

    solution.VectorReversed(vvv);
    for(auto x : vvv)
    {
        std::cout << x;
    }
    std::cout << std::endl;

    solution.RemoveOdds(vvvv);
    for(auto x : vvvv)
    {
        std::cout << x;
    }
    std::cout << std::endl;

    std::vector<int> v_cat = solution.Concatenating(v1,v2);
    for(auto x : v_cat)
    {
        std::cout << x;
    }
    std::cout << std::endl;

    std::vector<int> v_union = solution.Union(vv1,vv2);
    for(auto x : v_union)
    {
        std::cout << x;
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}