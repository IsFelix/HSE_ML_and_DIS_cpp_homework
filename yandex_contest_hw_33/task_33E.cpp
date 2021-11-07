//
// Created by Felix Isaakyan on 24.10.2021.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main33E() {
    string c_path;
    vector<string> all_paths;

    while(cin >> c_path){
        if (c_path == "#") {
            break;
        }
        else {
            all_paths.push_back(c_path);
        }
    }

    for (string i: all_paths) {
        cout << i << "\n";
    }
}
