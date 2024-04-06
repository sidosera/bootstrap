#include <random>
#include "deep_thought_calculator_advanced.hpp"

namespace galaxy {

DeepThoughtCalculatorAdvanced::DeepThoughtCalculatorAdvanced(std::default_random_engine& random_engine)
    : random_engine_(random_engine){};

uint32_t DeepThoughtCalculatorAdvanced::calculate() {
    std::uniform_int_distribution<uint32_t> dist(0, 1024);
    return dist(random_engine_);
};

} // namespace galaxy
