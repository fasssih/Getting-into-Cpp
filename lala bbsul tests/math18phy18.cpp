#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    // ---- Normal (5) ----
    "Which of the following is a prime number?",
    "What is the smallest composite number?",
    "Which of the following is an irrational number?",
    "Which of the following is a rational number?",
    "The set of real numbers includes:",

    // ---- BBSUL style (10) ----
    "What is the sum of the irrational numbers √2 and (-√2)?",
    "How many prime numbers are there between 1 and 30?",
    "What is the value of √2 × √8?",
    "Which of the following statements is true?",
    "The number 0.1010010001... (non-terminating, non-repeating) is:",
    "What is the smallest prime number greater than 50?",
    "How many composite numbers are there from 1 to 20?",
    "The product of a non-zero rational number and an irrational number is:",
    "The recurring decimal 0.272727... in its lowest terms is:",
    "Which of the following is NOT a real number?",
     // ---- Normal (5) ----
    "Which of the following is a mechanical wave?",
    "Which of the following is an electromagnetic wave?",
    "In a transverse wave, the particles of the medium vibrate:",
    "Sound waves in air are:",
    "What is the SI unit of frequency?",

    // ---- BBSUL style (10) ----
    "A wave has a frequency of 50 Hz and a wavelength of 2 m. What is its speed?",
    "A wave travels at 340 m/s with a frequency of 170 Hz. What is its wavelength?",
    "What is the period of a wave whose frequency is 25 Hz?",
    "When a wave passes from one medium into another, which quantity remains unchanged?",
    "If the frequency of a wave is doubled while its speed stays constant, the wavelength becomes:",
    "Which of the following waves cannot travel through a vacuum?",
    "The distance between two consecutive crests of a wave is called its:",
    "The amplitude of a wave is measured from:",
    "A wave travels 120 m in 4 s and has a wavelength of 6 m. What is its frequency?",
    "A longitudinal wave consists of alternate:"

    };

    string options[][4] = {
    // ---- Normal ----
    {"21", "29", "33", "39"},                                        // Q1
    {"4", "2", "3", "5"},                                            // Q2
    {"√16", "22/7", "0.25", "√5"},                                   // Q3
    {"π", "√2", "0.333...", "√3"},                                   // Q4
    {"Both rational and irrational numbers", "Only rational numbers",
     "Only irrational numbers", "Neither rational nor irrational numbers"}, // Q5

    // ---- BBSUL style ----
    {"Irrational", "Prime", "Rational", "Undefined"},                // Q6
    {"9", "10", "11", "12"},                                         // Q7
    {"2√2", "√10", "16", "4"},                                       // Q8
    {"Every real number is rational", "Every prime number is odd",
     "Every natural number greater than 1 is either prime or composite",
     "1 is a prime number"},                                         // Q9
    {"Irrational", "Rational", "An integer", "A natural number"},    // Q10
    {"51", "53", "57", "59"},                                        // Q11
    {"10", "12", "13", "11"},                                        // Q12
    {"Always rational", "Always irrational", "Either rational or irrational", "Zero"}, // Q13
    {"3/11", "27/100", "9/33", "27/10"},                             // Q14
    {"π", "√(-4)", "0", "-7"},                                        // Q15
        // ---- Normal ----
    {"Light", "Sound", "X-ray", "Radio wave"},                                      // Q1
    {"Sound wave", "Water wave", "Radio wave", "Wave on a string"},                 // Q2
    {"Perpendicular to the direction of wave propagation",
     "Parallel to the direction of wave propagation",
     "In circles only", "They do not vibrate"},                                     // Q3
    {"Transverse", "Electromagnetic", "Stationary only", "Longitudinal"},           // Q4
    {"Metre", "Hertz", "Metre per second", "Joule"},                                // Q5

    // ---- BBSUL style ----
    {"25 m/s", "52 m/s", "100 m/s", "48 m/s"},                                      // Q6
    {"2 m", "0.5 m", "5 m", "20 m"},                                                // Q7
    {"25 s", "0.4 s", "4 s", "0.04 s"},                                             // Q8
    {"Wavelength", "Frequency", "Speed", "All of these"},                           // Q9
    {"Halved", "Doubled", "Unchanged", "Four times"},                               // Q10
    {"Gamma rays", "Radio waves", "Visible light", "Sound waves"},                  // Q11
    {"Amplitude", "Period", "Wavelength", "Frequency"},                             // Q12
    {"The equilibrium position to a crest", "A crest to a trough",
     "One crest to the next crest", "One trough to the equilibrium of the next cycle"}, // Q13
    {"20 Hz", "30 Hz", "0.2 Hz", "5 Hz"},                                           // Q14
    {"Crests and troughs", "Compressions and rarefactions",
     "Nodes and antinodes", "Highs and lows of electric field"}
    };

    char answerkey[] = {
        'B', 'A', 'D', 'C', 'A',                       // Normal
    'C', 'B', 'D', 'C', 'A', 'B', 'D', 'C', 'A', 'B', // BBSUL style
    'B', 'C', 'A', 'D', 'B',                                      // Normal
    'C', 'A', 'D', 'B', 'A', 'D', 'C', 'A', 'D', 'B'

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