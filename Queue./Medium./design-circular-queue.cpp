// design-circular-queue.
class MyCircularQueue {
private:
    int *arr;
    int front, rear, capacity;

public:
    MyCircularQueue(int k) {
        capacity = k;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }
    
    // Enqueue function to insert value into the queue
    bool enQueue(int value) {
        if ((rear + 1) % capacity == front) {
            return false; // Queue is full
        }
        
        if (front == -1) { // If the queue is empty
            front = 0;
        }
        
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        return true;
    }
    
    // Dequeue function to remove value from the queue
    bool deQueue() {
        if (front == -1) {
            return false; // Queue is empty
        }
        
        if (front == rear) { // Only one element is present
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        
        return true;
    }
    
    // Function to get the front element
    int Front() {
        if (front == -1) {
            return -1; // Queue is empty
        }
        return arr[front];
    }
    
    // Function to get the rear element
    int Rear() {
        if (rear == -1) {
            return -1; // Queue is empty
        }
        return arr[rear];
    }
    
    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }
    
    // Function to check if the queue is full
    bool isFull() {
        return (rear + 1) % capacity == front;
    }
};
