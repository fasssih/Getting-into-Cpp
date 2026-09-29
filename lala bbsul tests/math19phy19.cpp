#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
// ---- Normal questions (1-5) ----
    "What is the next term in the sequence 2, 4, 6, 8, ...?",
    "What is the common difference of the sequence 5, 8, 11, 14, ...?",
    "What is the common ratio of the sequence 3, 6, 12, 24, ...?",
    "Which of the following sequences is a geometric sequence?",
    "What is the next term in the sequence 1, 4, 9, 16, ...?",

    // ---- BBSUL style questions (6-15) ----
    "What is the 10th term of the arithmetic sequence 3, 7, 11, 15, ...?",
    "What is the sum of the first 10 terms of the arithmetic sequence 2, 4, 6, 8, ...?",
    "What is the 6th term of the geometric sequence 2, 6, 18, 54, ...?",
    "In an arithmetic sequence, the 5th term is 17 and the 9th term is 33. What is the first term?",
    "What is the sum of the first 5 terms of the geometric sequence 1, 2, 4, 8, ...?",
    "How many terms are there in the arithmetic sequence 7, 13, 19, ..., 121?",
    "If 3, x, 27 are in a geometric sequence with all positive terms, what is x?",
    "What is the sum of the first 15 terms of the arithmetic sequence 4, 7, 10, 13, ...?",
    "What is the next term in the sequence 2, 6, 12, 20, 30, ...?",
    "Three numbers in an arithmetic sequence have a sum of 30 and the largest is 14. What is the smallest number?",
        // ---- Normal questions (1-5) ----
    "Sound is produced by:",
    "Sound can NOT travel through:",
    "The pitch of a sound depends on its:",
    "The loudness of a sound depends mainly on its:",
    "The repetition of sound caused by its reflection from a surface is called:",

    // ---- BBSUL style questions (6-15) ----
    "The speed of sound in air is 340 m/s and the human ear retains a sound for 0.1 s. What is the minimum distance to a reflecting wall needed to hear a distinct echo?",
    "A person hears an echo 2 s after clapping. If the speed of sound is 340 m/s, how far away is the reflecting surface?",
    "The speed of sound in air is 331 m/s at 0 degrees C and increases by 0.6 m/s for every 1 degree C rise. What is its speed at 20 degrees C?",
    "Two tuning forks of frequencies 256 Hz and 260 Hz are sounded together. How many beats are heard per second?",
    "In which of the following does sound travel fastest?",
    "Thunder is heard 3 s after a lightning flash is seen. If the speed of sound is 340 m/s, how far away did the lightning strike? (Ignore the travel time of light.)",
    "A source of sound moves towards a stationary observer. What happens to the frequency heard by the observer?",
    "A source of 320 Hz moves at 20 m/s towards a stationary observer. If the speed of sound is 340 m/s, what frequency does the observer hear?",
    "Resonance occurs when:",
    "If the distance from a point source of sound is doubled, the intensity of the sound becomes:"
    };

    string options[][4] = {
   {"9", "10", "12", "14"},                        // Q1
    {"3", "4", "5", "2"},                           // Q2
    {"3", "4", "2", "6"},                           // Q3
    {"2, 4, 6, 8", "3, 9, 27, 81", "1, 3, 5, 7", "10, 20, 30, 40"}, // Q4
    {"20", "24", "25", "36"},                       // Q5
    {"39", "43", "40", "36"},                       // Q6
    {"100", "110", "120", "55"},                    // Q7
    {"162", "54", "486", "1458"},                   // Q8
    {"3", "1", "5", "7"},                           // Q9
    {"15", "32", "63", "31"},                       // Q10
    {"18", "19", "20", "21"},                       // Q11
    {"12", "9", "15", "81"},                        // Q12
    {"375", "300", "345", "420"},                   // Q13
    {"40", "42", "44", "36"},                       // Q14
    {"6", "4", "8", "10"},                           // Q15
     {"Vibrating objects", "Stationary objects", "Light rays", "Magnetic fields"},       // Q1
    {"Air", "Water", "Steel", "Vacuum"},                                                // Q2
    {"Amplitude", "Speed", "Frequency", "Medium only"},                                 // Q3
    {"Amplitude", "Frequency", "Pitch", "Wavelength"},                                  // Q4
    {"Resonance", "Echo", "Beats", "Doppler effect"},                                   // Q5
    {"8.5 m", "17 m", "34 m", "340 m"},                                                 // Q6
    {"170 m", "680 m", "340 m", "1020 m"},                                              // Q7
    {"343 m/s", "331 m/s", "337 m/s", "349 m/s"},                                       // Q8
    {"2", "4", "8", "516"},                                                             // Q9
    {"Air", "Water", "Steel", "Vacuum"},                                                // Q10
    {"1020 m", "340 m", "680 m", "1360 m"},                                             // Q11
    {"It decreases", "It increases", "It stays the same", "It becomes zero"},           // Q12
    {"340 Hz", "300 Hz", "320 Hz", "360 Hz"},                                           // Q13
    {"Two waves have different speeds", "The amplitude becomes zero", "The driving frequency is double the natural frequency", "The driving frequency equals the natural frequency"}, // Q14
    {"Half", "Double", "One-fourth", "Four times"}
    };

    char answerkey[] = {
        'B', 'A', 'C', 'B', 'C',            // Q1-5
    'A', 'B', 'C', 'B', 'D',            // Q6-10
    'C', 'B', 'A', 'B', 'A',             // Q11-15
    'A', 'D', 'C', 'A', 'B',            // Q1-5
    'B', 'C', 'A', 'B', 'C',            // Q6-10
    'A', 'B', 'A', 'D', 'C'             // Q11-15
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