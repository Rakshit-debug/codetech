
// first aproch 

/*#include <iostream>
using namespace std ;

int main (){
    int final_result = 0 ;
    int palyquiz(void);
    final_result = palyquiz();
    
    cout << "your score is ... "  << final_result;

    if (final_result >=6){
        cout<< "your are pass "<< endl;
    }
    else{
        cout<< " you are fail "<< endl;
    }

}
int palyquiz(){
    cout<< " ----------welcome to quize game -------"<<endl;
    cout<< " ----------read the istrenstions carefully -------"<<endl;
    cout<< " step 1 : quize contains 10 questions "<<endl;
    cout<< " step 2 : right answer you got 1 marks , no negative markings"<<endl;
    cout<< " step 3 : press s or S to start the game"  <<endl;
    cout<< " step 4 : then seclect the aproprate option a,b,c,d  "<<endl;
    cout<< " step 5 : if you score grater then 6 then you pass either you fail"<<endl;

    char c;
    cin>> c;
    int score = 0;
    char option;
    if (c == 's' || c == 'S' ){
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl;// 1
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl;  //2 
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl;  // 3 
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score +0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl; // 4 
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl; // 5
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl; // 6
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score +0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl; // 7 
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score +0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl; // 8
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score +0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl;  // 9 
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score +0;
        }
        cout<< "question 1 : Who was the first defence minister of india ? "<< endl; //10
        cout << "(a) sardar balaldev singh , (b) raja hindusthani  , (c)virat kohil , (d) MS dhoni " << endl;
        cin >> option ;
        if (option == 'a' || option == 'A'){
            score = score+1;
        }
        else{
            score = score+0;
        }


    }
else {
    cout<< "you have entered wrong , please enter s" << endl; 
}

}*/


// second aproch 


#include <iostream>
#include <string>
using namespace std;

//  prototype 
int playquiz();

int main() {
    int final_result = 0;
    final_result = playquiz();

    cout << "Your score is: " << final_result << endl;

    if (final_result >= 6) {
        cout << "You passed!" << endl;
    } else {
        cout << "You failed." << endl;
    }

    return 0;
}


int playquiz() {
    cout << "---------- Welcome to the Quiz Game ----------" << endl;
    cout << "---------- Read the instructions carefully ----------" << endl;
    cout << "Step 1: The quiz contains 10 questions." << endl;
    cout << "Step 2: Each correct answer gives you 1 mark, no negative marking." << endl;
    cout << "Step 3: Press 's' or 'S' to start the game." << endl;
    cout << "Step 4: Then select the appropriate option (a, b, c, d)." << endl;
    cout << "Step 5: If you score 6 or more, you pass; otherwise, you fail." << endl;

    char start;
    cin >> start;

    if (start != 's' && start != 'S') {
        cout << "Invalid input. Please restart the program and press 's' to start the quiz." << endl;
        return 0; // Terminate the quiz early
    }

    // Quiz questions 
    string questions[10] = {
        "Who was the first Defence Minister of India?",
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "Who wrote 'Romeo and Juliet'?",
        "What is the square root of 64?",
        "What is the largest mammal on Earth?",
        "Who discovered gravity?",
        "What is the chemical symbol for water?",
        "Which country is known as the Land of the Rising Sun?",
        "What is the boiling point of water in Celsius?"
    };

    //quiz option 

    string options[10][4] = {
        {"(a) Sardar Baldev Singh", "(b) Raja Hindustani", "(c) Virat Kohli", "(d) MS Dhoni"},
        {"(a) Berlin", "(b) Paris", "(c) Madrid", "(d) Rome"},
        {"(a) Earth", "(b) Mars", "(c) Jupiter", "(d) Venus"},
        {"(a) William Shakespeare", "(b) Charles Dickens", "(c) J.K. Rowling", "(d) George Orwell"},
        {"(a) 6", "(b) 8", "(c) 10", "(d) 12"},
        {"(a) Elephant", "(b) Blue Whale", "(c) Great White Shark", "(d) Giraffe"},
        {"(a) Isaac Newton", "(b) Albert Einstein", "(c) Galileo Galilei", "(d) Marie Curie"},
        {"(a) H2O", "(b) CO2", "(c) O2", "(d) NaCl"},
        {"(a) China", "(b) Japan", "(c) South Korea", "(d) Thailand"},
        {"(a) 90", "(b) 100", "(c) 110", "(d) 120"}
    };

    char answers[10] = {'a', 'b', 'b', 'a', 'b', 'b', 'a', 'a', 'b', 'b'};  // quize answer 
    char option;
    int score = 0;

    // Loop 
    for (int i = 0; i < 10; i++) {
        cout << "Question " << i + 1 << ": " << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cin >> option;

        if (option == answers[i] || option == toupper(answers[i])) {
            score++;
        }
    }

    return score; //  final score return kare ga 
}
