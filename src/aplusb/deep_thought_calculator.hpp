#pragma once

#include <cstdint>

namespace galaxy {
class DeepThoughtCalculator {
public:
    virtual ~DeepThoughtCalculator() = default;

    virtual uint32_t calculate() = 0;
};
}
