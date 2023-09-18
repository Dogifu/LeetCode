#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {

    unsigned int lenght = nums.size();

    for(unsigned int i = 0; i < lenght; i++)
    {
        nums.push_back(nums[i]);
    }
    return nums;
}

int main() {

    vector<int> mas_1 {1 ,2, 1};
    getConcatenation(mas_1);
    for (int i : mas_1)
    {
        cout << i << " ";
    }

}
