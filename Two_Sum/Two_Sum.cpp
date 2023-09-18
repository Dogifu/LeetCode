#include <iostream>
#include <vector>
using namespace std;

int main() {

    int size, target;
    cout << "target = ";
    cin >> target;
    cout << "size_of_massive = ";
    cin >> size;
    vector<int> mas(size);

    for (int &ma: mas) {
        cin >> ma;
    }

    for (int i = 0; i < mas.size(); i++) {
        for (int j = i + 1; j < mas.size(); j++) {
            if ((mas[i] + mas[j]) == target)
            {
                cout << "We can get target as: "
                <<"[" << i << "]" << " + " << "[" << j << "]";
            }
        }
    }
}
