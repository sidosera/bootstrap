#include <memory>
#include "deep_thought.hpp"

namespace galaxy {

DeepThought::DeepThought(std::unique_ptr<DeepThoughtCalculator> calculator)
      : calculator_(std::move(calculator)){};

int DeepThought::computeAnswer(UltimateQuestion) {
    return calculator_->calculate();
}

}  // namespace galaxy
