
#include <iostream>
#include <string>

using namespace std;

int main() {
    string patient_name;
    int patient_age;
    string patient_gender;
    bool has_fever;
    bool has_cough;
    bool has_sore_throat;
    bool has_difficulty_breathing;
    bool has_fatigue;
    bool has_headache;
    bool has_body_aches;
    bool has_diarrhea;
    bool has_loss_of_taste_or_smell;
    bool has_travel_history;
    bool has_contact_with_infected_person;
    string diagnosis;
    
    cout << "Welcome to the Hospital Diagnosis System. Please enter the following information about the patient:" << endl;
    cout << "Name: ";
    getline(cin, patient_name);
    cout << "Age: ";
    cin >> patient_age;
    cout << "Gender (M/F): ";
    cin >> patient_gender;
    cout << "Does the patient have a fever? (1 for yes, 0 for no): ";
    cin >> has_fever;
    cout << "Does the patient have a cough? (1 for yes, 0 for no): ";
    cin >> has_cough;
    cout << "Does the patient have a sore throat? (1 for yes, 0 for no): ";
    cin >> has_sore_throat;
    cout << "Does the patient have difficulty breathing? (1 for yes, 0 for no): ";
    cin >> has_difficulty_breathing;
    cout << "Does the patient have fatigue? (1 for yes, 0 for no): ";
    cin >> has_fatigue;
    cout << "Does the patient have a headache? (1 for yes, 0 for no): ";
    cin >> has_headache;
    cout << "Does the patient have body aches? (1 for yes, 0 for no): ";
    cin >> has_body_aches;
    cout << "Does the patient have diarrhea? (1 for yes, 0 for no): ";
    cin >> has_diarrhea;
    cout << "Does the patient have a loss of taste or smell? (1 for yes, 0 for no): ";
    cin >> has_loss_of_taste_or_smell;
    cout << "Has the patient traveled recently? (1 for yes, 0 for no): ";
    cin >> has_travel_history;
    cout << "Has the patient come in contact with someone infected with COVID-19? (1 for yes, 0 for no): ";
    cin >> has_contact_with_infected_person;
    
    // Check for common symptoms and determine the diagnosis
    if (has_difficulty_breathing) {
        diagnosis = "Severe Acute Respiratory Syndrome (SARS)";
    } else if (has_fever && (has_cough || has_sore_throat || has_difficulty_breathing)) {
        diagnosis = "Coronavirus Disease 2019 (COVID-19)";
    } else if (has_fever && (has_headache || has_body_aches || has_fatigue)) {
        diagnosis = "Influenza (Flu)";
    } else {
        diagnosis = "Common Cold";
    }
    
    // Output the diagnosis to the user
    cout << endl;
    cout << "Diagnosis for " << patient_name << ":" << endl;
    cout << "Age: " << patient_age << endl;
    cout << "Gender: " << patient_gender << endl;
    cout << "Diagnosis: " << diagnosis << endl;
    
    return 0;
}

