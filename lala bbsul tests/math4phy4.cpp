#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {

    // ---------- EASY (5) ----------
    "0.5 + 0.3 = ?",
    "1.2 - 0.5 = ?",
    "0.25 as a fraction in simplest form is?",
    "Round 3.47 to the nearest tenth.",
    "0.1 x 10 = ?",

    // ---------- NORMAL (5) ----------
    "2.35 + 1.65 = ?",
    "4.8 ÷ 0.4 = ?",
    "Convert 3/4 to a decimal.",
    "Round 12.678 to the nearest hundredth.",
    "0.75 x 0.2 = ?",

    // ---------- MIXED (5) ----------
    "Estimate the product of 6.89 x 3.02 by rounding each number first.",
    "Convert 0.625 to a fraction in simplest form.",
    "5.6 - 2.75 + 1.3 = ?",
    "Round 7.995 to the nearest tenth.",
    "9.6 ÷ 0.03 = ?",

    // ---------- EASY (5) ----------
    "What is the SI unit of speed?",
    "Distance is a ______ quantity (has magnitude only).",
    "A car travels 100 m in 20 s. What is its speed?",
    "Displacement is a ______ quantity (has magnitude and direction).",
    "Acceleration is the rate of change of ______.",

    // ---------- NORMAL (5) ----------
    "A body moving with constant speed but changing direction has:",
    "Which equation of motion relates v, u, a, and t?",
    "A car covers 60 km in 1 hr then 40 km in 1 hr. Find average speed.",
    "Uniform motion means an object covers:",
    "If a body starts from rest and accelerates at 2 m/s^2 for 5 s, find its final velocity.",

    // ---------- MIXED (5) ----------
    "A body moves 3 m east then 4 m north. Find the magnitude of displacement.",
    "The speed of an object at a particular instant of time is called:",
    "Using s = ut + (1/2)at^2, find s when u=0, a=4 m/s^2, t=3 s.",
    "A particle covers unequal distances in equal time intervals. This is:",
    "Find average velocity if displacement = 50 m and time = 10 s."
    };

    string options[][4] = {
    // ---------- EASY (5) ----------
    {"0.8", "0.7", "0.9", "8.0"},
    {"0.6", "0.7", "1.7", "0.5"},
    {"1/2", "1/5", "1/4", "2/5"},
    {"3.4", "3.5", "3.47", "3.0"},
    {"0.1", "10", "1.0", "0.01"},

    // ---------- NORMAL (5) ----------
    {"4.00", "3.90", "4.10", "3.00"},
    {"1.2", "12", "0.12", "120"},
    {"0.75", "0.34", "0.25", "1.75"},
    {"12.67", "12.7", "12.68", "12.60"},
    {"1.5", "0.15", "0.015", "15"},

    // ---------- MIXED (5) ----------
    {"18", "21", "24", "14"},
    {"5/8", "3/5", "6/25", "5/9"},
    {"4.15", "3.15", "4.05", "5.15"},
    {"7.9", "8.0", "7.99", "8.1"},
    {"32", "320", "3.2", "3200"},

    // ---------- EASY (5) ----------
    {"m/s", "m", "s", "km/hr only"},
    {"vector", "scalar", "tensor", "none"},
    {"5 m/s", "10 m/s", "2 m/s", "20 m/s"},
    {"scalar", "vector", "tensor", "neutral"},
    {"distance", "displacement", "velocity", "time"},

    // ---------- NORMAL (5) ----------
    {"zero acceleration", "non-zero acceleration", "zero velocity", "zero speed"},
    {"v = u + at", "s = vt", "a = s/t", "v = s/t"},
    {"100 km/hr", "50 km/hr", "60 km/hr", "40 km/hr"},
    {"equal distances in unequal time", "equal distances in equal time", "unequal distances in equal time", "zero distance"},
    {"5 m/s", "10 m/s", "2 m/s", "15 m/s"},

    // ---------- MIXED (5) ----------
    {"5 m", "7 m", "1 m", "12 m"},
    {"average speed", "instantaneous velocity", "uniform velocity", "average velocity"},
    {"18 m", "12 m", "9 m", "24 m"},
    {"uniform motion", "non-uniform motion", "zero motion", "circular motion only"},
    {"5 m/s", "50 m/s", "10 m/s", "500 m/s"}
    };

    char answerkey[] = {
    // Easy
    'A', 'B', 'C', 'B', 'C',
    // Normal
    'A', 'B', 'A', 'C', 'B',
    // Mixed
    'B', 'A', 'A', 'B', 'B',

    // Easy
    'A', 'B', 'A', 'B', 'C',
    // Normal
    'B', 'A', 'B', 'B', 'A',
    // Mixed
    'A', 'B', 'A', 'B', 'A'
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