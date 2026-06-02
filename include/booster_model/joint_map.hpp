#pragma once

#include <array>
#include <string_view>

#include "booster_model/joint.hpp"

namespace booster_model::Joint
{

inline constexpr std::array<JointIndex, kJointCnt> kAllJoints = {
  JointIndex::kHeadYaw,
  JointIndex::kHeadPitch,
  JointIndex::kLeftShoulderPitch,
  JointIndex::kLeftShoulderRoll,
  JointIndex::kLeftElbowPitch,
  JointIndex::kLeftElbowYaw,
  JointIndex::kRightShoulderPitch,
  JointIndex::kRightShoulderRoll,
  JointIndex::kRightElbowPitch,
  JointIndex::kRightElbowYaw,
  JointIndex::kLeftHipPitch,
  JointIndex::kLeftHipRoll,
  JointIndex::kLeftHipYaw,
  JointIndex::kLeftKneePitch,
  JointIndex::kCrankUpLeft,
  JointIndex::kCrankDownLeft,
  JointIndex::kRightHipPitch,
  JointIndex::kRightHipRoll,
  JointIndex::kRightHipYaw,
  JointIndex::kRightKneePitch,
  JointIndex::kCrankUpRight,
  JointIndex::kCrankDownRight,
};

inline constexpr std::array<JointIndex, 8> kArmJoints = {
  JointIndex::kLeftShoulderPitch,
  JointIndex::kLeftShoulderRoll,
  JointIndex::kLeftElbowPitch,
  JointIndex::kLeftElbowYaw,
  JointIndex::kRightShoulderPitch,
  JointIndex::kRightShoulderRoll,
  JointIndex::kRightElbowPitch,
  JointIndex::kRightElbowYaw,
};

constexpr std::string_view joint_name(JointIndex joint)
{
  switch (joint) {
  case JointIndex::kHeadYaw:
    return "HeadYaw";
  case JointIndex::kHeadPitch:
    return "HeadPitch";
  case JointIndex::kLeftShoulderPitch:
    return "LeftShoulderPitch";
  case JointIndex::kLeftShoulderRoll:
    return "LeftShoulderRoll";
  case JointIndex::kLeftElbowPitch:
    return "LeftElbowPitch";
  case JointIndex::kLeftElbowYaw:
    return "LeftElbowYaw";
  case JointIndex::kRightShoulderPitch:
    return "RightShoulderPitch";
  case JointIndex::kRightShoulderRoll:
    return "RightShoulderRoll";
  case JointIndex::kRightElbowPitch:
    return "RightElbowPitch";
  case JointIndex::kRightElbowYaw:
    return "RightElbowYaw";
  case JointIndex::kLeftHipPitch:
    return "LeftHipPitch";
  case JointIndex::kLeftHipRoll:
    return "LeftHipRoll";
  case JointIndex::kLeftHipYaw:
    return "LeftHipYaw";
  case JointIndex::kLeftKneePitch:
    return "LeftKneePitch";
  case JointIndex::kCrankUpLeft:
    return "CrankUpLeft";
  case JointIndex::kCrankDownLeft:
    return "CrankDownLeft";
  case JointIndex::kRightHipPitch:
    return "RightHipPitch";
  case JointIndex::kRightHipRoll:
    return "RightHipRoll";
  case JointIndex::kRightHipYaw:
    return "RightHipYaw";
  case JointIndex::kRightKneePitch:
    return "RightKneePitch";
  case JointIndex::kCrankUpRight:
    return "CrankUpRight";
  case JointIndex::kCrankDownRight:
    return "CrankDownRight";
  }

  return "Unknown";
}

constexpr std::size_t joint_to_index(JointIndex joint)
{
  return static_cast<std::size_t>(joint);
}

constexpr bool is_arm_joint(JointIndex joint)
{
  for (const auto arm_joint : kArmJoints) {
    if (joint == arm_joint) {
      return true;
    }
  }

  return false;
}

}  // namespace booster_model::Joint
