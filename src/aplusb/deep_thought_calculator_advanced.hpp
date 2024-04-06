#pragma once

#include <random>
#include "deep_thought_calculator.hpp"

namespace galaxy {

class DeepThoughtCalculatorAdvanced: public DeepThoughtCalculator {
public:
    explicit DeepThoughtCalculatorAdvanced(std::default_random_engine& random_engine);
    uint32_t calculate() override;
private:
    std::default_random_engine& random_engine_;
};

} // namespace galaxy
