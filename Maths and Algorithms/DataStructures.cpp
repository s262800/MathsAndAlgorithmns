#include "DataStructures.h"



template<typename T>
Stack<T>::Stack()
{
    Data = T[Size];
}

template<typename T>
inline T Stack<T>::Pop()
{
    T lastIndex = Data[Size];
    Data[Size] = null;
    Stack.Size--;

    return Data[lastIndex];
}

template<typename T>
inline T Stack<T>::Peek()
{
    return Data[Size];
}

template<typename T>
inline void Stack<T>::Push(T dataToPush)
{
    Data[index] = dataToPush;
    index++;
}

template<typename T>
Queue<T>::Queue()
{
    Data = T[Size];
}

template<typename T>
inline T Queue<T>::Pop()
{
    T firstIndex = Data[0];
    Data[0] = null;


}

template<typename T>
T Queue<T>::Peek()
{
    return Data[0];
}

template<typename T>
void Queue<T>::Push(T dataToPush)
{
    Data[index] = dataToPush;
    index++;
}

template<typename T>
inline void MinimumBinaryHeap<T>::Add(T DataToAdd)
{
}

template<typename T>
T MinimumBinaryHeap<T>::Remove()
{
    return T();
}

template<typename T>
void MinimumBinaryHeap<T>::HeapifyUp()
{
}

template<typename T>
void MinimumBinaryHeap<T>::HeapifyDown()
{
}
