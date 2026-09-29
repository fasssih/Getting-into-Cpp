#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
   // ---- Normal questions (1-5) ----
    "What is the remainder when 47 is divided by 5?",
    "In the division algorithm a = bq + r, which condition must the remainder r satisfy?",
    "What is the quotient when 95 is divided by 7?",
    "What is the remainder when 100 is divided by 9?",
    "When a number is divided by 6, which of the following can NOT be a remainder?",

    // ---- BBSUL style questions (6-15) ----
    "A number leaves remainder 5 when divided by 7. What is the remainder when twice the number is divided by 7?",
    "A number leaves remainder 3 when divided by 8. What remainder does it leave when divided by 4?",
    "What is the smallest positive number that leaves remainder 2 when divided by 5 and remainder 3 when divided by 4?",
    "In a division, the dividend is 250, the quotient is 12 and the remainder is 10. What is the divisor?",
    "What is the remainder when 2^10 is divided by 7?",
    "What is the remainder when 17 x 23 is divided by 6?",
    "A number leaves remainder 9 when divided by 12. What is the remainder when it is divided by 3?",
    "What is the remainder when 1000 is divided by 11?",
    "What is the largest 3-digit number that leaves remainder 4 when divided by 9?",
    "A number N leaves remainder 11 when divided by 15. What is the remainder when N is divided by 5?",
     "What is the time taken for one complete oscillation called?",
    "What is the SI unit of frequency?",
    "Which relation connects angular frequency (w) and time period (T)?",
    "Where is the velocity of a particle in SHM maximum?",
    "The maximum displacement of a particle from its mean position is called:",

    // ---- BBSUL style questions (6-15) ----
    "A particle completes 20 oscillations in 10 seconds. What is its frequency?",
    "A particle in SHM has a frequency of 5 Hz. What is its time period?",
    "A particle's displacement is x = 0.1 sin(4*pi*t) metres. What is its angular frequency?",
    "For x = 0.1 sin(4*pi*t) metres, what is the time period of the motion?",
    "A particle in SHM has amplitude 0.2 m and angular frequency 10 rad/s. What is its maximum velocity?",
    "In the equation x = A sin(wt + phi), what is the initial phase (phase constant) at t = 0?",
    "A particle moves as x = A cos(wt). What is its displacement at t = T/2?",
    "A particle in SHM has amplitude 5 cm and w = 2 rad/s. What is its speed when its displacement is 3 cm?",
    "A particle moves as x = A sin(wt). What is its displacement at t = T/4?",
    "If the amplitude of a particle in SHM is doubled, what happens to its time period?"
    };

    string options[][4] = {
   {"1", "2", "3", "4"},               // Q1
    {"0 < r < b", "0 <= r < b", "0 <= r <= b", "r > b"}, // Q2
    {"12", "13", "14", "15"},           // Q3
    {"9", "0", "1", "10"},              // Q4
    {"0", "3", "5", "6"},               // Q5
    {"10", "5", "3", "1"},              // Q6
    {"0", "1", "2", "3"},               // Q7
    {"7", "12", "17", "27"},            // Q8
    {"18", "20", "22", "25"},           // Q9
    {"1", "2", "4", "6"},               // Q10
    {"5", "3", "1", "0"},               // Q11
    {"0", "1", "2", "3"},               // Q12
    {"9", "10", "1", "0"},              // Q13
    {"990", "994", "995", "998"},       // Q14
    {"4", "3", "2", "1"},                // Q15
    {"Frequency", "Period", "Amplitude", "Phase"},                 // Q1
    {"Second", "Metre", "Hertz", "Radian"},                        // Q2
    {"w = T/(2*pi)", "w = 2*pi/T", "w = 2*pi*T", "w = 1/T"},       // Q3
    {"At the extreme positions", "At the mean position", "Halfway between mean and extreme", "It is the same everywhere"}, // Q4
    {"Amplitude", "Period", "Frequency", "Phase"},                 // Q5
    {"0.5 Hz", "2 Hz", "10 Hz", "200 Hz"},                         // Q6
    {"0.2 s", "0.5 s", "5 s", "25 s"},                             // Q7
    {"2*pi rad/s", "4 rad/s", "4*pi rad/s", "0.1 rad/s"},          // Q8
    {"0.25 s", "0.5 s", "1 s", "2 s"},                             // Q9
    {"0.02 m/s", "0.2 m/s", "20 m/s", "2 m/s"},                    // Q10
    {"wt", "wt + phi", "phi", "A"},                                // Q11
    {"A", "0", "A/2", "-A"},                                       // Q12
    {"4 cm/s", "6 cm/s", "8 cm/s", "10 cm/s"},                     // Q13
    {"A", "A/2", "0", "-A"},                                       // Q14
    {"Doubled", "Unchanged", "Halved", "Four times"}               // Q15
    };

    char answerkey[] = {
    'B', 'B', 'B', 'C', 'D',            // Q1-5
    'C', 'D', 'A', 'B', 'B',            // Q6-10
    'C', 'A', 'B', 'B', 'D',             // Q11-15
    'B', 'C', 'B', 'B', 'A',            // Q1-5
    'B', 'A', 'C', 'B', 'D',            // Q6-10
    'C', 'D', 'C', 'A', 'B'             // Q11-15
    };
    char labels[] = {'A','B','C','D'};
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = 4;
    for(int i = 0; i<size; i++){
        cout<<"*************************";
        cout<<'\n'<<i+1<<") "<<questions[i];
        cout<<"\n*************************";

        for(int j = 0; j<size2; j++){
        cout<<'\n'<<labels[j]<<") "<<options[i][j];
    }
    cout<<"\n";
    cin>>guess;
    guess = toupper(guess);
    if(guess==answerkey[i]){
        cout<<"CORRECT\n";
        score++;
    }else{
        cout<<"WRONG!\n";
    }
    }
    cout<<"# of questions: "<<size;
    cout<<"\nCorrect answers: "<<score;
}