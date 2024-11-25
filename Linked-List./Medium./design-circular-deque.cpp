// design-circular-deque.
class MyCircularDeque {
private:
    int* arr;
    int front, rear, capacity;

public:
    // Constructor to initialize the deque with a given size k
    MyCircularDeque(int k) {
        capacity = k;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    // Insert an element at the front of the deque
    bool insertFront(int value) {
        if ((front - 1 + capacity) % capacity == rear) {
            // Deque is full
            return false;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else {
            front = (front - 1 + capacity) % capacity;
        }
        arr[front] = value;
        return true;
    }

    // Insert an element at the rear of the deque
    bool insertLast(int value) {
        if ((rear + 1) % capacity == front) {
            // Deque is full
            return false;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        arr[rear] = value;
        return true;
    }

    // Delete the front element of the deque
    bool deleteFront() {
        if (front == -1) {
            // Deque is empty
            return false;
        }
        if (front == rear) {
            // Only one element left
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        return true;
    }

    // Delete the rear element of the deque
    bool deleteLast() {
        if (rear == -1) {
            // Deque is empty
            return false;
        }
        if (front == rear) {
            // Only one element left
            front = -1;
            rear = -1;
        } else {
            rear = (rear - 1 + capacity) % capacity;
        }
        return true;
    }

    // Get the front element of the deque
    int getFront() {
        if (front == -1) {
            // Deque is empty
            return -1;
        }
        return arr[front];
    }

    // Get the rear element of the deque
    int getRear() {
        if (rear == -1) {
            // Deque is empty
            return -1;
        }
        return arr[rear];
    }

    // Check if the deque is empty
    bool isEmpty() {
        return front == -1;
    }

    // Check if the deque is full
    bool isFull() {
        return (rear + 1) % capacity == front;
    }
};
