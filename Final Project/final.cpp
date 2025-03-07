#include <iostream>
using namespace std;

// Node structure for Linked List
struct Node
{
    int data;
    Node *next;
};

// Linked List class
class LinkedList
{
public:
    Node *head;
    LinkedList() { 
        head = nullptr; 
    }

    void insert(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (!head)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// Merge Sort
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1, n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Binary Search
int binarySearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    LinkedList list;
    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Insert into Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Sort an Array (Merge Sort)\n";
        cout << "4. Sort an Array (Quick Sort)\n";
        cout << "5. Binary Search in Sorted Array\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            list.insert(val);
        }
        else if (choice == 2)
        {
            list.display();
        }
        else if (choice == 3 || choice == 4)
        {
            int n;
            cout << "Enter number of elements: ";
            cin >> n;
            int arr[n];
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            if (choice == 3)
                mergeSort(arr, 0, n - 1);
            else
                quickSort(arr, 0, n - 1);

            cout << "Sorted array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << "\n";
        }
        else if (choice == 5)
        {
            int n, key;
            cout << "Enter number of an  elements: ";
            cin >> n;
            int arr[n];
            cout << "Enter sorted elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            cout << "Enter value for search: ";
            cin >> key;

            int result = binarySearch(arr, n, key);
            if (result != -1)
                cout << "Value found at index " << result << "\n";
            else
                cout << "Value is not found...\n";
        }
    } while (choice != 6);

    return 0;
}