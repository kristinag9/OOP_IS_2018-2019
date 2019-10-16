#include <iostream>

using namespace std;

class DynamicArray
{
private:
    int* arr;
    size_t size;
    size_t capacity;
    void resize()
    {
        int* tempArr = new int[2*capacity + 1];
        this->capacity = 2*capacity + 1;
        for(size_t i = 0; i < this->size; i++)
        {
            tempArr[i] = this->arr[i];
        }
        delete [] this->arr;
        this->arr = tempArr;
    }
public:
    DynamicArray();
    void push_back(int element);
    void pop_back();
    int get(size_t index) const;
    size_t getSize() const;
    ~DynamicArray();
};

DynamicArray::DynamicArray()
{
    this->size = 0;
    this->capacity = 8;
    this->arr = new int[this->capacity];
}
void DynamicArray::push_back(int element)
{
    if(this->size == this->capacity)
    {
        this->resize();
    }
        this->arr[this->size] = element;
        this->size++;
}
void DynamicArray::pop_back()
{
    this->size--;
}
int DynamicArray::get(size_t index) const
{
    return this->arr[this->size] = index;
}
size_t DynamicArray::getSize() const
{
    return this->size;
}
DynamicArray::~DynamicArray()
{
    delete [] this->arr;
}

int main()
{
    DynamicArray elem;
    for(size_t i = 0; i < 16; i++)
    {
        elem.push_back(i);
    }
    for(size_t i = 0; i < elem.getSize(); i++)
    {
        cout << elem.get(i) << endl;
    }
    return 0;
}
