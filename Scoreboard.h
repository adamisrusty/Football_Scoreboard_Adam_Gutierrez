//
// Created by Adam Gutierrez on 11/4/20.
//

#ifndef FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_SCOREBOARD_H
#define FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_SCOREBOARD_H


#include "Team.h"

class Scoreboard {
    private:
        Team* HomeTeam;
        Team* VisitorTeam;
        bool homeTeamHasBall;
        int Minute;
        int Second;
        int Quarter;
        int YardsToGo;
        int Down;

    public:
        Scoreboard()
        {
            homeTeamHasBall = true;
            Quarter = 1;
            Minute = 15;
            Second = 0;
            YardsToGo = 10;
            Down = 1;
        }

        void setTeams(Team* h, Team* v) {
            HomeTeam = h;
            VisitorTeam = v;
        }
        void setBall(bool h) { homeTeamHasBall = h; }
        void setMinute(int m) { Minute = m; }
        void setSecond(int s) { Second = s; }
        void setQuarter(int q) { Quarter = q; }
        void setYardsToGo(int y) { YardsToGo = y; }
        void setDown(int d) { Down = d; }

        Team * getHomeTeam() { return HomeTeam; }
        Team * getVisitorTeam() { return VisitorTeam; }
        bool doesHomeTeamHaveBall() const { return homeTeamHasBall; }
        int getMinute() const { return Minute; }
        int getSecond() const { return Second; }
        int getQuarter() const { return Quarter; }
        int getyardsToGo() const { return YardsToGo; }
        int getDown() const { return Down; }

};


#endif //FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_SCOREBOARD_H
