#include <gtest/gtest.h>
#include <random>

#include "deep_thought.hpp"
#include "deep_thought_calculator_advanced.hpp"
#include "deep_thought_calculator_basic.hpp"

TEST(BasicCalculatorTest, BasicAssertions) {
  galaxy::DeepThought deep_thought{
      std::make_unique<galaxy::DeepThoughtCalculatorBasic>()};

  EXPECT_EQ(deep_thought.computeAnswer({}), 42);
}

TEST(AdvancedCalculatorTest, BasicAssertions) {
  std::default_random_engine g1;
  g1.seed(0);

  galaxy::DeepThought deep_thought{
      std::make_unique<galaxy::DeepThoughtCalculatorAdvanced>(g1)};

  std::default_random_engine g2;
  g2.seed(0);

  std::uniform_int_distribution<uint32_t> d(0, 1024);

  EXPECT_EQ(deep_thought.computeAnswer({}), d(g2));
}
