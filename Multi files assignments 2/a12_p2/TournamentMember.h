/* 
	Classic TournamentMember examples: an inheritance tree in a geometric context
*/
#ifndef __TournamentMember_H
#define __TournamentMember_H
#include <cstring>
#include <string>

class TournamentMember {			// base class
	protected:   				// private access modifier: could also be protected
		char firstname[36];   // every TournamentMember will have a first name
        char lastname[36];   // every TournamentMember will have a last name
        char dob[11];          // every TournamentMember will have date-of-birth
        static std::string location;
        int languages;
        double budget;
	public:
		TournamentMember(char*,char*,char*, int, double);  // parametric constuctor
		TournamentMember();					// empty constructor
        ~TournamentMember();
		TournamentMember(const TournamentMember&);		// copy constructor
        //setter
        void setFname(char fn[]) { strcpy(firstname, fn); };
        void setLname(char ln[]) { strcpy(lastname, ln); };
        void setDob(char ndob[]) { strcpy(dob, ndob); };
        //getter
        char *getFname(){ return firstname; };
        char *getLname(){ return lastname; };
        char *getDob(){ return dob; };
        //methods
        void printall();
        static void changeLocation(std::string);
};

class Player : public TournamentMember {
    private:
        int num;
        std::string pos;
        int goals;
        std::string foot;
    public:
        //constructors
        Player(char*,char*,char*, int, double, int, std::string, int, std::string);
        Player();
        ~Player();
        Player(const Player&);
        //setters
        void setNum(int nm) { num = nm;};
        void setPos(std::string npos) {pos = npos;};
        void setFoot(std::string nf) {foot = nf;};
        //getters
        int getNum() { return num;};
        std::string getPos() { return pos;};
        int getGoals() {return goals;};
        std::string getFoot() { return foot;};
        //methods
        void printplayer();
        void incgoals();
};

class Referee : public TournamentMember {
    private:
        int yellowCardCount;
        Player *yellowCardList[40];
        int redCardCount;
        Player *redCardList[40];
    public:
        //constructors
        Referee(char*,char*,char*,int,double);
        Referee();
        ~Referee();
        Referee(const Referee&);
        //methods
        bool addToYellowCardList(Player *p);
        bool addToRedCardList(Player *p);
        //getters
        int getYellowCardCount(){ return yellowCardCount;};
        int getRedCardCount(){ return redCardCount;};
};

#endif
