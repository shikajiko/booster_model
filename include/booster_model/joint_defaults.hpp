#pragma once

#include <array>

#include "booster_model/joint.hpp"

namespace booster_model::Joint
{

inline constexpr double kDefaultJointDq = 0.0F;
inline constexpr double kDefaultJointTau = 0.0F;
inline constexpr double kDefaultJointWeight = 1.0F;
inline constexpr double kControlDt = 0.02F;
inline constexpr double kJointWeightRate = 0.2F;
inline constexpr double kBaseJointVelocity = 0.1F;  // rad/s
inline constexpr double kMaxJointVelocity = 0.5F;  // rad/s
inline constexpr double kWeightMargin = kJointWeightRate * kControlDt;
inline constexpr double kBaseJointStep = kBaseJointVelocity * kControlDt;
inline constexpr double kMaxJointDelta = kMaxJointVelocity * kControlDt;
inline constexpr int kCommandFrequencyMs = static_cast<int>(kControlDt / 0.001F);

inline constexpr std::array<double, kJointCnt> kDefaultJointKps = {
  40., 40.,
  40., 50., 20., 20,
  40., 50., 20., 20,
  350., 350., 180., 350., 250., 250.,
  350., 350., 180., 350., 250., 250.
};

inline constexpr std::array<double, kJointCnt> kDefaultJointKds = {
  1.5, 1.5,
  0.5, 1.5, 0.2, 0.2,
  0.5, 1.5, 0.2, 0.2,
  7.5, 7.5, 3., 5.5, 5.0, 5.0,
  7.5, 7.5, 3., 5.5, 5.0, 5.0,
};

}  // namespace booster_model::Joint
