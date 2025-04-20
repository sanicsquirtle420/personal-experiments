# Source: https://stackoverflow.com/a/48459059

class Node(object):
    def __init__(self, item = None):
        self.item = item
        self.next = None
        self.previous = None

class Queue(object):
    def __init__(self):
        self.size = 0
        self.head = None
        self.tail = None

    def enqueue(self, x):
        tmp: Node = Node(x)
        if self.head is None:
            self.head = self.tail = tmp
        else:
            self.tail.next = tmp
            tmp.previous = self.tail
            self.tail = tmp
        self.size += 1

    def dequeue(self):
        if len(self) == 0:
            raise Exception("Queue is empty. Nothing to dequeue")

        tmp_item = self.head.item
        self.head = self.head.next
        self.size -= 1
        if self.size == 0:
            self.tail = None

        return tmp_item

    def __len__(self):
        return self.size

    def __iter__(self):
        self.iter = self.head
        return self

    def __next__(self):
        if self.iter is not None:
            item = self.iter.item
            self.iter = self.iter.next
            return item
        else:
            raise StopIteration

    def __str__(self):
        current = self.head
        msg: str = ""
        while current is not None:
            if current.next is None:
                msg += str(current.item)
            else:
                msg += f"{str(current.item)}, "
            current = current.next

        return msg

def merge(q1: Queue, q2: Queue):
    if q1.head is None:
        return q2
    if q2.head is None:
        return q1
    elif q1.head is not None and q2.head is not None:
        tmp: Queue = Queue()
        current: Node = q1.head
        while current is not None:
            tmp.enqueue(current.item)
            current = current.next
        tmp.tail.next = q2.head
        tmp.tail = q2.tail
        return tmp