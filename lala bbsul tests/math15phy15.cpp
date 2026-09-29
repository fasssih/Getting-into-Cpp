#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        // ---- 5 Normal ----
    "1. According to the kinetic theory of gases, gas pressure is caused by:",
    "2. What happens to the average kinetic energy of gas molecules as temperature increases?",
    "3. What is an 'ideal gas'?",
    "4. What does RMS speed stand for?",
    "5. As temperature (in Kelvin) increases, how does the RMS speed of gas molecules change?",

    // ---- 10 BBSUL Style ----
    "6. If the absolute temperature of a gas is doubled, the RMS speed of its molecules becomes:",
    "7. Two different gases, A (light) and B (heavy), are at the SAME temperature. Which statement about their molecules is true?",
    "8. Why does gas pressure increase when the volume of a container is decreased at constant temperature?",
    "9. The mean kinetic energy of an ideal gas molecule depends on:",
    "10. Which assumption of kinetic theory explains why gas pressure exists at all (even with no external force)?",
    "11. If the temperature of a gas is doubled (in Kelvin) at constant volume, what happens to its pressure?",
    "12. At absolute zero (0 K), according to kinetic theory, molecular motion should:",
    "13. Which of these is NOT an assumption of the ideal gas model?",
    "14. Why do real gases deviate from ideal gas behavior at high pressure and low temperature?",
    "15. If the mass of gas molecules is doubled while keeping temperature and number of molecules constant, RMS speed will:",
        // ---- 5 Normal ----
     "1. What does HCF stand for?",
    "2. What does LCM stand for?",
    "3. Find the HCF of 12 and 18.",
    "4. Find the LCM of 4 and 6.",
    "5. What is the prime factorization of 60?",

    // ---- 10 BBSUL Style ----
    "6. The HCF of two numbers is 6 and their LCM is 72. If one number is 18, what is the other number?",
    "7. Which of the following pairs of numbers are co-prime (HCF = 1)?",
    "8. Using prime factorization, find the HCF of 36 and 60.",
    "9. Using prime factorization, find the LCM of 18 and 24.",
    "10. For any two numbers a and b, which relationship between HCF, LCM, a, and b is always true?",
    "11. Three bells ring at intervals of 4, 6, and 8 minutes respectively. If they ring together at 12:00, when will they next ring together?",
    "12. What is the greatest number that divides both 84 and 126 exactly?",
    "13. If two numbers are in the ratio 2:3 and their HCF is 5, what is their LCM?",
    "14. A number when expressed as a product of primes is 2^3 × 3^2 × 5. How many total prime factors (with repetition) does it have?",
    "15. Which of the following is a correct step in finding the LCM using prime factorization?"

    };

    string options[][4] = {
   // 1
    {"Gravitational pull between molecules", "Collisions of molecules with container walls", "Friction between molecules", "Chemical reactions inside the container"},
    // 2
    {"Increases", "Decreases", "Stays the same", "Becomes zero"},
    // 3
    {"A gas with molecules that have negligible volume and no intermolecular forces", "A gas that is always at room temperature", "A gas that never changes pressure", "A gas made of only one type of atom"},
    // 4
    {"Rate of Molecular Speed", "Root Mean Square speed", "Relative Molecular Speed", "Random Motion Speed"},
    // 5
    {"Increases", "Decreases", "Stays constant", "Becomes negative"},

    // 6
    {"Doubled", "Halved", "Multiplied by √2", "Quadrupled"},
    // 7
    {"Both have the same average kinetic energy but different RMS speeds", "Both have the same RMS speed but different kinetic energy", "Heavier gas B has higher kinetic energy than A", "Lighter gas A has lower average kinetic energy than B"},
    // 8
    {"Molecules move slower in a smaller volume", "Molecules collide with the walls more frequently in a smaller space", "Molecules lose energy when compressed", "The number of molecules decreases"},
    // 9
    {"Only on the absolute temperature of the gas", "Only on the mass of the molecules", "Only on the pressure of the gas", "Only on the volume of the container"},
    // 10
    {"Molecules attract each other strongly", "Molecules are in continuous random motion and collide with the walls", "Molecules are stationary until heated", "Molecules have fixed positions in a lattice"},
    // 11
    {"Doubles", "Halves", "Stays the same", "Quadruples"},
    // 12
    {"Increase rapidly", "Theoretically cease (minimum kinetic energy)", "Stay the same as at room temperature", "Become random and chaotic"},
    // 13
    {"Molecules are in constant random motion", "Collisions between molecules are perfectly elastic", "Molecules have significant volume compared to container size", "There are no intermolecular forces between molecules"},
    // 14
    {"Molecular volume and intermolecular forces become significant and can no longer be ignored", "Molecules stop moving completely", "Gas molecules turn into liquid instantly", "Kinetic theory only applies to solids"},
    // 15
   // 1
    {"Highest Common Factor", "Highest Common Fraction", "Half Common Factor", "Highest Composite Factor"},
    // 2
    {"Least Common Multiple", "Lowest Common Method", "Largest Common Multiple", "Least Composite Multiple"},
    // 3
    {"6", "3", "9", "12"},
    // 4
    {"12", "24", "10", "6"},
    // 5
    {"2^2 × 3 × 5", "2 × 3^2 × 5", "2^2 × 3 × 5^2", "2 × 3 × 5^2"},

    // 6
    {"24", "12", "36", "48"},
    // 7
    {"8 and 15", "6 and 9", "10 and 15", "12 and 18"},
    // 8
    {"12", "6", "18", "24"},
    // 9
    {"72", "36", "144", "48"},
    // 10
    {"HCF × LCM = a × b", "HCF + LCM = a + b", "HCF - LCM = a - b", "HCF ÷ LCM = a ÷ b"},
    // 11
    {"12:24", "12:12", "12:48", "1:00"},
    // 12
    {"42", "21", "14", "28"},
    // 13
    {"30", "15", "45", "60"},
    // 14
    {"6", "5", "3", "10"},
    // 15
    {"Take the product of all prime factors with the LOWEST powers", "Take the product of all prime factors with the HIGHEST powers", "Take only the common prime factors", "Add all the prime factors together"}
    };

    char answerkey[] = {
    'B', 'A', 'A', 'B', 'A',
    'C', 'A', 'B', 'A', 'B',
    'A', 'B', 'C', 'A', 'B',
    'A', 'A', 'A', 'B', 'B',
    'A', 'A', 'A', 'C', 'A',
    'A', 'B', 'B', 'A', 'B'

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