#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    vector <int> twoSum(vector<int>& nums, int target){ // for {1, 2, 3, 4, 6} and 9
        // two inputs : the array and the target
         // take s up time complexity n rather than the n2 in the looping one..
        vector <int> ans;
        unordered_map<int, int> mpp; // hash map taking two inputs

        for(int i = 0; i < nums.size(); i++){
            if (mpp.find(target - nums[i]) != mpp.end()){ // questions states that no value should be taken twice !!!!
                // that thing will never point at the end of the hash table. 
                ans.pushback(i); // gets index of the number;
                ans.pushback(mpp[target-nums[i]]); // gets index of the original moving pointer
                return ans;
            }
            mpp[nums[i]] = i; // stores the current index of the number in the hash
            // the hash created which contains the all elements and their required indices.
            // also the elements match up later in the pointer-chase.
        }
        return ans; // returns an empty vector 
    }
};