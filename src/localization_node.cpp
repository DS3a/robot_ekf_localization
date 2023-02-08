#include <cstdio>
#include <iostream>
#include "kalman/ekfilter.hpp"
#include "kalman/kvector.hpp"

/*
 *         Input data streams
 * Position from GPS (check https://github.com/DS3a/gps_odometry.git )
 * Velocities from wheel_encoders
 * Acceleration from IMU
 * Orientation from IMU
 * Angular Velocity from IMU
 *
 *
 */

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  printf("hello world template_pkg_ros2 package\n ");
  return 0;
}
