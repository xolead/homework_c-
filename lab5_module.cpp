#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>
#include <limits>
#include <sstream>

class allFiles {
public:



    //задание 1



    static void fillBinaryWithRandomData(const std::string& filename, size_t count, int minVal, int maxVal) {
        std::ofstream file(filename, std::ios::binary);

        static bool seeded = false; 

        if (!seeded) {
          std::srand(static_cast<unsigned int>(std::time(0)));
          seeded = true;
        }

        for (size_t i = 0; i < count; ++i) {
            int randomNum = minVal + (rand() % (maxVal - minVal + 1));
            file.write(reinterpret_cast<const char*>(&randomNum), sizeof(int));
        }
        file.close();
    }

    // Копирование каждого k-го элемента в другой файл
    static void copyFile(const std::string& inputFilename, const std::string& outputFilename, int k) {
        std::ifstream inputFile(inputFilename, std::ios::binary);
        std::ofstream outputFile(outputFilename, std::ios::binary);

        int num,count = 0;
        while (inputFile.read(reinterpret_cast<char*>(&num), sizeof(int))) 
        {
            count += 1;
            if (count % k == 0) {
                outputFile.write(reinterpret_cast<const char*>(&num), sizeof(int));
                count = 0;
            }
        }
        inputFile.close();
        outputFile.close();
    }

    static void viewBinaryFileInts(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);

    int num;
    while (file.read(reinterpret_cast<char*>(&num), sizeof(int))) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    file.close();
    std::cout << std::endl;
    }



    //задание 2



    static std::vector<std::vector<int>> readDataFromFile(const std::string& filename, int n) {
        std::ifstream file(filename, std::ios::binary);

        std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
        int num;
        int k = 0;

        while (file.read(reinterpret_cast<char*>(&num), sizeof(int)) && k < n * n) {
            matrix[k / n][k % n] = num;
            k++;
        }
        file.close();
        return matrix;
    }


    static void replaceWithMinColumn(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return; 

        std::vector<long long> colSums(n, 0); 
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < n; ++i) {
                colSums[j] += matrix[i][j];
            }
        }

        int minColIndex = std::distance(colSums.begin(), std::min_element(colSums.begin(), colSums.end()));

        for (int j = 0; j < n; ++j) {
            if (j != minColIndex) {
                for (int i = 0; i < n; ++i) {
                    matrix[i][j] = matrix[i][minColIndex];
                }
            }
        }
    }

    static void printMatrix(const std::vector<std::vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    std::cout << std::endl;
    }



    //задание 4
    static void fillTextFileWithRandom(const std::string& filename, size_t count,int numsPerLine, int minVal, int maxVal) {
        std::ofstream file(filename);

        static bool seeded = false; 

        if (!seeded) {
          std::srand(static_cast<unsigned int>(std::time(0)));
          seeded = true;
        }

        for (size_t i = 0; i < count; ++i) {
            for (int j = 0; j < numsPerLine; ++j) {
                file << minVal + (rand() % (maxVal - minVal + 1)) << (j == numsPerLine - 1 ? "" : " ");
            }
            file << std::endl;
        }
        file.close();
    }
    

    static long long sumEqualsIndex(const std::string& filename) {
        std::ifstream file(filename);

        long long sum = 0;
        int num;
        int index = 0;
        while (file >> num) {
            if (num == index) {
                sum += num;
            }
            index++;
        }
        file.close();
        return sum;
    }



    //5 задание



    static long long productMultiplesOfK(const std::string& filename, int k) {
        std::ifstream file(filename);

        long long product = 1;
        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            int num;
            while (ss >> num) {
                if (num % k == 0) {
                    product *= num;
                }
            }
        }
        file.close();
        return product;
    }
};

