#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> odd; //3
    vector<int> even;//4

    for (int i = 0; i < k; ++i) {
        int t;
        cin >> t;

        if (t % 2 == 0) {
            even.push_back(t);
        } else {
            odd.push_back(t);
        }
    }

    for (auto i : odd) {
        cout << i << " ";
    } 
    cout << "\n";
    for (auto i : even) {
        cout << i << " ";
    }
    cout << "\n";
    
    if (odd.size() <= even.size()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}