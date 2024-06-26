#ifndef __COMMON_HPP__
#define __COMMON_HPP__

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

namespace common {
    int n;
    void read();
    inline ll calc_score();
};

void common::read() {
    cin >> n;
    // do something
}

inline ll common::calc_score() {
    ll score = 0;
    // do something
    return score;
}

#endif