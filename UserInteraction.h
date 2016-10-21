//
// Created by Raymond Machira on 10/20/16.
//

#ifndef CMOCKING_USERINTERACTION_H
#define CMOCKING_USERINTERACTION_H

#include <sstream>
#include "UserInteraction.h"
#include <iostream>

using namespace std;


class UserInteraction {
public:
    UserInteraction(basic_istream<char> &, basic_ostream<char> &);

    string getUserString();

    void tellUserSomething(string);

    void interactWithUser();

    int product(int x, int y);

private:
    basic_istream<char> &input;
    ostream &output;
};

#endif //CMOCKING_USERINTERACTION_H
