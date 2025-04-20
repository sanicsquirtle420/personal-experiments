from rac_queue import Queue, merge
import time

def main():
    pri: Queue = Queue()
    reg: Queue = Queue()
    status: bool = True

    print("*** Welcome to the Task Manager ***")
    while status:
        print("Options:\n1: Add tasks, 2: Remove tasks, 3: See tasks, 4: Import from save, 0: Exit")
        ans: int = int(input("-> "))

        if ans == 1:
            print("    Options: 1: Priority, 2: Regular")
            ans = int(input("    Adding to... "))
            if ans == 1:
                task = input("    Enter the task: ")
                pri.enqueue(task)
                print(f"    \"{task}\" was added to priority!")
            else:
                # Defaults to regular queue
                task = input("    Enter the task: ")
                reg.enqueue(task)
                print(f"    \"{task}\" was added to priority!")
        elif ans == 2:
            print("    Options: 1: Priority, 2: Regular")
            ans = int(input("    Removing from... "))
            if ans == 1:
                task = pri.dequeue()
                print(f"    \"{task}\" was removed from priority.")
            else:
                # Defaults to regular queue
                task = reg.dequeue()
                print(f"    \"{task}\" was removed from priority.")
        elif ans == 3:
            print("    Options: 1: Priority, 2: Regular, 3: All")
            ans = int(input("    Looking at... "))
            if ans == 1:
                print("** Priority Tasks **")
                for task in pri:
                    print(f"- {task}")
            elif ans == 2:
                print("** Regular Tasks **")
                for task in reg:
                    print(f"- {task}")
            else:
                mer: Queue = merge(pri, reg)
                print("** All tasks **")
                for task in mer:
                    print(f"- {task}")
            print("")
        elif ans == 4:
            with open("queue-todo.txt", "r") as file:
                tasks = file.readline().split(",")
                tasks.pop() # Last value is empty, so I popped it to remove errors
                for task in tasks:
                    if task[0] == "!":
                        pri.enqueue(task[1:])
                    else:
                        reg.enqueue(task)
            print("Tasks imported!")
        elif ans == 0:
            status = False
        else:
            print("INVALID OPTION")
    save: str = input("Want to save your lists? [y/n] ")
    if save.lower() == "y" or save.lower() == "yes":
        print("Saving...")
        msg = ""
        for x in pri:
            msg += f"!{x},"
        for y in reg:
            msg += f"{y},"
        with(open("queue-todo.txt", "w")) as file:
            file.write(msg)
        time.sleep(0.5)
    print("Have a good day!")

if __name__ == "__main__":
    main()