#include <iostream>
using namespace std;

class StackBase {
public:
    virtual void push(int value) = 0;  
    virtual void pop() = 0;         
    virtual int top() = 0;             
    virtual bool isEmpty() = 0;        
    virtual bool isFull() = 0;        
};

// Derived class for Stack using Array
class Stack : public StackBase {
private:
    int* arr;     
    int capacity;  
    int topIndex;          

public:
   
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];  
        topIndex = -1;            
    }

    // Destructor to clean up memory
    ~Stack() {
        delete[] arr;   
    }

    // Push an element onto the stack
    void push(int value) override {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << value << ".\n";
        } else {
            arr[++topIndex] = value;  
            cout << value << " pushed to stack.\n";
        }
    }

    // Pop the top element from the stack
    void pop() override {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop.\n";
        } else {
            cout << arr[topIndex] << " popped from stack.\n";
            topIndex--;  
        }
    }

    // Return the top element of the stack
    int top() override {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;  
        }
        return arr[topIndex];
    }

    // Check if the stack is empty
    bool isEmpty() override {
        return topIndex == -1;
    }

    // Check if the stack is full
    bool isFull() override {
        return topIndex == capacity - 1;
    }
};

// Main function to test the Stack class
int main() {
    int capacity;

    
    cout << "Enter the capacity of the stack: ";
    cin >> capacity;

    // Create a Stack object
    Stack stack(capacity);

    int choice, value;

    // Menu-driven program for interacting with the stack
    do {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push an element\n";
        cout << "2. Pop an element\n";
        cout << "3. Display top element\n";
        cout << "4. Check if stack is empty\n";
        cout << "5. Check if stack is full\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Top element: " << stack.top() << endl;
                break;
            case 4:
                if (stack.isEmpty())
                    cout << "Stack is empty.\n";
                else
                    cout << "Stack is not empty.\n";
                break;
            case 5:
                if (stack.isFull())
                    cout << "Stack is full.\n";
                else
                    cout << "Stack is not full.\n";
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
