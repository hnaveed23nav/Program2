/*The program shows athletes for tennis and volleyball, sets their attributes,
and prints details like serve speed and player position.
Due: October 15,2024

Hassan Naveed
*/

#include <iostream>
#include <string>
using namespace std;

// Base class for Athlete
class Athlete {
protected:
    int height;   // Athlete's height
    int weight;   // Athlete's weight
    char gender;  // Athlete's gender

public:
    Athlete() : height(0), weight(0), gender('U') {} // Default constructor

    Athlete(int h, int w, char g) : height(h), weight(w), gender(g) {} // Constructor

    int getHeight() { return height; } // Get height
    void setHeight(int h) { height = h; } // Set height

    int getWeight() { return weight; } // Get weight
    void setWeight(int w) { weight = w; } // Set weight

    char getGender() { return gender; } // Get gender
    void setGender(char g) { gender = g; } // Set gender
};

// Volleyball class
class Volleyball : public Athlete {
private:
    string position;  // Player position
    float reaction_time;  // Reaction time

public:
    Volleyball() : position("Unknown"), reaction_time(0.0f) {} // Default constructor
    Volleyball(string pos, float rt) : position(pos), reaction_time(rt) {} // Constructor

    string getPosition() { return position; } // Get position
    void setPosition(string pos) { position = pos; } // Set position

    float getReactionTime() { return reaction_time; } // Get reaction time
    void setReactionTime(float rt) { reaction_time = rt; } // Set reaction time
};

// Tennis class
class Tennis : public Athlete {
private:
    int serve_speed;  // Serve speed
    bool serve_and_volley; // Serve and volley

public:
    Tennis() : serve_speed(0), serve_and_volley(false) {} // Default constructor
    Tennis(int ss, bool sv) : serve_speed(ss), serve_and_volley(sv) {} // Constructor

    int getServeSpeed() { return serve_speed; } // Get serve speed
    void setServeSpeed(int ss) { serve_speed = ss; } // Set serve speed

    bool isServeAndVolley() { return serve_and_volley; } // Get serve and volley status
    void setServeAndVolley(bool sv) { serve_and_volley = sv; } // Set serve and volley status
};

// Main program to test the classes
int main() {
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;

    Tennis martina = Tennis();
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150, false);
    bjorn.setGender('M');
    if  (martina.getGender() == 'F')
       cout << "Martina serve speed: " << martina.getServeSpeed() << endl;

    Volleyball kerri = Volleyball();
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    Volleyball giba("Outside Hitter", 23.2);
    giba.setGender('M');
    if  (kerri.getGender() == 'F')
       cout << "Kerri is an " << kerri.getPosition() << endl;

    return 0;
}
