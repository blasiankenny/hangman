import random

def hangman():
    word_list = ["house", "rabbit", "computer", "hacker", "painter"]
    random_number = random.randint(0, 4)
    word = word_list[random_number]
    wrong = 0
    stages = ["",
              "_______      ",
              "|            ",
              "|      |     ",
              "|      o     ",
              "|     /|\    ",
              "|     / \    ",
              "|            "
              ]
    rletters = list(word)
    board = ["_"]*len(word)
    win = False
    print("Welcome to Hangman!")
    while wrong < len(stages) -1:
        print("\n")
        msg = "Enter a letter"
        char = input(msg)
        if char in rletters:
            cind = rletters.index(char)
            board[cind] = char
            rletters[cind] = '$'
        else:
            wrong += 1
        print(" ".join(board))
        e = wrong +1
        print("\n".join(stages[0:e]))
        if "_" not in board:
            print("You won!")
            print(" ".join(board))
            win = True
            break
    if not win:
        print("\n".join(stages[0:wrong+1]))
        print("You lost! The correct answer is {}.".format(word))

if __name__ == "__main__":
    hangman()