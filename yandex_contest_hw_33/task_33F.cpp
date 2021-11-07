//
// Created by Felix Isaakyan on 24.10.2021.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main33F() {
    vector<string> witness_testimony;
    vector<string> suspect_plates;
    vector<vector<char>> witness_testimony_char;
    vector<pair<string, int>> res_pair;
    vector<string> res_vec;

    string testimony, plate;

    int m, n;

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> testimony;
        witness_testimony.push_back(testimony);
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> plate;
        suspect_plates.push_back(plate);
    }

    for (string j: witness_testimony) {
        vector<char> data(j.begin(), j.end());
        witness_testimony_char.push_back(data);
    }

    for (string p: suspect_plates) {
        int cnt = 0;
        for (auto i: witness_testimony_char) {
            for (char j: i) {
                if (p.find(j) !=string::npos) {
                    cnt ++;
                }
            }
        }
        res_pair.push_back(make_pair(p, cnt));
    }

    auto max_res1 = max_element(res_pair.begin(),
                               res_pair.end(),
                               [](const auto& lhs, const auto& rhs) { return lhs.second < rhs.second; });
    auto max_res2 = *max_element(res_pair.begin(), res_pair.end());

    res_vec.push_back(max_res1->first);
    res_vec.push_back(max_res2.first);

    sort(res_vec.begin(), res_vec.end());
    res_vec.erase( unique(res_vec.begin(), res_vec.end() ), res_vec.end() );

    for (string j: res_vec) {
        cout << j << "\n";
    }
}