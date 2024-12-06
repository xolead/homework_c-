
#include <iostream>
#include "lab6.h"


int main()
{
   setlocale(LC_ALL, "Russian");

    SinglyLinkedList<int> intList;
    intList.append(1);
    intList.append(1);
    intList.append(2);
    intList.append(3);

    std::cout << "Список целых чисел: ";
    intList.printList();
    std::cout << "Есть ли дубликаты? " << (intList.hasDuplicates() ? "Да" : "Нет") << std::endl;
    intList.removeFirst();
    std::cout << "Список после удаления первого элемента: ";
    intList.printList();
    std::cout << "Есть ли дубликаты? " << (intList.hasDuplicates() ? "Да" : "Нет") << std::endl;

    SinglyLinkedList<std::string> stringList;
    stringList.append("hello");
    stringList.append("world");
    stringList.append("hello");

    std::cout << "\nСписок строк: ";
    stringList.printList();
    std::cout << "Есть ли дубликаты? " << (stringList.hasDuplicates() ? "Да" : "Нет") << std::endl;

    //второе задание

    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(2);
    list.append(4);

    std::cout << "Список: ";
    list.printList();

    list.remove(2); // Удаляет первое вхождение 2

    std::cout << "Список после удаления первого 2: ";
    list.printList();

    list.prepend(0);
    std::cout << "Список после добавления 0 в начало: ";
    list.printList();
    list.swapNodes(1, 3);
    std::cout << "Список после обмена соседних элементов 1 и 3: ";
    list.printList();

    DoublyLinkedList<std::string> stringList;
    stringList.append("hello");
    stringList.append("hello");
    stringList.append("chipi");
    stringList.append("chipi");
    stringList.append("chapa");
    stringList.append("chapa");
    std::cout << "Список: ";
    stringList.printList();
    stringList.remove("hello");
    std::cout << "Список после удаления первого hello: ";
    stringList.printList();
    stringList.swapNodes("hello", "chipi");
    std::cout << "Список после перестановки hello and chipi: ";
    stringList.printList();
    return 0;
}

