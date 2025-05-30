# PRNG D 64

It's a fast, statistically-strong PRNG with 64-bit integers and a minimum period of 2²⁵⁶.

`prng_d_64()` is the randomization function that generates a 64-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It returns a 64-bit unsigned integer pseudorandom number result.

It's in the same class as any Xoroshiro/Xorshift/Xoshiro algorithm that uses 64-bit integers.

It has a minimum period of 2²⁵⁶ without broken cycles.

It has an approximated maximum period of 2³²⁰, although no cycle is guaranteed to reach a full period of 2³²⁰.

Assigning a value of `0` to `a` and incrementing `d` by `1` behaves as an interdimensional jump function that starts a different cycle with a period of 2²⁵⁶.

Zeroland escapes quickly after generating 3 subsequent numbers.

It's the fastest 64-bit PRNG that generates numbers individually, has a period of at least 2²⁵⁶ and passes statistical tests in `stdin64` PractRand with TBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
