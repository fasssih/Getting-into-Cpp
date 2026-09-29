#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        // ---- 5 Normal ----
    "1. What is the standard form of a quadratic equation?",
    "2. Factorize: x^2 - 5x + 6 = 0",
    "3. Solve x^2 - 7x + 12 = 0 using the quadratic formula.",
    "4. What is the discriminant of ax^2 + bx + c = 0?",
    "5. If the roots of x^2 - 6x + 8 = 0 are found, what is their sum?",

    // ---- 10 BBSUL Style ----
    "6. For ax^2 + bx + c = 0 (a ≠ 0), which condition on 'a' makes it NOT a quadratic equation?",
    "7. Convert x^2 + 6x + 5 = 0 into completed-square form.",
    "8. If discriminant D > 0 and D is a perfect square, the roots are:",
    "9. If discriminant D = 0, the nature of the roots is:",
    "10. If discriminant D < 0, the roots are:",
    "11. For 2x^2 - 4x - 6 = 0, what is the sum of the roots (using -b/a)?",
    "12. For 2x^2 - 4x - 6 = 0, what is the product of the roots (using c/a)?",
    "13. Which method rewrites ax^2 + bx + c = 0 as a(x - h)^2 + k = 0?",
    "14. If one root of x^2 - kx + 18 = 0 is 3, what is the value of k?",
    "15. A quadratic equation with roots that are equal in magnitude but opposite in sign will have which sum of roots?",
        // ---- 5 Normal ----
    "1. What is the SI unit of temperature?",
    "2. Convert 25°C to Kelvin.",
    "3. What is the formula for heat energy in terms of mass, specific heat, and change in temperature?",
    "4. What is the freezing point of water in Fahrenheit?",
    "5. What does 'specific heat capacity' of a substance measure?",

    // ---- 10 BBSUL Style ----
    "6. A body absorbs 5000 J of heat, has a mass of 2 kg, and its temperature rises from 20°C to 45°C. What is its specific heat capacity?",
    "7. Which temperature value is numerically the SAME on both Celsius and Fahrenheit scales?",
    "8. During a change of state (e.g., ice melting), why does temperature remain constant even though heat is being supplied?",
    "9. A metal rod expands when heated. This phenomenon is best explained by:",
    "10. In the formula Q = mLf, what does 'Lf' represent?",
    "11. Two substances A and B receive the same amount of heat. A has a higher specific heat capacity than B. Which statement is true?",
    "12. Convert 98.6°F (normal body temperature) to Celsius.",
    "13. Why does a calorimeter minimize heat loss to the surroundings during an experiment?",
    "14. If the mass of a substance is doubled while heat supplied and specific heat remain constant, the temperature change will:",
    "15. Which of the following correctly ranks the three temperature scales from lowest to highest numerical value at water's boiling point (at 1 atm)?"
    };

    string options[][4] = {
    // 1
    {"ax + b = 0", "ax^2 + bx + c = 0 (a ≠ 0)", "ax^3 + bx^2 + c = 0", "ax^2 + b = 0"},
    // 2
    {"(x-2)(x-3)", "(x-1)(x-6)", "(x+2)(x+3)", "(x-6)(x+1)"},
    // 3
    {"x = 3, 4", "x = 2, 6", "x = -3, -4", "x = 1, 12"},
    // 4
    {"b^2 - 4ac", "b^2 + 4ac", "4ac - b^2", "b^2 - 2ac"},
    // 5
    {"14", "8", "6", "2"},

    // 6
    {"a > 0", "a = 0", "a < 0", "a ≠ b"},
    // 7
    {"(x+3)^2 - 4 = 0", "(x+3)^2 + 4 = 0", "(x-3)^2 - 4 = 0", "(x+6)^2 - 5 = 0"},
    // 8
    {"Real and equal", "Real, unequal and rational", "Real, unequal and irrational", "Imaginary"},
    // 9
    {"Real and equal", "Real and unequal", "Imaginary", "No roots exist"},
    // 10
    {"Real and equal", "Real and unequal", "Imaginary (complex conjugates)", "Rational and unequal"},
    // 11
    {"2", "-2", "4", "-4"},
    // 12
    {"-3", "3", "-6", "6"},
    // 13
    {"Factoring", "Completing the square", "Quadratic formula", "Cross multiplication"},
    // 14
    {"9", "6", "3", "15"},
    // 15
    {"0", "1", "-1", "Undefined"},
    // 1
    {"Celsius", "Fahrenheit", "Kelvin", "Joule"},
    // 2
    {"298 K", "25 K", "273 K", "310 K"},
    // 3
    {"Q = mcΔT", "Q = mL", "Q = mgh", "Q = ½mv^2"},
    // 4
    {"0°F", "32°F", "100°F", "212°F"},
    // 5
    {"Heat needed to melt 1 kg of a substance", "Heat needed to raise 1 kg of a substance by 1°C", "Total heat content of a body", "Rate of heat flow through a substance"},

    // 6
    {"100 J/kg°C", "200 J/kg°C", "50 J/kg°C", "400 J/kg°C"},
    // 7
    {"0", "100", "-40", "32"},
    // 8
    {"The heat is being used to do work against gravity", "The heat is being used to break intermolecular bonds (latent heat), not raise temperature", "Heat is being lost to the surroundings equally", "The substance stops absorbing heat during the change"},
    // 9
    {"Increased kinetic energy of molecules causing greater average separation", "Loss of mass due to heating", "Decreased molecular vibration", "Change in the metal's chemical composition"},
    // 10
    {"Latent heat of fusion", "Latent heat of vaporization", "Linear expansion coefficient", "Specific heat capacity"},
    // 11
    {"A will show a smaller temperature change than B", "A will show a larger temperature change than B", "Both A and B will show the same temperature change", "Temperature change cannot be determined without mass"},
    // 12
    {"37°C", "36°C", "38.6°C", "35°C"},
    // 13
    {"It increases the specific heat of the water inside", "It insulates the system, reducing heat exchange with the environment", "It speeds up the chemical reaction", "It converts all heat into latent heat"},
    // 14
    {"Double", "Halve", "Remain the same", "Quadruple"},
    // 15
    {"Kelvin < Celsius < Fahrenheit", "Celsius < Fahrenheit < Kelvin", "Fahrenheit < Celsius < Kelvin", "Celsius < Kelvin < Fahrenheit"}
    };

    char answerkey[] = {
    'B', 'A', 'A', 'A', 'C',
    'B', 'A', 'B', 'A', 'C',
    'C', 'A', 'B', 'B', 'A',
    'C', 'A', 'A', 'B', 'B',
    'B', 'C', 'B', 'A', 'A',
    'A', 'A', 'B', 'B', 'B'
    };
    char labels[] = {'A','B','C','D'};
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = 4;
    for(int i = 0; i<size; i++){
        cout<<"*************************";
        cout<<'\n'<<questions[i];
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