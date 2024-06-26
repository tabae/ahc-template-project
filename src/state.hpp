#ifndef __STATE_HPP__
#define __STATE_HPP__

#include "common.hpp"
#include "ryuka.hpp"
#include <numeric>
#include <algorithm>
#include <cassert>

using namespace std;
using namespace common;

extern RandGenerator ryuka;

struct State {
    static constexpr long long inf = 1LL<<60;
    long long score;
    State() : score(-inf) {};
    long long calc_score();
    void print();
    static State initState();
    static State generateState(const State& input_state);
};

long long State::calc_score() {
    score = common::calc_score();
    return score;
}

void State::print() {
    // do something
}

State State::initState() {
    State res;
    // do something
    res.calc_score();
    return res;
}

State State::generateState(const State& input_state) {
    State res = input_state;
    // do something
    res.calc_score();
    return res;
}

#endif
