#pragma once

#include <cstddef>

#include "booster/robot/b1/b1_api_const.hpp"

namespace booster_model::Joint
{

namespace b1 = booster::robot::b1;

using JointIndex = b1::JointIndexK1;

inline constexpr std::size_t kJointCnt = b1::kJointCntK1;

}  // namespace booster_model::Joint
