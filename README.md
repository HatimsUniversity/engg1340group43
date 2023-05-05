CARD-INGO

Course Information\
Course Code: ENGG1340\
Course Title: Computer Programming I\
Group: 43

Team Members:\
QUETTAWALA Hatim (3036094849)\
SUHANDJAJA Alexander Gaudi (3036029674)\
SUTANTO Winiera (3035964671)\
MANATUNGE Aishani Induja (3035962386)\
YOON Hyunseo ()

Introduction:\
CARD-INGO is a fun and exciting collection of five different card games. The games included are:

Blackjack\
Trump\
Old Maid\
Higher lower\
Crazy eights

The name CARD-INGO is inspired by the popular game BINGO. CARD-INGO is sure to provide hours of entertainment and challenge. So, gather your friends and family, and get ready to play these classic card games in a whole new way with CARD-INGO!

Game Rules:\
These are game rules for each of the five card games.

Blackjack:

Trump:

Old Maid:
* Old Maid is a classic card game where the goal of the game is to remove all pairs from your hand while not being left with the queen of spades
* A pair is defined of cards with the same value and same color (clubs with spades and diamonds with hearts)
* At the start of the game each player draws 26 cards
* Whoever starts with the queen of clubs throws it away and the opponent starts first
* Each turn the current player will take a card from the opponent's hand and if it results in a pair with a card from their hand, they throw away the pair
* The players alternate turns until one player is left with the queen of spades and the other player has no card
* The winner is the player with no cards left
* THe loser is the player with the queen of spades left

Higher Lower:

Crazy Eights:

Features Implemented and Coding Requirements
We implemented the following features and coding requirements to support the game:

1. Generation of random game sets or events: In this game we randomly generated a deck of cards.
2. Data structures for storing game status: We utilized vectors and structures to store the deck and hands.
3. Dynamic memory management: We utilized dynamic memory management mainly through the use of pointers.
4. File input/output (e.g., for loading/saving game status): We created a C++ program with the intended purpose of storing the username, total games played, the score for each game, and the total sums of scores in a txt file. This program also has the ability to print a person's score and update that score.
5. Program codes in multiple files: For each game, we separated the C++ programs into multiple files. Through the use of header files and makefile, we were able to combine all of the files into one executable program.

Non-Standard C/C++ Libraries:
We did not use any non-standard C/C++ libraries.

Compilation and Execution Instructions (How to Play "CARD-INGO"):
To play "CARD-INGO," follow these steps:

1. Open the command terminal.
2. Go to the directory in which you want to create the game files.
3. Clone the project using git clone https://github.com/HatimsUni/engg1340group43.git in that folder.
4. Run cd engg1340group43/cardingo.
5. Run make.
6. Run ./bin/play to play the game.
7. Once you are done playing the game, run make clean to delete clean the directory.
