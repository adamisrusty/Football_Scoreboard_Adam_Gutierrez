//
// Created by Adam Gutierrez on 11/4/20.
//

#ifndef FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_SCOREBOARD_H
#define FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_SCOREBOARD_H


#include "Team.h"

class Scoreboard {
    public:
        Team Home;
        Team Visitor;
        Team Teams[2] = {Home, Visitor};
        bool HomeTeamHasBall;
        int Minute;
        int Second;
        int Quarter;
        int YardsToGo;
        int Down;
};


#endif //FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_SCOREBOARD_H
