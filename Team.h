//
// Created by Adam Gutierrez on 11/4/20.
//

#ifndef FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_TEAM_H
#define FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_TEAM_H


#include <string>


class Team {
    private:
        std::string Name;
        std::string Coach_Name;
        std::string Home_City;
        bool Home_Status{};
        int Score;
        int Timeout_Count;

    public:
        Team()
        {
            Score = 0;
            Timeout_Count = 0;
        }

        void setName(std::string n) { Name = n; }
        void setCoachName(std::string c) { Coach_Name = c; }
        void setHomeCity(std::string c) { Home_City = c; }
        void setHomeStatus(bool s) { Home_Status = s; }
        void setTimeOutCount(int t) { Timeout_Count = t; }
        void setScore(int s) { Score = s; }



        std::string getName() { return Name; }
        std::string getCoachName() { return Coach_Name; }
        std::string getHomeCity() { return Home_City; }
        bool getHomeStatus() const { return Home_Status; }
        int getScore() const { return Score; }
        int getTimeoutCount() const { return Timeout_Count; }

};


#endif //FOOTBALL_SCOREBOARD_ADAM_GUTIERREZ_TEAM_H
