import sys

if len(sys.argv) < 2:
    print("Usage: python todo.py [view|add <task>]")
    sys.exit(1)

command = sys.argv[1]

if command == "view":
    try:
        with open("todo.txt", "r") as f:
            lines = f.readlines()
            if not lines:
                print("No tasks yet.")
            else:
                print("---- TODO List ----")
                for i, line in enumerate(lines, 1):
                    print(f"{i}. {line.strip()}")
    except FileNotFoundError:
        print("No tasks yet.")

elif command == "add":
    if len(sys.argv) < 3:
        print("Enter a task: ")
        todo = input()
    else:
        todo = sys.argv[2]

    with open("todo.txt", "a") as f:
        f.write(todo + "\n")
    print(f"Added: {todo}")

else:
    print(f"Unknown command: {command}")
    print("Usage: python todo.py [view|add <task>]")
    sys.exit(1)
