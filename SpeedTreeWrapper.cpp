// Updated LoadTree function with proper std::string handling
#include <string>

void LoadTree(std::string treeData) {
    // Example code that handles std::string properly
    if (treeData.empty()) {
        throw std::invalid_argument("Tree data cannot be empty");
    }
    // Process tree data here...
}