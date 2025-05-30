#include "prng_d_64.h"

uint64_t prng_d_64(struct prng_d_64_s *s) {
  uint64_t block = s->b + s->e;

  s->a++;

  if (s->a < 1) {
    s->c += s->e;
    s->d ^= s->b;
    s->b += s->c;
    s->e ^= s->d;
    return block;
  }

  s->b = ((s->b << 35) | (s->b >> 29)) ^ s->d;
  s->d += 111111111111111111ULL;
  s->e = (block << 23) | (block >> 41);
  return block;
}
