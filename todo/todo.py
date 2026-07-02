import sys

if len(sys.argv) < 2:
    print("usage: fuck you. Enter a command.")
    sys.exit(1)

command = sys.argv[1]

if command == "view": 
    try:
        with open("todo.txt", "r") as f:
            content = f.read()
            lines = len(f.readlines)
            for line in lines:
                line = 0
                line += 1 
                print(line)
            if not content.strip():
                print("Empty bro")
            else:
                print("!!!!! TODO !!!!!!")
                print(content.strip())
    except FileNotFoundError:
        print("Todo.txt does not exist.")
    
elif command == "add":
    # Scenario A: User forgot the task, let's ask them for it
    if len(sys.argv) < 3:
        print("Enter a task: ")
        todo = input()
        
    # Scenario B: User provided the task inline (e.g., python todo.py add "Buy milk")
    else:
        todo = sys.argv[2]

    # Now we save whatever 'todo' became, safely appending it to the file!
    with open("todo.txt", "a") as f: # Changed "w" to "a" so it doesn't wipe previous tasks
        f.write(todo + "\n")
    print(f"Added: {todo}")