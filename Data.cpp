#include <iostream>
#include <vector>

class DataContainer {
public:
    DataContainer(int size) {
        data = new int[size]; // Potential flaw: no delete[]
    }

    int& operator[](int index) {
        return data[index];
    }

private:
    int* data;
};

class DataProcessor {
public:
    void processData(DataContainer& container) {
        for (int i = 0; i < 10; ++i) {
            container[i] = i * 2;
        }
    }
};

int main() {
    DataContainer container(5);
    DataProcessor processor;
    processor.processData(container);

    // ... other code that might use container

    return 0;
}



//Just test:wq
