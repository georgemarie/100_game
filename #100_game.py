# this game used between two player each one choose one number from list
#and the one who reach 100 or above first will win
#and it star with calling 'game' function
def preview():
   global list
   list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
   print(list)
   # this function used to preview list each time for player to choose from it


def check( player ):
   global sum, first_one, second_one
   if player == 1:
       first_one = int(input("First player , choose number from list :"))
       if first_one not in list:
           print("Invalid number.")
           check(1)
       return first_one
   elif player == 2:
       second_one = int(input("Second player ,choose number from list :"))
       if second_one not in list:
           print("Invalid number.")
           check(2)
       return second_one
   # this function used to take input from each player and then check the number entered is in list or not


def game():
   global player
   sum = 0
   while True:
       preview()
       check(1)
       sum += first_one
       print("Updated sum = ", sum)
       if sum >= 100:
           print("First player wins ")
           break
       preview()
       check(2)
       sum += second_one
       print("Updated sum = ", sum)
       if sum >= 100:
           print("Second player wins")
           break
   # this function first call ' preview ' to show list , then call ' chosen ' function for each player
   #  to take input from each one and check if in list or not then add input to the sum after that print sum each time
   # then check if sum reach 100 or above or not if reach, it show which player win then break


game()
