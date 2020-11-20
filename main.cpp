#include <iostream>
#include "Scoreboard.h"
#include "Team.h"

void printScoreboard(Scoreboard);
void printUserMenu();

int main() {
    bool programRunning = true;
    char menuInput;

    Team dallas;
    dallas.setName("Dallas Cowboys");
    dallas.setCoachName("Mike McCarthy");
    dallas.setHomeCity("Arlington, TX");
    dallas.setHomeStatus(true);

    Team pittsburgh;
    pittsburgh.setName("Pittsburgh Steelers");
    pittsburgh.setCoachName("Mike Tomlin");
    pittsburgh.setHomeCity("Pittsburgh, PA");
    pittsburgh.setHomeStatus(false);

    Scoreboard scoreboard;
    scoreboard.setTeams(&dallas, &pittsburgh);

    while (programRunning) {
        printScoreboard(scoreboard);
        printUserMenu();
        std::cin >> menuInput;
        if (menuInput == 'x' || menuInput == 'X') {
            programRunning = false;
        } else {
            switch (menuInput) {
                case 'M':
                case 'm':
                    int minuteInput;
                    std::cout << "Enter minutes left: " << std::endl;
                    std::cin >> minuteInput;
                    scoreboard.setMinute(minuteInput);
                    break;
                case 'S':
                case 's':
                    int secondInput;
                    std::cout << "Enter seconds left: " << std::endl;
                    std::cin >> secondInput;
                    scoreboard.setSecond(secondInput);
                    break;
                case 'H':
                case 'h':
                    int homeScoreInput;
                    std::cout << "Enter home team score: " << std::endl;
                    std::cin >> homeScoreInput;
                    scoreboard.getHomeTeam()->setScore(homeScoreInput);
                    break;
                case 'V':
                case 'v':
                    int visitorScoreInput;
                    std::cout << "Enter visiting team score: " << std::endl;
                    std::cin >> visitorScoreInput;
                    scoreboard.getVisitorTeam()->setScore(visitorScoreInput);
                    break;
                case 'Q':
                case 'q':
                    int quarterInput;
                    std::cout << "Enter the quarter: " << std::endl;
                    std::cin >> quarterInput;
                    scoreboard.setQuarter(quarterInput);
                    break;
                case 'B':
                case 'b':
                    int ballInput;
                    std::cout << "Enter \'1\' if the home team has the ball. Enter \'2\' if the visiting team has the ball";
                    std::cout << std::endl;
                    std::cin >> ballInput;
                    if (ballInput == 1) {
                        scoreboard.setBall(true);
                    } else {
                        scoreboard.setBall(false);
                    }
                    break;
                case 'D':
                case 'd':
                    int downInput;
                    std::cout << "Enter the down: " << std::endl;
                    std::cin >> downInput;
                    scoreboard.setDown(downInput);
                    break;
                case 'Y':
                case 'y':
                    int yardsInput;
                    std::cout << "Enter the yards to go: " << std::endl;
                    std::cin >> yardsInput;
                    scoreboard.setYardsToGo(yardsInput);
                    break;
                default:
                    std::cout << "Please enter one of the valid options." << std::endl;
                    break;
            }
        }
    }


    return 0;
}

void printScoreboard(Scoreboard scoreboard) {
    std::cout << "\n------------------------------" << std::endl;
    std::cout << "Home        " << scoreboard.getMinute() << ":" << scoreboard.getSecond() << "       Visitor" << std::endl;
    std::cout << scoreboard.getHomeTeam()->getScore() << "                      " << scoreboard.getVisitorTeam()->getScore() << std::endl;
    if (scoreboard.doesHomeTeamHaveBall()) {
        std::cout << "    <>" << std::endl;
    } else {
        std::cout << "                       <>" << std::endl;
    }
    std::cout << "            QTR " << scoreboard.getQuarter() << std::endl;
    std::cout << scoreboard.getDown() << " Down              TO GO:" << scoreboard.getyardsToGo() << std::endl;
}

void printUserMenu() {
    std::cout << "\n---------------------------" << std::endl;
    std::cout << "\'M\' to update minutes left" << std::endl;
    std::cout << "\'S\' to update seconds left" << std::endl;
    std::cout << "\'H\' to update home team score" << std::endl;
    std::cout << "\'V\' to update visitor team score" << std::endl;
    std::cout << "\'Q\' to update Quarter" << std::endl;
    std::cout << "\'B\' to toggle ball" << std::endl;
    std::cout << "\'D\' to update down" << std::endl;
    std::cout << "\'Y\' to updated yards to go" << std::endl;
    std::cout << "\'X\' to exit the program" << std::endl;
    std::cout << "---------------------------" << std::endl;

}