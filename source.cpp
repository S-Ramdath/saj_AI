#include <iostream>
#include <string>

std::string speech;
std::string input;

//simplifies responses.
std::string talk(std::string a){
std::cout<<a;
}

//simplifies recieving user input.
std::string listen(std::string b){
getline(std::cin,input);
}

//easy way to make a new line.
void newLine(){
std::cout<<"\n";
}

//char main just because i can lol.
int main(){
talk("Hi. I am sajAI. You may respond now.");
newLine();
listen(input);
talk("You said: ");
talk(input);
return 0;
}
