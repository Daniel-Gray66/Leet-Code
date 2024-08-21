#include <string>
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> sol;
        vector<int> out;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
            
                for (int k = 0; k < nums.size(); k++)
                {
                    if (nums.at(i) + nums.at(j) + nums.at(k) == 0 && i != j && i != k && j != k)
                    {
                 
                        out.push_back(i);
                        out.push_back(j);
                        out.push_back(k);

                        sol.push_back(out);

                        out.clear();

                    }


                }

            }

            
        }

        return sol;




    }
};