#pragma once

#include <cstddef>

#include "booster/robot/b1/b1_api_const.hpp"

namespace booster_model::Joint
{

namespace b1 = booster::robot::b1;

using JointIndex = b1::JointIndexK1;

inline constexpr std::size_t kJointCnt = b1::kJointCntK1;
static constexpr std::size_t kGripperCnt = 2;
static constexpr std::size_t kTotalJointCnt = kJointCnt + kGripperCnt;

enum JointIndexWithGripper : std::size_t {
  kHeadYaw = 0,
  kHeadPitch,
  kLeftShoulderPitch,
  kLeftShoulderRoll,
  kLeftElbowPitch,
  kLeftElbowYaw,
  kRightShoulderPitch,
  kRightShoulderRoll,
  kRightElbowPitch,
  kRightElbowYaw,
  kLeftHipPitch,
  kLeftHipRoll,
  kLeftHipYaw,
  kLeftKneePitch,
  kCrankUpLeft,
  kCrankDownLeft,
  kRightHipPitch,
  kRightHipRoll,
  kRightHipYaw,
  kRightKneePitch,
  kCrankUpRight,
  kCrankDownRight,
  kLeftGripper = kTotalJointCnt - 2,   
  kRightGripper = kTotalJointCnt - 1,  
};
}  // namespace booster_model::Joint
