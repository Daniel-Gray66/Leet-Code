//#include "solution.hpp"

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> merlin; 

    for (int i = 0; i < 10; i++)
    {
        merlin.push_back(i);

    }

    cout << "old vector " << endl;
    for (int i = 0; i < merlin.size(); i++)
    {
        cout << merlin[i] << " ";

    }
    cout << endl;


    int target = 0; 
    for (int i = 0; i < merlin.size(); i++)
    {
        if (merlin.at(i) == target)
        {
            merlin.erase(merlin.begin() + i);
        }

    }

    cout << "New vector " << endl;
    for (int i = 0; i < merlin.size(); i++)
    {
        cout << merlin[i] << " ";

    }






}
