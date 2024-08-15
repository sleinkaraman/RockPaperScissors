# RockPaperScissors
This is a simple Rock-Paper-Scissors game implemented in C. The player competes against the computer in this classic game, where each move is randomly generated for the computer.

## Installation

1. Clone the repository:
```
git clone https://github.com/sleinkaraman/RockPaperScissors.git
```

2.Navigate to the project directory:
```
cd RockPaperScissors
```

3.Compile the program:
```
gcc main.c -o RockPaperScissors
```

## Usage

After compiling the program, you can start the game by running:

```
./RockPaperScissors
```
The game will prompt you to select Rock, Paper, or Scissors, and the computer will randomly choose its move.

## How to Play

- The game follows the standard Rock-Paper-Scissors rules.
- Rock beats Scissors, Scissors beats Paper, and Paper beats Rock.
- The game continues until one player wins two out of three rounds.

## Code Structure

- `main.c`: The main file containing the game's logic.

### Key Functions

- `get_user_input()`: Handles player's input and ensures it's valid.
- `get_computer_choice()`: Randomly selects a move for the computer.
- `determine_winner()`: Determines the winner of each round.

## Contributing

Contributions are welcome! Feel free to fork the repository and create a pull request.







