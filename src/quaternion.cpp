// #include <squaternion/squaternion.hpp>
#include "quaternion.hpp"

// int Quaternion::normalize() {
//   data_t m = sqrt(w * w + x * x + y * y + z * z);

//   if (m < 1.0e-6) {
//     return 1;
//   }

//   // use isinf(inv_m) instead?
//   // the above test will capture really large inv_m
//   // in addition to infinate
//   data_t inv_m = 1.0 / m;

//   this->w *= inv_m;
//   this->x *= inv_m;
//   this->y *= inv_m;
//   this->z *= inv_m;

//   return 0;
// }
