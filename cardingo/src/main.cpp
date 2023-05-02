#include <iostream>
#include <string>
#include "../include/bigtwo.h"
#include "../include/blackjack.h"
#include "../include/higher_lower.h"
#include "../include/trump.h"
#include "../include/old_maid.h"
#include "../include/card_dealer.h"
#include "../include/file_handler.h"
using namespace std;

void choose_bigtwo(){
    string reply;
    play_bigtwo();
    while (true){
        print("Would you like to play again? (y/n)", end = "\n");
        getline(cin, reply);
        if (reply == "y"){
            choose_bigtwo();
            return;
        } else if  (reply == "n"){
            print("Thank you. Returning to the game chooser screen", end = "\n");
            return;
        } else {
            print("Wrong input. Please input your answer again", end = "\n");
        }
    }
}

void choose_blackjack(){
    string reply;
    play_blackjack();
    while (true){
        print("Would you like to play again? (y/n)", end = "\n");
        getline(cin, reply);
        if (reply == "y"){
            choose_blackjack();
            return;
        } else if  (reply == "n"){
            print("Thank you. Returning to the game chooser screen", end = "\n");
            return;
        } else {
            print("Wrong input. Please input your answer again", end = "\n");
        }
    }
}

void choose_higer_lower(){
    string reply;
    play_higher_lower();
    while (true){
        print("Would you like to play again? (y/n)", end = "\n");
        getline(cin, reply);
        if (reply == "y"){
            choose_higer_lower();
            return;
        } else if  (reply == "n"){
            print("Thank you. Returning to the game chooser screen", end = "\n");
            return;
        } else {
            print("Wrong input. Please input your answer again", end = "\n");
        }
    }
}

void choose_trump(){
    string reply;
    play_trump();
    while (true){
        print("Would you like to play again? (y/n)", end = "\n");
        getline(cin, reply);
        if (reply == "y"){
            choose_trump();
            return;
        } else if  (reply == "n"){
            print("Thank you. Returning to the game chooser screen", end = "\n");
            return;
        } else {
            print("Wrong input. Please input your answer again", end = "\n");
        }
    }
}


void choose_old_maid(){
    string reply;
    play_old_maid();
    while (true){
        print("Would you like to play again? (y/n)", end = "\n");
        getline(cin, reply);
        if (reply == "y"){
            choose_old_maid();
            return;
        } else if  (reply == "n"){
            print("Thank you. Returning to the game chooser screen", end = "\n");
            return;
        } else {
            print("Wrong input. Please input your answer again", end = "\n");
        }
    }
}

void choose_game(){
    string input;
    int number;
    while(true){
        print("We have many card games, please pick one by entering the number (0-5)", end = "\n");
        print("1 Big Two", end = "\n");
        print("2 Blackjack", end = "\n");
        print("3 Higer Lower", end = "\n");
        print("4 Trump", end = "\n");
        print("5 Old Maid", end = "\n");
        print("0 Exit", end = "\n");
        getline(cin, input);
        
        if (input.size() == 1 && input.find_first_not_of("012345") == string::npos){
            number = stoi(input);
            if (number == 0){
                print("Thank you for playing", end  = "\n");
                return;
            } else if (number == 1){
                print_game_heading("bigtwo");
                choose_bigtwo();
            } else if (number == 2){
                print_game_heading("blackjack");
                choose_blackjack();
            } else if (number == 3){
                print_game_heading("higherlower");
                choose_higer_lower();
            } else if (number == 4){
                print_game_heading("trump");
                choose_trump();
            } else if (number == 5){
                print_game_heading("oldmaid");
                choose_old_maid();
            }
        } else {
            print("Invalid input, please reenter a number from 0-5", end="\n");
        }
    }
}



int main() {
    print_main_heading();
    choose_game();
    print_main_ending();
    return 0;
}