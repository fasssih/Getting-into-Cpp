#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        // ---- Normal (5) ----
    "Which symbol is used to represent 'less than' in an inequality?",
    "Which symbol is used to represent 'greater than' in an inequality?",
    "What does the symbol <= (less-than-or-equal-to) mean?",
    "What does the symbol >= (greater-than-or-equal-to) mean?",
    "On a number line, which type of circle is used for a strict inequality (< or >)?",
 
    // ---- BBSUL style (10) ----
    "If x < 5, which of the following values does NOT satisfy the inequality?",
    "Which inequality is represented by a number line with a closed circle at 3 and shading to the right?",
    "If -2x > 6, what is the correct simplified inequality for x?",
    "Which of the following values satisfies x <= -1?",
    "On a number line, a closed (filled) circle at a point indicates that:",
    "If 3 <= x < 7, which of the following values satisfies the compound inequality?",
    "Which inequality has NO solution if x must be a natural number and x < 0?",
    "When multiplying or dividing both sides of an inequality by a negative number, the inequality sign:",
    "Which symbol correctly completes this statement: -5 ___ 3 ?",
    "A number line shows shading starting from 4, extending to the right, with a closed circle at 4. Which inequality does this represent?",
    // ---- Normal (5) ----
    "What is stress in physics defined as?",
    "What is strain defined as?",
    "What does Hooke's law state?",
    "What is the SI unit of stress?",
    "Strain is the ratio of which two quantities?",
 
    // ---- BBSUL style (10) ----
    "A wire of original length 2 m stretches to 2.02 m under load. What is the strain?",
    "If stress = 5x10^6 N/m^2 and strain = 0.001, what is the Young's modulus?",
    "According to Hooke's law F = kx, if k = 200 N/m and x = 0.05 m, find F.",
    "Which type of stress acts perpendicular to the cross-section, causing elongation or compression?",
    "Which type of stress causes a change in shape without a change in volume?",
    "Beyond which point does a material no longer obey Hooke's law?",
    "If a spring extends 4 cm under a 20 N force, what is its spring constant?",
    "Which of the following is NOT a valid unit of stress?",
    "Strain has which of the following units?",
    "On a stress-strain graph, the straight-line portion near the origin represents:"
    };

    string options[][4] = {
   // ---- Normal (5) ----
    {"<", ">", "<=", ">="},
    {"<", ">", "<=", ">="},
    {"Less than", "Greater than", "Less than or equal to", "Greater than or equal to"},
    {"Less than", "Greater than", "Less than or equal to", "Greater than or equal to"},
    {"Open circle", "Closed circle", "Square", "Triangle"},
 
    // ---- BBSUL style (10) ----
    {"2", "4", "5", "-3"},
    {"x < 3", "x > 3", "x <= 3", "x >= 3"},
    {"x > -3", "x < -3", "x > 3", "x < 3"},
    {"0", "1", "-1", "-0.5"},
    {"The point is included in the solution", "The point is excluded from the solution", "The inequality has no solution", "The point represents zero"},
    {"2", "3", "7", "8"},
    {"x < 0", "x > 0", "x <= 0", "x >= 0"},
    {"Stays the same", "Reverses direction", "Becomes an equal sign", "Is removed"},
    {">", "<", ">=", "="},
    {"x < 4", "x > 4", "x <= 4", "x >= 4"},
    // ---- Normal (5) ----
    {"Force per unit area", "Force per unit length", "Change in length per original length", "Force per unit volume"},
    {"Force per unit area", "Change in length divided by original length", "Force per unit volume", "Mass per unit volume"},
    {"Stress is inversely proportional to strain", "Force is proportional to extension within elastic limit", "Strain is always constant", "Stress equals strain squared"},
    {"Newton", "Pascal (N/m^2)", "Joule", "No unit (dimensionless)"},
    {"Force and area", "Change in length and original length", "Mass and volume", "Energy and force"},
 
    // ---- BBSUL style (10) ----
    {"0.01", "0.1", "0.02", "1.01"},
    {"5x10^3 N/m^2", "5x10^9 N/m^2", "5x10^6 N/m^2", "5x10^-3 N/m^2"},
    {"4 N", "10 N", "20 N", "100 N"},
    {"Shear stress", "Longitudinal (tensile/compressive) stress", "Volumetric stress", "Torsional stress"},
    {"Tensile stress", "Compressive stress", "Shear stress", "Bulk stress"},
    {"Yield point", "Elastic limit", "Breaking point", "Origin point"},
    {"5 N/m", "50 N/m", "500 N/m", "80 N/m"},
    {"N/m^2", "Pascal", "N*m", "dyne/cm^2"},
    {"Newton", "Pascal", "Meter", "No units (dimensionless)"},
    {"Plastic deformation region", "The region where Hooke's law is obeyed", "The breaking point", "The region beyond elastic limit"}
    };

    char answerkey[] = {
        // ---- Normal (5) ----
    'A', 'B', 'C', 'D', 'A',
 
    // ---- BBSUL style (10) ----
    'C', 'D', 'B', 'C', 'A', 'B', 'A', 'B', 'B', 'D',
     // ---- Normal (5) ----
    'A', 'B', 'B', 'B', 'B',
 
    // ---- BBSUL style (10) ----
    'A', 'B', 'B', 'B', 'C', 'B', 'C', 'C', 'D', 'B'
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