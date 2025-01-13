#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>

class Replace {
private:
   static std::string replaceOccurrences(const std::string& content, const std::string& s1, const std::string& s2);

public:
    static void process(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif