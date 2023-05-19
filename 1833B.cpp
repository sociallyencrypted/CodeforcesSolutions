#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortSecondArray(vector<int>& arr1, vector<int>& arr2) {

    //make pairs of first array and indices
    vector<pair<int, int>> pairs;
    for (int i = 0; i < arr1.size(); i++) {
        pairs.push_back(make_pair(arr1[i], i));
    }
    // sort first and second array, then arrange second array according to initial positions of elements in first array
    sort(pairs.begin(), pairs.end());
    sort(arr2.begin(), arr2.end());
    // make copy of second array
    vector<int> arr2Copy = arr2;
    for (int i = 0; i < pairs.size(); i++) {
        arr2[pairs[i].second] = arr2Copy[i];
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // sort all b_i so that |a_i-b_i| is minimized
        sortSecondArray(a, b);

        // print b
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
