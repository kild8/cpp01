#include "Replace.hpp"
#include <iostream>

void Replace::process(const std::string& filename, const std::string& s1, const std::string& s2) {
    // Check for empty s1
    if (s1.empty()) {
        std::cerr << "Error: String to find (s1) cannot be empty.\n";
        return;
    }

    // Open the input file
    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cerr << "Error: Unable to open file '" << filename << "'.\n";
        return;
    }

    // Read the file content
    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    infile.close();

    // Replace occurrences of s1 with s2
    std::string updatedContent = replaceOccurrences(content, s1, s2);

    // Write to the output file
    std::ofstream outfile(filename + ".replace");
    if (!outfile.is_open()) {
        std::cerr << "Error: Unable to create output file '" << filename << ".replace'.\n";
        return;
    }
    outfile << updatedContent;
    outfile.close();
}

std::string Replace::replaceOccurrences(const std::string& content, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos) {
        // Append the part before the found string and the replacement
        result.append(content, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    // Append the remaining part of the content
    result.append(content, pos, std::string::npos);
    return result;
}
