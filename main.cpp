#include <iostream>

// Function to calculate the sum of integers between 'first' and 'last', inclusive
int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int first, last;

    // Prompt the user for input
    std::cout << "Enter the first integer: ";
    std::cin >> first;
    std::cout << "Enter the last integer: ";
    std::cin >> last;

    // Calculate the sum using the function
    int result = sum_from_to(first, last);

    // Display the result
    std::cout << "The sum of integers from " << first << " to " << last << " is " << result << "." << std::endl;

    return 0;
}
