#include "quaternion_filters.hpp"

QCF::QCF(float a) : alpha(a) {}

Quaternion QCF::update(float ax, float ay, float az, float wx, float wy, float wz,
                  float dt) {
  qw = q + 0.5 * dt * Quaternion(0.0f, wx, wy, wz);
  float an = 1.0f / sqrtf(ax * ax + ay * ay + az * az);

  if (isinf(an))
    return q;

  ax *= an;
  ay *= an;
  az *= an;

  float roll = atan2(ay, az);
  float pitch = atan2(-ax, sqrtf(ay * ay + az * az));
  float yaw = 0.0f;

  qam = Quaternion::from_euler(roll, pitch, yaw);

  q = (1.0f - alpha) * qw + alpha * qam;
  return q;
}