#include "AStack.h"
#include <iostream>

AStack::AStack()
{
	topIndex = -1;
}

bool AStack::IsEmpty()
{
	if (topIndex == -1)
	{
		std::cout << "Stack is empty." << std::endl;
		return true;
	}
	else
	{
		std::cout << "Stack is not empty." << std::endl;
		return false;
	}
}

bool AStack::IsFull()
{
	if (topIndex == size - 1) 
	{
		std::cout << "Stack is full." << std::endl;
		return true;
	}
	else
	{
		std::cout << "Stack is not full." << std::endl;
		return false;
	}
}

void AStack::Push(ItemType item)
{
	if (IsFull())
		std::cout << "Stack is full. Cannot push item." << std::endl;
	else
	{
		std::cout << "Item pushed." << std::endl;
		topIndex++;
		array[topIndex] = item;
	}
}

void AStack::Pop()
{
	if (IsEmpty())
		std::cout << "Stack is empty. Cannot pop item." << std::endl;
	else
	{
		std::cout << "Item popped." << std::endl;
		topIndex--;
	}
}

ItemType AStack::Top()
{
	if (IsEmpty())
	{
		std::cout << "Stack is empty. No top item." << std::endl;
		return ItemType(); // Return default value (0 for int)
	}
	else
		return array[topIndex];
}
