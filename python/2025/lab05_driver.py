from radix_sort_html import *

def main():
    # linked_queue.py
    juno: LinkedQueue = LinkedQueue()
    juno.enqueue(False)
    juno.enqueue(9.81)
    juno.enqueue("Welcome to orbit!")
    juno.enqueue(4)
    print(f"Queue:\n{juno}")
    juno.dequeue()
    print(f"After Dequeue:\n{juno}")
    # Will not print False sense it was dequeued
    print(f"New first element: {juno.first()}")

    # radix_sort_html.py
    kiriko: RadixSortHTML = RadixSortHTML("fourTags.txt")
    kiriko.read_tags()
    kiriko.process_tags()

    print(f"Before sort:\n{kiriko}")

    kiriko.sort()

    print(f"After sort:\n{kiriko}" , end="")

if __name__ == "__main__":
    main()
