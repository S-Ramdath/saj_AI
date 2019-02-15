#include <iostream>
#include <string>

std::string speech[];
std::string input[];

//simplifies responses.
std::string talk(std::string a){
std::cout<<a<<std::endl;
}

//simplifies recieving user input.
std::string listen(std::string b){
std::cin>>input>>std::endl;
}

//char main just because i can lol.
char main(){
talk(Hi. I am sajAI. You may respond now.);
listen(input[0]);
get.char();
return 'a';
}
