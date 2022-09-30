user_input = input("> ").lower()
keep_going = True

while keep_going:
    if user_input =="help":
        print(""" 
start - to start the car
stop  - to stop the car
quit  - exit
    """)
        user_input = input("> ").lower()
    elif user_input == "start":
        print("Car started... ready to go!")
        user_input = input("> ").lower()
    elif user_input == "stop":
        print("Car stopped")
        user_input = input("> ").lower()
    elif user_input == "quit":
        keep_going = False
else:
    print("I don't understand that")
