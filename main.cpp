#include "solution.hpp"

using namespace std;

int main(){
    Solution solution;
    vector<int> nums={1,2,3,1};
    int output=solution.rob(nums);
    cout<<"ANSWER ONE= "<<output<<endl;
    return 0;
}