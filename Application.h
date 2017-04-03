#ifndef HACKATON_CPP_APPLICATION_H
#define HACKATON_CPP_APPLICATION_H


#include <string>
#include "Hackaton.h"

class Application {
public:
    bool createHackaton(std::string s);

private:
    Hackaton hackatons[100];
};


#endif //HACKATON_CPP_APPLICATION_H
