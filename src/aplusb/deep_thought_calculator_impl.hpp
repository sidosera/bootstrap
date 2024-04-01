#pragma once

#include "deep_thought_calculator.hpp"

namespace galaxy {

class DeepThoughtCalculatorImpl: public DeepThoughtCalculator {
public:
    uint32_t calculate() override {
        return 42;
    };
};

} // namespace galaxy
