#include <iostream>

const size_t MAX_LENGTH = 100'000;


void PrintArray(double* arr, size_t size) {
    
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void New(double* arr, size_t size) {
    size_t min_ind = 0;

   
    for (size_t i = 1; i < size; ++i) {
        
        if (arr[i] < arr[min_ind]) {
            min_ind = i;
        }
    }

    for (size_t i = min_ind; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    
    arr[size - 1] = 0.0;
}


void ProcessArray(double* arr, size_t size, size_t n) {
    
    for (size_t i = 0; i < n; ++i) {
        
        
        New(arr, size - i);
    }
}

int main() {
    std::setlocale(LC_ALL, "RU");

    size_t size;
    std::cout << "Введите размер массива: ";     
    std::cin >> size;

    size_t n;
    std::cout << "Введите количество самых маленьких элементов: ";
    std::cin >> n;

    
    if (n > size) {
        std::cout << "error!";
        std::exit(-1);
    }

    
    double arr[MAX_LENGTH];

    if (size > MAX_LENGTH) {
        std::cout << "error!";
        std::exit(-1);
    }

    
    std::cout << "Введите элементы :\n";
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

  
    PrintArray(arr, size);
    std::cout << "\nNew array:\n"; 
   
    ProcessArray(arr, size, n);

   
    
    PrintArray(arr, size);

    return 0;
}