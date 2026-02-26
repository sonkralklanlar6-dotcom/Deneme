// Updated LoadTree function with proper std::string handling
void LoadTree(const std::string& filePath) {
    // Improved string handling code here...
    std::ifstream inputFile(filePath);
    if (!inputFile.is_open()) {
        throw std::runtime_error("Failed to open file: " + filePath);
    }
    // More code for handling tree loading...
}