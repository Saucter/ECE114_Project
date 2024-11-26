#ifndef DIALOGUE_H
#define DIALOGUE_H

#include <vector>
#include <string>

struct Dialogue {
    std::vector<std::string> start;
    std::vector<std::string> hit;
    std::vector<std::string> end;
};

#endif // DIALOGUE_H
