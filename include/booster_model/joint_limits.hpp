#pragma once

#include <array>

#include "booster_model/joint.hpp"

namespace booster_model::Joint
{

inline constexpr std::array<float, kJointCnt> kMinJointLimit = {
  -1.029744F,  // Head Yaw Joint (-59 deg)
  -0.331613F,  // Head Pitch Joint (-19 deg)
  -2.949606F,  // Left Shoulder Pitch Joint (-169 deg)
  -1.640609F,  // Left Shoulder Roll Joint (-94 deg)
  -1.902409F,  // Left Shoulder Yaw Joint (-109 deg)
  -2.251475F,  // Left Elbow Joint (-129 deg)
  -2.949606F,  // Right Shoulder Pitch Joint (-169 deg)
  -1.640609F,  // Right Shoulder Roll Joint (-94 deg)
  -1.902409F,  // Right Shoulder Yaw Joint (-109 deg)
  -0.680678F,  // Right Elbow Joint (-39 deg)
  -2.967060F,  // Left Hip Pitch Joint (-170 deg)
  -0.383972F,  // Left Hip Roll Joint (-22 deg)
  -1.029744F,  // Left Hip Yaw Joint (-59 deg)
  0.000000F,  // Left Knee Joint (0 deg)
  -0.296706F,  // Left Ankle Up Joint (-17 deg)
  -0.279253F,  // Left Ankle Down Joint (-16 deg)
  -2.967060F,  // Right Hip Pitch Joint (-170 deg)
  -1.553343F,  // Right Hip Roll Joint (-89 deg)
  -1.029744F,  // Right Hip Yaw Joint (-59 deg)
  0.000000F,  // Right Knee Joint (0 deg)
  -0.296706F,  // Right Ankle Up Joint (-17 deg)
  -0.279253F  // Right Ankle Down Joint (-16 deg)
};

inline constexpr std::array<float, kJointCnt> kMaxJointLimit = {
  1.029744F,  // Head Yaw Joint (59 deg)
  0.855211F,  // Head Pitch Joint (49 deg)
  1.204277F,  // Left Shoulder Pitch Joint (69 deg)
  1.640609F,  // Left Shoulder Roll Joint (94 deg)
  1.902409F,  // Left Shoulder Yaw Joint (109 deg)
  0.680678F,  // Left Elbow Joint (39 deg)
  1.204277F,  // Right Shoulder Pitch Joint (69 deg)
  1.640609F,  // Right Shoulder Roll Joint (94 deg)
  1.902409F,  // Right Shoulder Yaw Joint (109 deg)
  2.251475F,  // Right Elbow Joint (129 deg)
  2.234021F,  // Left Hip Pitch Joint (128 deg)
  1.553343F,  // Left Hip Roll Joint (89 deg)
  1.029744F,  // Left Hip Yaw Joint (59 deg)
  2.321288F,  // Left Knee Joint (133 deg)
  0.663225F,  // Left Ankle Up Joint (38 deg)
  0.715585F,  // Left Ankle Down Joint (41 deg)
  2.234021F,  // Right Hip Pitch Joint (128 deg)
  0.383972F,  // Right Hip Roll Joint (22 deg)
  1.029744F,  // Right Hip Yaw Joint (59 deg)
  2.321288F,  // Right Knee Joint (133 deg)
  0.663225F,  // Right Ankle Up Joint (38 deg)
  0.715585F  // Right Ankle Down Joint (41 deg)
};

}  // namespace booster_model::Joint
