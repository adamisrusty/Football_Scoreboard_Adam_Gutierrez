//
// Created by Adam Gutierrez on 11/4/20.
//

#ifndef FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_TEAM_H
#define FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_TEAM_H


#include <string>

class Team {
    public:
        std::string Name;
        std::string Coach_Name;
        std::string Home_City;
        bool Home_Status;
        int Score;
        int Timeout_Count;
};


#endif //FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_TEAM_H
