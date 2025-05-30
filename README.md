# PRNG D 64

It's a fast, statistically-strong PRNG with 64-bit integers and a minimum period of 2²⁵⁶.

## Reference

`prng_d_64()` is the randomization function that generates a 64-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the `struct prng_d_64_s` pointer with 5 64-bit unsigned integers `a`, `b`, `c`, `d` and `e`. Each must be initialized with any combination of values.

It returns a 64-bit unsigned integer pseudorandom number result.

## Classification

It's in the same class as any Xoroshiro/Xorshift/Xoshiro algorithm that uses 64-bit integers.

## Period

It has a minimum period of 2²⁵⁶.

It has an approximated maximum period of 2³²⁰, although no cycle is guaranteed to reach a full period of 2³²⁰.

Assigning a value of `0` to `a` and incrementing `d` by `1` behaves as an interdimensional jump function that starts a different cycle with a period of 2²⁵⁶.

## Speed

It's the fastest 64-bit PRNG that generates numbers individually, has a period of at least 2²⁵⁶ and passes statistical tests in `stdin64` PractRand with TBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

## Security

There aren't any broken number cycles smaller than the aforementioned minimum period of 2²⁵⁶.

Zeroland escapes quickly after generating 3 subsequent numbers.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.

## Randomness

It passes TBs of `stdin64` PractRand tests with all seeds that were tested.
