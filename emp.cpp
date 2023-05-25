#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    int years_of_experience;
    int projects_completed;
    int communication_skills_rating;
    int leadership_skills_rating;
    int technical_skills_rating;
    int performance_rating = 0;
    
    cout << "Welcome to the Employee Performance Evaluation System. Please enter the following information:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Years of Experience: ";
    cin >> years_of_experience;
    cout << "Number of Projects Completed: ";
    cin >> projects_completed;
    cout << "Communication Skills Rating (1-10): ";
    cin >> communication_skills_rating;
    cout << "Leadership Skills Rating (1-10): ";
    cin >> leadership_skills_rating;
    cout << "Technical Skills Rating (1-10): ";
    cin >> technical_skills_rating;
    
    // Calculate the performance rating based on the input data
    performance_rating += years_of_experience * 5;
    performance_rating += projects_completed * 10;
    performance_rating += communication_skills_rating * 2;
    performance_rating += leadership_skills_rating * 3;
    performance_rating += technical_skills_rating * 5;
    
    // Determine the performance level based on the performance rating
    string performance_level;
    if (performance_rating >= 90) {
        performance_level = "Outstanding";
    } else if (performance_rating >= 80) {
        performance_level = "Excellent";
    } else if (performance_rating >= 70) {
        performance_level = "Good";
    } else if (performance_rating >= 60) {
        performance_level = "Average";
    } else {
        performance_level = "Below Average";
    }
    
    // Output the evaluation results
    cout << endl;
    cout << "Evaluation Results for " << name << ":" << endl;
    cout << "Age: " << age << endl;
    cout << "Years of Experience: " << years_of_experience << endl;
    cout << "Number of Projects Completed: " << projects_completed << endl;
    cout << "Communication Skills Rating: " << communication_skills_rating << endl;
    cout << "Leadership Skills Rating: " << leadership_skills_rating << endl;
    cout << "Technical Skills Rating: " << technical_skills_rating << endl;
    cout << "Performance Rating: " << performance_rating << endl;
    cout << "Performance Level: " << performance_level << endl;
    
    return 0;
}

