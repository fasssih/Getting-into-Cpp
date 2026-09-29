#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        // ---- 5 Normal ----
    "1. In thermodynamics, what is a 'system'?",
    "2. State the First Law of Thermodynamics.",
    "3. What is 'internal energy' of a system?",
    "4. In an isothermal process, what remains constant?",
    "5. In an adiabatic process, what quantity is zero?",

    // ---- 10 BBSUL Style ----
    "6. A gas absorbs 500 J of heat and does 200 J of work on its surroundings. What is the change in internal energy?",
    "7. Which of the following best states the Second Law of Thermodynamics?",
    "8. A heat engine takes in 800 J of heat and does 300 J of useful work. What is its efficiency?",
    "9. In the equation Q = ΔU + W, if the system does work ON it (compression), how is W represented?",
    "10. Why is 100% efficiency impossible for a real heat engine, according to the Second Law?",
    "11. During an adiabatic compression of a gas, what happens to its temperature?",
    "12. A system releases 300 J of heat while its internal energy decreases by 500 J. How much work is done?",
    "13. Which process has Q = 0 in the first law equation?",
    "14. In an isothermal expansion of an ideal gas, since ΔU = 0, what does the first law reduce to?",
    "15. A heat engine operates between a hot reservoir and a cold reservoir. Which factor increases its theoretical maximum efficiency?",
        // ---- 5 Normal ----
    "1. A number is divisible by 2 if its last digit is:",
    "2. A number is divisible by 3 if:",
    "3. Which of the following numbers is divisible by 5?",
    "4. A number is divisible by 10 if its last digit is:",
    "5. What is the remainder when 17 is divided by 4?",

    // ---- 10 BBSUL Style ----
    "6. A number is divisible by 9 if:",
    "7. Which of the following is divisible by both 2 and 3 (i.e., by 6)?",
    "8. A number is divisible by 4 if:",
    "9. A number is divisible by 11 if:",
    "10. What is the remainder when 100 is divided by 7?",
    "11. A number N leaves a remainder of 3 when divided by 5. What is the remainder when (N + 7) is divided by 5?",
    "12. Which of the following numbers is divisible by 8?",
    "13. If a number is divisible by both 4 and 9, it must also be divisible by:",
    "14. A 4-digit number ends in 0 and its digit sum is 12. By which of these is it definitely divisible?",
    "15. What is the remainder when 2^10 is divided by 3?"
    };

    string options[][4] = {
    // 1
    {"The part of the universe under study, separated from its surroundings", "Only solids and liquids, not gases", "Anything with zero internal energy", "The container holding a gas only"},
    // 2
    {"Energy can be created but not destroyed", "Heat added to a system equals the change in internal energy plus work done by the system", "Entropy always decreases", "Work done is always equal to heat lost"},
    // 3
    {"The total kinetic and potential energy of molecules within the system", "Only the kinetic energy of the container", "The heat absorbed by the system only", "The work done by the system only"},
    // 4
    {"Temperature", "Pressure", "Volume", "Heat"},
    // 5
    {"Heat exchange with surroundings (Q)", "Work done (W)", "Change in internal energy (ΔU)", "Temperature"},

    // 6
    {"300 J", "700 J", "200 J", "-200 J"},
    // 7
    {"Heat cannot flow spontaneously from a colder body to a hotter body without external work", "Energy can be destroyed in isolated systems", "All heat engines are 100% efficient", "Work can be fully converted to heat with no losses"},
    // 8
    {"37.5%", "62.5%", "26.7%", "50%"},
    // 9
    {"W is negative", "W is positive", "W is zero", "W equals Q"},
    // 10
    {"Some heat is always lost to the cold reservoir/surroundings and cannot be fully converted to work", "Engines are poorly designed", "Friction is the only cause of energy loss", "Q is always equal to zero in real engines"},
    // 11
    {"Increases", "Decreases", "Stays constant", "Becomes zero"},
    // 12
    {"200 J done ON the system", "200 J done BY the system", "800 J done BY the system", "-800 J done ON the system"},
    // 13
    {"Isothermal process", "Adiabatic process", "Isobaric process", "Isochoric process"},
    // 14
    {"Q = W", "Q = ΔU", "W = 0", "Q = 0"},
    // 15
    {"A larger temperature difference between hot and cold reservoirs", "A smaller temperature difference between reservoirs", "Increasing the mass of the working substance", "Decreasing the heat absorbed from the hot reservoir"},
        // 1
    {"0, 2, 4, 6, or 8", "0 or 5", "Any odd digit", "Only 0"},
    // 2
    {"The sum of its digits is divisible by 3", "The last digit is divisible by 3", "It ends in 0, 3, 6, or 9", "It is an odd number"},
    // 3
    {"235", "342", "128", "471"},
    // 4
    {"0", "5", "2", "Any even digit"},
    // 5
    {"1", "4", "0", "3"},

    // 6
    {"The sum of its digits is divisible by 9", "It is divisible by 3 and 6", "Its last digit is 9", "It has 9 digits"},
    // 7
    {"48", "27", "34", "15"},
    // 8
    {"The number formed by its last two digits is divisible by 4", "Its last digit is divisible by 4", "The sum of its digits is divisible by 4", "It is an even number"},
    // 9
    {"The difference between the sum of digits in odd and even positions is 0 or a multiple of 11", "The sum of all its digits is 11", "It ends in the digit 1", "It has exactly 11 digits"},
    // 10
    {"2", "1", "3", "0"},
    // 11
    {"0", "1", "2", "3"},
    // 12
    {"104", "106", "110", "102"},
    // 13
    {"36", "13", "6", "40"},
    // 14
    {"Only by 3", "By both 3 and 10", "Only by 10", "By 9"},
    // 15
    {"1", "0", "2", "3"}

    };

    char answerkey[] = {
    'A', 'B', 'A', 'A', 'A',
    'A', 'A', 'A', 'A', 'A',
    'A', 'A', 'B', 'A', 'A',
    'A', 'A', 'A', 'A', 'A',
    'A', 'A', 'A', 'A', 'B',
    'A', 'A', 'A', 'B', 'A'
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