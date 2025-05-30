#ifndef PRNG_D_64_H
#define PRNG_D_64_H

#include <stdint.h>

struct prng_d_64_s {
  uint64_t a;
  uint64_t b;
  uint64_t c;
  uint64_t d;
  uint64_t e;
};

uint64_t prng_d_64(struct prng_d_64_s *s);

#endif
