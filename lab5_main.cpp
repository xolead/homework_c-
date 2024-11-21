#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>
#include <limits>
#include <sstream>
#include "lab5.h"



int main() {
    std::string inputFile = "input.bin";
    std::string outputFile = "output.bin";
    // для создания бинарника input.bin
    size_t numElements = 9;
    int minValue = 1;
    int maxValue = 9;
    int k = 3;

    std::cout<<"1 задание "<<std::endl;
    allFiles::fillBinaryWithRandomData(inputFile, numElements, minValue, maxValue);
    
    allFiles::copyFile(inputFile, outputFile, k);
    
    std::cout << "Файл " << inputFile << " заполнен случайными числами.\n";
    allFiles::viewBinaryFileInts(inputFile);
    std::cout << "Каждый элемент " << k << "-го места скопирован в " << outputFile << ".\n";
    allFiles::viewBinaryFileInts(outputFile);

    //2 задание - создание матрицы
    std::cout<<"2 задание "<<std::endl;
    std::string filename = "input.bin";
    int n = 3; // Размер матрицы

    std::vector<std::vector<int>> matrix = allFiles::readDataFromFile(filename, n);
    std::cout<<"матрица до замены столбцов"<<std::endl;
    allFiles::printMatrix(matrix);
    allFiles::replaceWithMinColumn(matrix);
    std::cout<<"матрица после замены столбцов на столбец с минимальной суммой"<<std::endl;
    allFiles::printMatrix(matrix);


    //4 задание - сумма элементов файла, которые равны своему индексу
    std::cout<<"4 задание "<<std::endl;
    std::string txtFile = "4.txt";
    int numsPerLine = 1;
    allFiles::fillTextFileWithRandom(txtFile, numElements, numsPerLine, minValue, maxValue);
    filename = "4.txt";
    long long sum = allFiles::sumEqualsIndex(filename);
    std::cout << "Cумма элементов файла, которые равны своему индексу = " << sum << std::endl << std::endl;


    //5 задание 
    std::cout<<"5 задание "<<std::endl;
    filename = "5.txt";
    size_t numLines = 2;
    numsPerLine = 2;
    k = 3;

    allFiles::fillTextFileWithRandom(filename, numLines, numsPerLine, minValue, maxValue);
    std::cout << "Файл " << filename << " заполнен случайными данными.\n";

    long long product = allFiles::productMultiplesOfK(filename, k);
    std::cout << "Произведение элементов, кратных " << k << ": " << product << std::endl;


    return 0;
}