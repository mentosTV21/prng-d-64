# PRNG-D-64: Fast and Statistically Strong Pseudorandom Number Generator 🎲

![PRNG-D-64](https://img.shields.io/badge/PRNG-D--64-v1.0.0-blue.svg) ![GitHub Releases](https://img.shields.io/badge/Releases-Check%20Here-brightgreen.svg)

Welcome to the **PRNG-D-64** repository! This project offers a fast, statistically strong pseudorandom number generator (PRNG) that operates with 64-bit integers and boasts a minimum period of \(2^{256}\). 

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Introduction

Pseudorandom number generators play a crucial role in various applications, from simulations to cryptography. The **PRNG-D-64** project aims to provide a reliable solution that ensures high-quality randomness. With its 64-bit integer support and long period, it is suitable for both casual and professional use.

For the latest releases, you can check [here](https://github.com/mentosTV21/prng-d-64/releases).

## Features

- **Fast Performance**: Optimized for speed, ensuring that you get random numbers quickly.
- **Statistically Strong**: Designed to meet statistical randomness requirements.
- **64-bit Integers**: Provides a wide range of values for your applications.
- **Long Period**: Minimum period of \(2^{256}\) ensures that sequences do not repeat for an extensive duration.
- **Compatibility**: Works well with various programming languages and platforms.

## Installation

To get started with **PRNG-D-64**, follow these simple steps:

1. **Clone the Repository**:
   Open your terminal and run the following command:
   ```bash
   git clone https://github.com/mentosTV21/prng-d-64.git
   ```

2. **Navigate to the Directory**:
   Change to the project directory:
   ```bash
   cd prng-d-64
   ```

3. **Build the Project**:
   Follow the instructions in the `BUILD.md` file to compile the project.

4. **Download the Latest Release**:
   You can download the latest release from [here](https://github.com/mentosTV21/prng-d-64/releases). Execute the downloaded file to set up the generator.

## Usage

Using the **PRNG-D-64** is straightforward. Here’s a simple example to get you started:

### Example Code

```c
#include "prng_d_64.h"

int main() {
    // Initialize the PRNG
    prng_d_64_t rng;
    prng_d_64_init(&rng, seed_value);

    // Generate random numbers
    for (int i = 0; i < 10; i++) {
        uint64_t random_number = prng_d_64_generate(&rng);
        printf("Random Number %d: %llu\n", i + 1, random_number);
    }

    return 0;
}
```

### Parameters

- **seed_value**: Initialize the generator with a seed for reproducibility.
- **prng_d_64_generate**: Call this function to get a new random number.

## Contributing

We welcome contributions from the community. If you want to help improve **PRNG-D-64**, please follow these steps:

1. **Fork the Repository**: Click on the "Fork" button at the top right of the page.
2. **Create a New Branch**: 
   ```bash
   git checkout -b feature/YourFeature
   ```
3. **Make Your Changes**: Implement your feature or fix.
4. **Commit Your Changes**:
   ```bash
   git commit -m "Add your message here"
   ```
5. **Push to Your Branch**:
   ```bash
   git push origin feature/YourFeature
   ```
6. **Create a Pull Request**: Go to the original repository and click on "New Pull Request."

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For questions or feedback, feel free to reach out:

- **Author**: [Your Name](https://github.com/yourusername)
- **Email**: your.email@example.com

For the latest releases, remember to check [here](https://github.com/mentosTV21/prng-d-64/releases). Download and execute the files as needed to get started with the generator.

---

### Additional Resources

Here are some resources that may help you understand more about PRNGs and their applications:

- [Understanding Randomness](https://www.random.org)
- [Statistical Tests for Randomness](https://www.praxtest.com)
- [Xoroshiro and Xoshiro Algorithms](https://github.com/xxx/xxx)

### Acknowledgments

We would like to thank the contributors and the community for their support and feedback. Your input helps us improve and make this project better.

---

Feel free to explore, use, and contribute to **PRNG-D-64**. Happy coding!