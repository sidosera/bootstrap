#pragma once

#include <random>
#include "deep_thought_calculator.hpp"

namespace galaxy {

class DeepThoughtCalculatorAdvanced: public DeepThoughtCalculator {
public:
    explicit DeepThoughtCalculatorAdvanced(std::default_random_engine& random_engine)
    : random_engine_(random_engine){};

    uint32_t calculate() override {
         std::uniform_int_distribution<uint32_t> dist(0, 1024);
         return dist(random_engine_);
    };
private:
    std::default_random_engine& random_engine_;
};

} // namespace galaxy
