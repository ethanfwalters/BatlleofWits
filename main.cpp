//
// Created by Ethan Walters on 3/14/22.
//
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <cctype>
#include <cstdlib>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
int time_after_out = 2;


void BattleOfWits(){
    cout << "                                ▄▄                          ▄▄▄▄          ▄▄                                          ▄▄                 \n";
    cout << "▀███▀▀▀██▄         ██    ██   ▀███                        ▄█▀ ▀▀     ██  ███                   ▀████▀     █     ▀███▀ ██   ██         ██ \n";
    cout << "  ██    ██         ██    ██     ██                        ██▀        ██   ██                     ▀██     ▄██     ▄█        ██         ██ \n";
    cout << "  ██    ██▄█▀██▄ ████████████   ██   ▄▄█▀██      ▄██▀██▄ █████     ██████ ███████▄   ▄▄█▀██       ██▄   ▄███▄   ▄█  ▀███ ██████ ▄██▀████ \n";
    cout << "  ██▀▀▀█▄▄█   ██   ██    ██     ██  ▄█▀   ██    ██▀   ▀██ ██         ██   ██    ██  ▄█▀   ██       ██▄  █▀ ██▄  █▀    ██   ██   ██   ▀▀█ \n";
    cout << "  ██    ▀█▄█████   ██    ██     ██  ██▀▀▀▀▀▀    ██     ██ ██         ██   ██    ██  ██▀▀▀▀▀▀       ▀██ █▀  ▀██ █▀     ██   ██   ▀█████▄▀ \n";
    cout << "  ██    ▄██   ██   ██    ██     ██  ██▄    ▄    ██▄   ▄██ ██         ██   ██    ██  ██▄    ▄        ▄██▄    ▄██▄      ██   ██   █▄   ██▄ \n";
    cout << "▄████████▀████▀██▄ ▀████ ▀████▄████▄ ▀█████▀     ▀█████▀▄████▄       ▀███████  ████▄ ▀█████▀         ██      ██     ▄████▄ ▀██████████▀█ \n";
    cout << "                                                                                                                                         \n";
    cout << "                                                                                                                                         \n";
    sleep_for(seconds(3));
}

void PrintOdin(){
    cout << "             .`=-._.-=-.-=..-'\\\n";
    cout << "             |                |\n";
    cout << "    .-._     |-.            ./\n";
    cout << "   /''  `.   |  `-._.--._.-' |  .-.\n";
    cout << "   |:.    `-./               |.`  .)\n";
    cout << "   \\ `-._    `---..__..----._/   .'\n";
    cout << "    '-.._'-`-.-._    _..----.__.'\n";
    cout << "         `-.-..-.`--`   .-.  \\\n";
    cout << "           'o/-`\\  /     >)) /\n";
    cout << "           `-..-.( \\    `-' |\n";
    cout << "   .----._.-`     .'     _).-.\n";
    cout << "  (           ) .`      _)/   `.\n";
    cout << "   `-._--._ -'.`    .-._).      \\\n";
    cout << "        (_.-._)    / |  |        \\\n";
    cout << "       (_          /_|   \\        |\n";
    cout << "      (_           / |    `._/     \\\n";
    cout << "     (_           _/ \\      |      |\n";
    cout << "    (_           _)   |     /      |\n";
    cout << "    (_           _)    \\    |      \\\n";
    cout << "   (_            _)     `._ \\      |\n";
    cout << "  (_           _)        |@ /_..--'\n";
    cout << " (_           _)         |@  |   |\n";
    cout << "(_            _)         \\   / ..\\_\n";
    cout << " (_           _)           .'_ '`. `-.\n";
    cout << "  (_        _)            (_/ ) \\\\\\ \\ \\\n";
    cout << "    (_    _)                 (_/ /| /\\_)\n";
    cout << "     (_.-_)                   (_/(_/\n";
}

void newPage(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void PrintCorrect(){
    cout << " ▄▄·       ▄▄▄  ▄▄▄  ▄▄▄ . ▄▄· ▄▄▄▄▄ ▄▄ \n";
    cout << "▐█ ▌▪ ▄█▀▄ ▀▄ █·▀▄ █·▀▄.▀·▐█ ▌▪•██   ██▌\n";
    cout << "██ ▄▄▐█▌.▐▌▐▀▀▄ ▐▀▀▄ ▐▀▀▪▄██ ▄▄ ▐█.▪ ▐█·\n";
    cout << "▐███▌▐█▌.▐▌▐█•█▌▐█•█▌▐█▄▄▌▐███▌ ▐█▌· .▀ \n";
    cout << "·▀▀▀  ▀█▄▀▪.▀  ▀.▀  ▀ ▀▀▀ ·▀▀▀  ▀▀▀   ▀ \n";
}

void PrintDead(){
    cout << "▓██   ██▓ ▒█████   █    ██      ▓█████▄   ██▓ ▓█████▓█████▄ \n";
    cout << " ▒██  ██▒▒██▒  ██▒ ██  ▓██▒     ▒██▀ ██▌▒▓██▒ ▓█   ▀▒██▀ ██▌\n";
    cout << "  ▒██ ██░▒██░  ██▒▓██  ▒██░     ░██   █▌▒▒██▒ ▒███  ░██   █▌\n";
    cout << "  ░ ▐██▓░▒██   ██░▓▓█  ░██░    ▒░▓█▄   ▌░░██░ ▒▓█  ▄░▓█▄   ▌\n";
    cout << "  ░ ██▒▓░░ ████▓▒░▒▒█████▓     ░░▒████▓ ░░██░▒░▒████░▒████▓ \n";
    cout << "   ██▒▒▒ ░ ▒░▒░▒░ ░▒▓▒ ▒ ▒     ░ ▒▒▓  ▒  ░▓  ░░░ ▒░  ▒▒▓  ▒ \n";
    cout << " ▓██ ░▒░   ░ ▒ ▒░ ░░▒░ ░ ░       ░ ▒  ▒ ░ ▒ ░░ ░ ░   ░ ▒  ▒ \n";
    cout << " ▒ ▒ ░░  ░ ░ ░ ▒   ░░░ ░ ░       ░ ░  ░ ░ ▒ ░    ░   ░ ░  ░ \n";
    cout << " ░ ░         ░ ░     ░             ░      ░  ░   ░     ░    \n";
}

/**
 * gets the user name, and welcomes them.
 * @return the name of the user
 */
string WelcomeUser(){
    srand(time(0));
    vector<string> OdinNames = {"Gagnrad", "Boden", "Alfodr", "Baleyg", "Farmagud", "Farmatyr", "Fimbultyr", "Fimbulthul",
                                "Fjolnir", "Fjolsvid", "Fjorgyn", "Gautatyr", "Gaut", "Glapsvid", "Glapsvin", "Gondlir",
                                "Grimnir", "Grim", "Hangagud", "Haptagud", "Harbard", "Havi"};
    string name;
    cout << "Hello traveler what is your name?\n:";
    getline(cin >> ws, name);
    PrintOdin();
    cout << "Why hello " << name << " my name is " << OdinNames[rand()%OdinNames.size()] << endl;
    sleep_for(seconds(5));
    return name;
}

/**
 * Takes in the user's name so they can be customised
 * @param name of the user
 * @return if the user wants to battle or not
 */
bool ChooseBattle(string name){
    cout << name << " I challenge you to a battle of wits!" << endl;
    sleep_for(seconds(time_after_out+1));
    int userChoice;
    cout << "What do you do?\n(1) Battle wits with Gagnrad! \n(2) Run away in fear\n" << name << ":";
    cin >> userChoice;
    return (userChoice == 1) ? true : false;
}

int main(){
    vector<string> OdinNames = {"Gagnrad", "Boden", "Alfodr", "Baleyg", "Farmagud", "Farmatyr", "Fimbultyr", "Fimbulthul",
                                "Fjolnir", "Fjolsvid", "Fjorgyn", "Gautatyr", "Gaut", "Glapsvid", "Glapsvin", "Gondlir",
                                "Grimnir", "Grim", "Hangagud", "Haptagud", "Harbard", "Havi"};
    BattleOfWits();
    string userName;
    // welcome user ; get thier name
    userName = WelcomeUser();
    newPage();
    PrintOdin();
    // choose if they want to battle
    bool battle = ChooseBattle(userName);
    newPage();
    // lists of questions and answers
    vector<string> questions = {"Who are you?", "What’s the name of the stallion that, every morning, draws Day across the world?",
                                "What’s the name of the stallion that, over and over again, brings Night from the East for the noble gods?",
                                "What’s the name of the river that divides the world of the gods from the world of the giants?",
                                "What’s the name of the plain where Surt and the fine gods will meet and fight?",
                                "Where did the earth come from?",
                                "Where did the sky come from?"};
    vector<string> answers = {userName, "Skinfaxi", "Hrimfaxi", "lying", "Vigrid", "Ymir's flesh", "Frost Giant's Skull"};
    if(battle){
        srand(time(0));
        // this is if they choose to battle
        PrintOdin();
        cout << userName << " let us battle!" << endl;
        sleep_for(seconds(time_after_out));
        bool Won = false;
        for(int i =0; i < questions.size(); i++){
            newPage();
            PrintOdin();
            string userIn;
            cout << OdinNames[rand()%OdinNames.size()] << ": " << questions[i] << endl << userName <<":";
            // get the user's answer
            getline(cin >> ws, userIn);
            // set it to all caps
            transform(userIn.begin(), userIn.end(), userIn.begin(), ::toupper);
            string answer = answers[i];
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if(answer == userIn){
                newPage();
                PrintCorrect();
                sleep_for(seconds(3));
                if(i == (questions.size()-1)){
                    Won = true;
                }
            }
            else{
                newPage();
                cout << "Wrong!"<< endl;
                PrintDead();
                break;
            }
        }
        if(Won){
            cout << " ▄· ▄▌      ▄• ▄▌  ▄▄▄▄· ▄▄▄ . ▄▄▄· ▄▄▄▄▄        ·▄▄▄▄  ▪   ▐ ▄  ▄▄ \n";
            cout << "▐█▪██▌ ▄█▀▄ █▪██▌  ▐█ ▀█▪▀▄.▀·▐█ ▀█ •██     ▄█▀▄ ██· ██ ██ •█▌▐█ ██▌\n";
            cout << "▐█▌▐█▪▐█▌.▐▌█▌▐█▌  ▐█▀▀█▄▐▀▀▪▄▄█▀▀█  ▐█.▪  ▐█▌.▐▌▐█▪ ▐█▌▐█·▐█▐▐▌ ▐█·\n";
            cout << " ▐█▀·.▐█▌.▐▌▐█▄█▌  ██▄▪▐█▐█▄▄▌▐█▪ ▐▌ ▐█▌·  ▐█▌.▐▌██. ██ ▐█▌██▐█▌ .▀ \n";
            cout << "  ▀ •  ▀█▄▀▪ ▀▀▀   ·▀▀▀▀  ▀▀▀  ▀  ▀  ▀▀▀    ▀█▄▀▪▀▀▀▀▀• ▀▀▀▀▀ █▪  ▀ \n";
        }
    }
    else{
        // if they decide to run away
        cout << "Not so fast!" << endl;
        PrintDead();
    }
    return 0;
}