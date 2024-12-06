#include <iostream>
#include <locale.h>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(const T& data) : data(data), next(nullptr) {}
};

template <typename T>
class SinglyLinkedList {
private:
    Node<T>* head;

public:
    SinglyLinkedList() : head(nullptr) {}


    void append(const T& data) {
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void removeFirst() {
        if (head == nullptr) {}
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    bool hasDuplicates() {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* runner = current->next;
            while (runner != nullptr) {
                if (current->data == runner->data) {
                    return true;
                }
                runner = runner->next;
            }
            current = current->next;
        }
        return false;
    }

    void printList() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }


//second zadan
template <typename T>
class Node {
public:
    T data;
    Node* prev;
    Node* next;
    Node(const T& data) : data(data), prev(nullptr), next(nullptr) {}
};

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}


    void append(const T& data) {
        Node<T>* newNode = new Node<T>(data);
        if (tail == nullptr) {
            head = tail = newNode;
        }
        else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void prepend(const T& data) {
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    bool remove(const T& deleteData) {
        Node<T>* current = head;
        while (current != nullptr) {
            if (current->data == deleteData) {
                if (current == head) {
                    head = current->next;
                    if (head != nullptr) head->prev = nullptr;
                }
                else if (current == tail) {
                    tail = current->prev;
                    tail->next = nullptr;
                }
                else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    Node<T>* findNode(const T& data) {
        Node<T>* current = head;
        while (current != nullptr) {
            if (current->data == data) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    void swapNodes(const T& data1, const T& data2) {
        Node<T>* node1 = findNode(data1);
        Node<T>* node2 = findNode(data2);
        if (node1->next == node2 || node1->prev == node2) {
            Node<T>* next = node2->next;
            if (next != nullptr) next->prev = node1;
            node2->next = node1;
            node2->prev = node1->prev;
            if (node1->prev != nullptr) node1->prev->next = node2;
            node1->prev = node2;
            node1->next = next;
            if (node2->prev == nullptr) head = node2;
            if (node1->next == nullptr) tail = node1;
        }
    }

    void printList() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }


};
