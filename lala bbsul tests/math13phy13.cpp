#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        // Normal (conceptual)
    "Which of these is the standard form of a linear equation in two variables?",
    "Which method solves one equation for a variable and substitutes it into the other?",
    "Which method adds or subtracts equations to eliminate one variable?",
    "How many independent linear equations are needed to solve for two unknowns?",
    "What do we call two linear equations that represent parallel lines with no common solution?",

    // BBSUL-style (applied/numerical)
    "Solve by substitution: x + y = 10, x - y = 2. Find x.",
    "Solve by substitution: x + y = 7, y = x - 1. Find y.",
    "Solve by elimination: 3x + 2y = 12, x - 2y = 0. Find x.",
    "Solve by elimination: 2x + 3y = 13, 4x - 3y = 5. Find x.",
    "The sum of two numbers is 15 and their difference is 3. Find the larger number.",
    "Two pens and three books cost Rs. 100; three pens and two books cost Rs. 90. Find the price of one pen.",
    "Solve: x + 2y = 8, x - y = 2. Find y.",
    "Solve: 5x - 2y = 4, 3x + 2y = 12. Find x.",
    "A father's age is 3 times his son's age. After 5 years, the father's age will be 2 times the son's age plus 8. Find the son's present age.",
    "The length of a rectangle is 4 units more than its width, and its perimeter is 32 units. Find the width.",
        // Normal (conceptual)
    "What is the SI unit of pressure?",
    "Density is defined as mass per unit ___?",
    "Pascal's law states that pressure applied to an enclosed fluid is transmitted:",
    "Archimedes' principle states that the buoyant force on an object equals the weight of the:",
    "The continuity equation (A1V1 = A2V2) is based on the conservation of:",

    // BBSUL-style (applied/numerical)
    "A force of 50 N acts on an area of 2 m^2. Calculate the pressure.",
    "A block has mass 500 g and volume 100 cm^3. Find its density.",
    "Standard atmospheric pressure is approximately equal to how many Pascals?",
    "In a hydraulic press, A1 = 10 cm^2, A2 = 100 cm^2, F1 = 50 N. Find F2 using Pascal's law.",
    "Find the pressure at a depth of 5 m in water (density = 1000 kg/m^3, g = 10 m/s^2).",
    "A solid of volume 0.002 m^3 is fully submerged in water (density = 1000 kg/m^3, g = 10 m/s^2). Find the buoyant force.",
    "Water flows through a pipe of area 4 cm^2 with velocity 3 m/s. If the pipe narrows to 2 cm^2, find the new velocity.",
    "According to Bernoulli's principle, when the speed of a fluid increases, its pressure:",
    "A ship floats on water because:",
    "Find the density of an object of mass 2 kg and volume 0.004 m^3."
    };

    string options[][4] = {
     {"ax + by = c", "ax^2 + by = c", "a/x + b/y = c", "ax + by^2 = c"},
    {"Elimination method", "Substitution method", "Graphical method", "Matrix method"},
    {"Substitution method", "Graphical method", "Elimination method", "Trial and error"},
    {"One", "Two", "Three", "Four"},
    {"Consistent equations", "Dependent equations", "Inconsistent equations", "Simultaneous equations"},

    {"4", "6", "8", "10"},
    {"2", "3", "4", "5"},
    {"2", "3", "4", "6"},
    {"1", "2", "3", "4"},
    {"6", "7", "8", "9"},
    {"10", "12", "14", "16"},
    {"1", "2", "3", "4"},
    {"1", "2", "3", "4"},
    {"10", "11", "12", "13"},
    {"4", "5", "6", "7"},
        {"Pascal", "Newton", "Joule", "Watt"},
    {"Area", "Volume", "Length", "Force"},
    {"Only in the direction of the applied force", "Unequally in all directions", "Equally in all directions", "Only downward"},
    {"Object itself", "Fluid displaced", "Container", "Air displaced"},
    {"Energy", "Momentum", "Mass", "Charge"},

    {"20 Pa", "25 Pa", "30 Pa", "35 Pa"},
    {"3 g/cm^3", "4 g/cm^3", "5 g/cm^3", "6 g/cm^3"},
    {"1.01 x 10^3 Pa", "1.01 x 10^4 Pa", "1.01 x 10^5 Pa", "1.01 x 10^6 Pa"},
    {"200 N", "300 N", "400 N", "500 N"},
    {"25000 Pa", "40000 Pa", "50000 Pa", "60000 Pa"},
    {"10 N", "15 N", "20 N", "25 N"},
    {"4 m/s", "5 m/s", "6 m/s", "7 m/s"},
    {"Increases", "Decreases", "Remains constant", "Becomes zero"},
    {"Its weight is less than the buoyant force", "Its weight equals the buoyant force", "Its weight is more than the buoyant force", "It has no weight"},
    {"400 kg/m^3", "500 kg/m^3", "600 kg/m^3", "700 kg/m^3"}
    };

    char answerkey[] = {
    'A', 'B', 'C', 'B', 'C',
    'B', 'B', 'B', 'C', 'D',
    'C', 'B', 'B', 'D', 'C',
    'A', 'B', 'C', 'B', 'C',
    'B', 'C', 'C', 'D', 'C',
    'C', 'C', 'B', 'B', 'B'
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