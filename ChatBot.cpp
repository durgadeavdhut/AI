#include <iostream>
#include <string>

std::string getResponse(const std::string& message) {
    // Add your own logic here to generate appropriate responses based on the input message
    if (message == "Hello"||message=="hello"||message=="hi"||message=="Hi") {
        return "Hi there!";
    } else if (message == "How are you"||message=="how are you") {
        return "I'm good, thank you!";
    } else if (message == "What's your name?"||message == "what is your name?") {
        return "I'm a chatbot.";
    } else {
        return "I'm sorry, I don't understand.";
    }
}

int main() {
    std::string userMessage;
    
    std::cout << "Chatbot: Hello! How can I help you?\n";
    
    while (true) {
        std::cout << "User: ";
        std::getline(std::cin, userMessage);
        
        if (userMessage == "exit") {
            break;
        }
        
        std::string response = getResponse(userMessage);
        std::cout << "Chatbot: " << response << "\n";
    }
    
    std::cout << "Chatbot: Goodbye! Have a nice day.\n";
    
    return 0;
}

