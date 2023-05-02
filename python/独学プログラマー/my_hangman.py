#!/usr/bin/env python3

import random

def hangman():
    word_list = ["house", "rabbit", "computer", "hacker", "painter"]
    random_number = random.randint(0, 4)
    word = word_list[random_number]
    wrong = 0
    stages = ["______      ",
              "|     |     ",
              "|     |     ",
              "|           ",
              "|           ",
              "|           ",
              "|           ",
              "|           "]
    stage1 = "|     o     "
    stage2 = "|     |     "
    stage3 = "|    /|     "
    stage4 = "|    /|\    "
    stage5 = "|    /      "
    stage6 = "|    / \    "
    rletters = list(word)
    board = ["_"] * len(word)
    win = False
    p2 = input("Enter your name: ")
    print("Welcome to Hangman, {}!".format(p2)) 
    while wrong < 6:
        for stage in stages:
            print(stage)
        print("\nWord: {}".format(" ".join(board)))
        temp_letter = input("Enter a letter: ")
        if temp_letter in rletters:
            for i, letter in enumerate(rletters):
                if temp_letter == rletters[i]:
                    rletters[i] = "$"
                    board[i] = temp_letter
            #l_index = rletters.index(temp_letter)
            #rletters[l_index] = "$"
            #board[l_index] = temp_letter
        else:
            wrong += 1
            if(wrong == 1):
                stages[3] = stage1
            elif(wrong == 2):
                stages[4] = stage2
            elif(wrong == 3):
                stages[4] = stage3
            elif(wrong == 4):
                stages[4] = stage4
            elif(wrong == 5):
                stages[5] = stage5
            else:
                stages[5] = stage6
        if "_" not in board:
            win = True
            break
    for stage in stages:
                print(stage)
    print("\nFinal result: {}".format(" ".join(board)))
    if win == True:
        print("!!!Congratulations {}, you won!!!".format(p2))
    else:
        print("You lost..... The answer is \"{}\"".format(word))

if __name__ == "__main__":
    hangman()