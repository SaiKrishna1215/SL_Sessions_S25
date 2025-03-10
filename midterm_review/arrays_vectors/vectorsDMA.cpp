#include <iostream>
#include <vector>

int main() {
    int size;
    cout << "Enter size of vector: ";
    cin >> size;

    int* std::vector<int> v(size);

    for (int i = 0; i < size; i++) {
        v[i] = i * 10;
    }

    v.push_back(100);
    v.push_back(200);

    // Print vector elements
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;  // No delete needed!
}
