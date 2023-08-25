#include <iostream>
#include <bitset>

// Function to generate even parity bit for a given data
bool generateEvenParity(const std::bitset<7>& data) {
    bool parityBit = false;
    for (size_t i = 0; i < data.size(); ++i) {
        if (data[i]) {
            parityBit = !parityBit;
        }
    }
    return parityBit;
}

// Function to check even parity for a given data and parity bit
bool checkEvenParity(const std::bitset<7>& data, bool parityBit) {
    return generateEvenParity(data) == parityBit;
}

int main() {
    std::bitset<7> data;
    bool parityBit;

    // Input data and parity bit
    std::cout << "Enter 7 bits of data (0s and 1s): ";
    std::cin >> data;

    // Generate even parity bit
    parityBit = generateEvenParity(data);
    std::cout << "Generated even parity bit: " << parityBit << std::endl;

    // Check even parity
    bool isValid = checkEvenParity(data, parityBit);
    if (isValid) {
        std::cout << "Parity check: Data is valid." << std::endl;
    } else {
        std::cout << "Parity check: Data is invalid." << std::endl;
    }

    return 0;
}
