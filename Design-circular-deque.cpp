class MyCircularDeque {
public:
    int *arr;
    int front;
    int rear;
    int size;

    MyCircularDeque(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false; // Deque is full
        }

        if (front == -1) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size;
        }

        arr[front] = value;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false; // Deque is full
        }

        if (front == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false; // Deque is empty
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false; // Deque is empty
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }

        return true;
    }

    int getFront() {
        return front == -1 ? -1 : arr[front];
    }

    int getRear() {
        return rear == -1 ? -1 : arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear + 1) % size == front;
    }
};