#include "deep_thought.hpp"
#include "deep_thought_calculator.hpp"
#include "deep_thought_calculator_advanced.hpp"
#include "deep_thought_calculator_impl.hpp"

#include <iostream>
#include <memory>
#include <random>

std::unique_ptr<galaxy::DeepThoughtCalculator> createDeepThoughtCalculator(
    std::default_random_engine& generator) {
  std::uniform_int_distribution<int> flip_coin(1, 2);

  if (flip_coin(generator) % 2 == 0) {
    return std::make_unique<galaxy::DeepThoughtCalculatorImpl>();
  } else {
    return std::make_unique<galaxy::DeepThoughtCalculatorAdvanced>(generator);
  }
}

int main() {
  std::default_random_engine generator;
  generator.seed(std::time(nullptr));

  galaxy::DeepThought deep_thought{createDeepThoughtCalculator(generator)};

  int answer = deep_thought.computeAnswer({});

  std::cout << "Your answer to the Ultimate Question of Life, the Universe, "
               "and Everything is: "
            << answer << std::endl;
}
