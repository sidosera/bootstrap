#pragma once

#include "deep_thought_calculator.hpp"

namespace galaxy {

class DeepThoughtCalculatorBasic: public DeepThoughtCalculator {
public:
    uint32_t calculate();
};

} // namespace galaxy
