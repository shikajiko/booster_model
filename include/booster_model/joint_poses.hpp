#pragma once

#include <array>

#include "booster_model/joint.hpp"

namespace booster_model::Joint
{

inline constexpr std::array<float, kJointCnt> kStandPose = {
  0, 0,
  0.0, -1.3, 0, -0.,
  0.0, 1.3, 0, 0.,
  -0.0, 0, 0, 0.105, 0., 0.10,
  -0.0, 0, 0, 0.105, 0., 0.10
};

}  // namespace booster_model::Joint
