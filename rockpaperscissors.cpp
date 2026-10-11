#include <iostream>
#include <cstdlib> 
#include <ctime>

void getComputerChoice() {
    
}

void determineWinner(int& p, int& cpu, int& p_score, int& cpu_scores, int& round) {
    
    int rock = 1;
    int paper = 2;
    int scissors = 3;

    if (p == rock && cpu == scissors) {
        std::cout << "You win\n";
        p_score += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Rock" << " | " << "CPU Score: Scissors" << "\n";
    } else if (p == scissors && cpu == rock) {
        std::cout << "You lose\n";
        cpu_scores += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Scissors" << " | " << "CPU Score: Rock" << "\n";
    } else if (p == scissors && cpu == paper) {
        std::cout << "You win\n";
        p_score += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Scissors" << " | " << "CPU Score: Paper" << "\n";
    } else if (p == paper && cpu == scissors) {
        std::cout << "You lose\n";
        cpu_scores += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Paper" << " | " << "CPU Score: Scissors" << "\n";
    } else if (p == paper && cpu == rock) {
        std::cout << "You win\n";
        p_score += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Paper" << " | " << "CPU Score: Rock" << "\n";
    } else if (p == rock && cpu == paper) {
        std::cout << "You lose\n";
        cpu_scores += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Rock" << " | " << "CPU Score: Paper" << "\n";
    } else if (p == paper && cpu == paper) {
        std::cout << "Draw\n";
        cpu_scores += 1;
        p_score += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Paper" << " | " << "CPU Score: Paper" << "\n";
    } else if (p == rock && cpu == rock) {
        std::cout << "Draw\n";
        cpu_scores += 1;
        p_score += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Rock" << " | " << "CPU Score: Rock" << "\n";
    } else if (p == scissors && cpu == scissors) {
        std::cout << "Draw\n";
        cpu_scores += 1;
        p_score += 1;
        std::cout << "Player Score :" << p_score << " | " << "CPU Score: " << cpu_scores << "\n";
        std::cout << "Player Pick : Scissors" << " | " << "CPU Score: Scissors" << "\n";
    }

   if (round == 1) {
            if (p_score > cpu_scores) {
                std::cout << "\n";
                std::cout << "Player Won! \n";
            } else if (p_score == cpu_scores) {
                std::cout << "\n";
                std::cout << "Draw! \n";
            } else {
                std::cout << "\n";
                std::cout << "CPU Won! \n";
            }
        } 
        round--;
        if (round == 1 != round > 0) {
            std::cout << "\n";
            std::cout << "Round " << round << std::endl;
            std::cout << "\n";     
        }
        
    
    
    
}

int main() {

    int player_score = 0;
    int cpu_score = 0;
    int rounds = 5;
    int ps_pick = 0;

    std::srand(std::time(0));
    int int_rand = (std::rand() % 3) + 1;
    
    while (rounds > 0) {
        std::cout << "Pick Number \n";
        std::cout << "1. Rock\n";
        std::cout << "2. Paper\n";
        std::cout << "3. Scissors\n";

        std::cin >> ps_pick;
        std::cout << "\n";

        if (ps_pick == 1) {
            determineWinner(ps_pick, int_rand, player_score, cpu_score, rounds);
        } else if (ps_pick == 2) {
            determineWinner(ps_pick, int_rand, player_score, cpu_score, rounds);
        } else if (ps_pick == 3) {
            determineWinner(ps_pick, int_rand, player_score, cpu_score, rounds);
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
    
    return 0;
}
