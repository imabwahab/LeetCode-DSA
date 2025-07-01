#include <iostream>
#include <vector>

void processVector(const std::vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        int current = vec[i];

        // Check bounds before accessing previous and next
        int previous = (i > 0) ? vec[i - 1] : -1; // or any default value
        int next = (i < vec.size() - 1) ? vec[i + 1] : -1;

        std::cout << "Index: " << i << "\n";
        std::cout << "Previous: " << previous << ", Current: " << current << ", Next: " << next << "\n\n";
    }
}

int main() {
    std::vector<int> myVector = {10, 20, 30, 40, 50};
    processVector(myVector);
    return 0;
}
