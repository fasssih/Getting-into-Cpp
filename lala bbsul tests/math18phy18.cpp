#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
         // ---- Normal questions (1-5) ----
    "Which type of wave needs a material medium to travel?",
    "In which type of wave do the particles vibrate perpendicular to the direction of wave propagation?",
    "Sound waves travelling in air are:",
    "The distance between two consecutive crests of a wave is called:",
    "Which of the following correctly relates wave speed (v), frequency (f) and wavelength (L)?",

    // ---- BBSUL style questions (6-15) ----
    "A wave has a frequency of 50 Hz and a wavelength of 2 m. What is its speed?",
    "Sound travels at 340 m/s. What is the wavelength of a sound wave of frequency 170 Hz?",
    "A wave of wavelength 1.5 m travels at 330 m/s. What is its frequency?",
    "A wave has a frequency of 4 Hz. What is its time period?",
    "In the same medium, the frequency of a wave is doubled. What happens to its wavelength?",
    "A radio wave of frequency 100 MHz travels at 3 x 10^8 m/s in vacuum. What is its wavelength?",
    "When a wave passes from one medium into another, which quantity remains unchanged?",
    "A wave is described by y = 0.02 sin(10*pi*t - 2*pi*x) in SI units. What is its wave speed?",
    "The distance between the 1st crest and the 6th crest of a wave is 10 m. What is its wavelength?",
    "A wave of frequency 500 Hz travels 150 m in 0.5 s. What is its wavelength?",
    // ---- Normal questions (1-5) ----
    "Which of the following is a prime number?",
    "Which of the following is a composite number?",
    "Which of the following is an irrational number?",
    "Which is the only even prime number?",
    "The set of real numbers consists of:",

    // ---- BBSUL style questions (6-15) ----
    "How many prime numbers are there between 1 and 20?",
    "What is the smallest prime number greater than 90?",
    "What is the sum of the first five prime numbers?",
    "How many composite numbers are there between 1 and 10 (inclusive)?",
    "Which of the following is an irrational number?",
    "The product of a non-zero rational number and an irrational number is always:",
    "Which of the following is a rational number?",
    "Two prime numbers have a sum of 24 and a product of 143. What is the larger prime?",
    "Which of the following is a prime number?",
    "Which of the following rational numbers lies between sqrt(2) and sqrt(3)?"

    };

    string options[][4] = {
   {"Electromagnetic waves", "Mechanical waves", "Light waves", "X-rays"},          // Q1
    {"Transverse waves", "Longitudinal waves", "Sound waves in air", "Pressure waves"}, // Q2
    {"Transverse waves", "Electromagnetic waves", "Longitudinal waves", "Light waves"}, // Q3
    {"Wavelength", "Amplitude", "Period", "Frequency"},                              // Q4
    {"v = f/L", "v = L/f", "v = f + L", "v = f x L"},                                // Q5
    {"25 m/s", "52 m/s", "100 m/s", "200 m/s"},                                      // Q6
    {"0.5 m", "2 m", "20 m", "57800 m"},                                             // Q7
    {"220 Hz", "495 Hz", "2.2 Hz", "0.0045 Hz"},                                     // Q8
    {"4 s", "2 s", "0.25 s", "0.4 s"},                                               // Q9
    {"Doubled", "Unchanged", "Four times", "Halved"},                                // Q10
    {"3 m", "0.3 m", "30 m", "300 m"},                                               // Q11
    {"Speed", "Wavelength", "Frequency", "Amplitude"},                               // Q12
    {"2 m/s", "5 m/s", "10 m/s", "20*pi m/s"},                                       // Q13
    {"1 m", "5 m", "2 m", "10 m"},                                                   // Q14
    {"0.6 m", "0.3 m", "1.5 m", "3 m"},                                              // Q15
    // ---- Normal questions (1-5) ----
    "Which of the following is a prime number?",
    "Which of the following is a composite number?",
    "Which of the following is an irrational number?",
    "Which is the only even prime number?",
    "The set of real numbers consists of:",

    // ---- BBSUL style questions (6-15) ----
    "How many prime numbers are there between 1 and 20?",
    "What is the smallest prime number greater than 90?",
    "What is the sum of the first five prime numbers?",
    "How many composite numbers are there between 1 and 10 (inclusive)?",
    "Which of the following is an irrational number?",
    "The product of a non-zero rational number and an irrational number is always:",
    "Which of the following is a rational number?",
    "Two prime numbers have a sum of 24 and a product of 143. What is the larger prime?",
    "Which of the following is a prime number?",
    "Which of the following rational numbers lies between sqrt(2) and sqrt(3)?"
};

    char answerkey[] = {
 'B', 'A', 'C', 'A', 'D',            // Q1-5
    'C', 'B', 'A', 'C', 'D',            // Q6-10
    'A', 'C', 'B', 'C', 'A',
        'C', 'D', 'A', 'B', 'C',            // Q1-5
    'C', 'A', 'B', 'D', 'C',            // Q6-10
    'B', 'A', 'B', 'D', 'C'  
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