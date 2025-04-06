#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_max_element_index(vector<int> v) {
    int max_index = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[max_index] < v[i]) {
            max_index = i;
        }
    }
    return max_index;
}

int find_min_element_index(vector<int> v) {
    int min_index = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[min_index] > v[i]) {
            min_index = i;
        }
    }
    return min_index;
}

int main() {
    int k;
    cin >> k;

    vector<int> v(k);
    for (int i = 0; i < k; ++i) {
        cin >> v[i];
    }

    int positive_sum = 0;
    for (int i = 0; i < k; ++i) {
        positive_sum += v[i] > 0 ? v[i] : 0;
    }

    int min_element_index = find_min_element_index(v);
    int max_element_index = find_max_element_index(v);

    int l = min(min_element_index, max_element_index);
    int r = max(min_element_index, max_element_index);

    int sum_range = 1;
    for (int i = l + 1; i < r; ++i) {
        sum_range *= v[i];
    }

    cout << positive_sum << " " << sum_range << "\n";
}