#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
class solution{
    public:
    vector <int> twoSum(vector<int>& nums, int target){ // solution needed in vector int 
        vector <int> ret; 
        int size = nums.size();
        for (int i = 0; i < size - 1; i++){
            for(int j = i + 1; j < size; j++){
                if (nums[i] + nums[j] == target){
                    ret.push_back(i); // certainly a vector thing (duh)
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
    }
};