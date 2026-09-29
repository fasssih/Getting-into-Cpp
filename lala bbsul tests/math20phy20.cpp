#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        // ---- Normal questions (1-5) ----
    "What is the formula for the nth term of an AP with first term a and common difference d?",
    "What is the common difference of the AP 12, 9, 6, 3, ...?",
    "What is the 8th term of the AP 2, 5, 8, 11, ...?",
    "What is the formula for the sum of the first n terms of an AP?",
    "What is the sum of the first 5 natural numbers?",

    // ---- BBSUL style questions (6-15) ----
    "What is the 20th term of the AP 5, 9, 13, 17, ...?",
    "Which term of the AP 4, 10, 16, 22, ... is equal to 100?",
    "What is the sum of the first 20 terms of the AP 3, 7, 11, 15, ...?",
    "In an AP, the 3rd term is 16 and the 7th term is 32. What is the 10th term?",
    "The sum of the first n terms of an AP is S_n = 3n^2 + 2n. What is the common difference?",
    "What is the sum of all multiples of 5 from 5 to 100 (inclusive)?",
    "How many multiples of 7 lie between 50 and 200?",
    "What is the sum of the first 15 odd natural numbers?",
    "Three numbers in an AP have a sum of 21 and a product of 231. What is the largest number?",
    "The sum of the first 10 terms of an AP is 120 and its first term is 3. What is the common difference?",
         // ---- Normal questions (1-5) ----
    "What happens when two like charges (both positive or both negative) are brought near each other?",
    "What is the SI unit of electric charge?",
    "What is the charge of an electron?",
    "Which statement correctly describes the conservation of charge?",
    "Quantization of charge means that the charge on any body is always:",

    // ---- BBSUL style questions (6-15) ----
    "How many electrons together carry a charge of 1 C? (e = 1.6 x 10^-19 C)",
    "Two point charges exert a force F on each other. If the distance between them is doubled, the force becomes:",
    "Two point charges of 2 uC each are placed 0.1 m apart in air. What is the force between them? (k = 9 x 10^9 N m^2/C^2)",
    "The force between two charges at a distance r is F. What is the force when the distance is increased to 3r?",
    "Two identical metal spheres carry charges of +6 uC and -2 uC. They are touched together and then separated. What is the charge on each sphere?",
    "The magnitude of one charge is doubled and the distance between the two charges is also doubled. The force between them becomes:",
    "Which of the following can be the magnitude of a charge on a body? (e = 1.6 x 10^-19 C)",
    "A body has a charge of -3.2 x 10^-6 C. How many excess electrons does it have? (e = 1.6 x 10^-19 C)",
    "Two charges +q and +4q are placed a distance d apart. At what point on the line joining them would a third charge experience zero net force?",
    "Two equal charges placed 10 cm apart in air repel each other with a force of 0.9 N. What is the magnitude of each charge? (k = 9 x 10^9 N m^2/C^2)"
    };

    string options[][4] = {
   {"a + (n-1)d", "a + nd", "a + (n+1)d", "a x r^(n-1)"},                          // Q1
    {"3", "-3", "4", "-4"},                                                         // Q2
    {"21", "24", "23", "26"},                                                       // Q3
    {"n[2a + (n-1)d]", "n/2 [a + nd]", "n(a + d)", "n/2 [2a + (n-1)d]"},            // Q4
    {"10", "15", "20", "25"},                                                       // Q5
    {"81", "79", "85", "89"},                                                       // Q6
    {"15", "16", "17", "18"},                                                       // Q7
    {"780", "820", "800", "840"},                                                   // Q8
    {"40", "48", "52", "44"},                                                       // Q9
    {"3", "5", "6", "11"},                                                          // Q10
    {"1050", "1000", "1100", "1155"},                                               // Q11
    {"20", "21", "22", "23"},                                                       // Q12
    {"200", "215", "250", "225"},                                                   // Q13
    {"9", "11", "10", "12"},                                                        // Q14
    {"2", "1", "3", "4"},                                                            // Q15
        {"They attract", "They repel", "They neutralize", "No force acts"},                    // Q1
    {"Coulomb", "Ampere", "Volt", "Farad"},                                                // Q2
    {"+1.6 x 10^-19 C", "0", "-1.6 x 10^-19 C", "-9.1 x 10^-31 C"},                        // Q3
    {"Charge can be created but not destroyed", "Charge can be destroyed but not created", "Charge is always positive", "The total charge of an isolated system remains constant"}, // Q4
    {"Any value", "An integer multiple of e", "A half-integer multiple of e", "Zero"},     // Q5
    {"6.25 x 10^18", "1.6 x 10^19", "6.25 x 10^19", "1.6 x 10^-19"},                       // Q6
    {"Halved", "Doubled", "Four times", "One-fourth"},                                     // Q7
    {"0.36 N", "36 N", "3.6 N", "360 N"},                                                  // Q8
    {"F/3", "F/9", "F/6", "9F"},                                                           // Q9
    {"+4 uC", "+8 uC", "-2 uC", "+2 uC"},                                                  // Q10
    {"Unchanged", "Doubled", "Halved", "One-fourth"},                                      // Q11
    {"2.4 x 10^-19 C", "5.0 x 10^-19 C", "4.8 x 10^-19 C", "0.8 x 10^-19 C"},              // Q12
    {"2 x 10^13", "2 x 10^12", "5 x 10^12", "5 x 10^13"},                                  // Q13
    {"d/2 from +q", "d/3 from +q", "d/5 from +q", "2d/3 from +q"},                         // Q14
    {"0.1 uC", "10 uC", "100 uC", "1 uC"}
    };

    char answerkey[] = {
        'A', 'B', 'C', 'D', 'B',            // Q1-5
    'A', 'C', 'B', 'D', 'C',            // Q6-10
    'A', 'B', 'D', 'B', 'A',             // Q11-15
    'B', 'A', 'C', 'D', 'B',            // Q1-5
    'A', 'D', 'C', 'B', 'D',            // Q6-10
    'C', 'C', 'A', 'B', 'D'             // Q11-15
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