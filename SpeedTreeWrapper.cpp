// Updated code for SpeedTreeWrapper.cpp to handle std::string properly

// Assuming the relevant lines around 366 are altered as follows:
// If the issue mentioned by C2664 is related to function overloads that expect std::string and C2088 is a mismatched declaration, the following code changes may fix these issues:

std::string someVariable = ...; // Instantiate with a proper std::string usage
...
std::vector<std::string> stringList;
for (const auto& item : someOtherDataType) {
    stringList.push_back(std::string(item)); // Properly handle string conversions
}
// Rest of the code remains unchanged

