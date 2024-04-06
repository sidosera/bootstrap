#pragma once
#include <memory>
#include "deep_thought_calculator.hpp"

namespace galaxy {

struct UltimateQuestion {};

class DeepThought {
 public:
  explicit DeepThought(std::unique_ptr<DeepThoughtCalculator> calculator);

  int computeAnswer(UltimateQuestion);

 private:
  std::unique_ptr<DeepThoughtCalculator> calculator_;
};

}  // namespace galaxy
