#ifndef ASTACK_H
#define ASTACK_H

typedef int ItemType;
class AStack
{
//Atributes
private:
	static int const size = 100;
	ItemType array[size];
	int topIndex;

//Methods
public:
	//Constructor
	AStack();

	/*
		Function: Checks the array to see if it is empty
		Precondition: Array is initialized
		Postcondition: Returns true if the array is empty, false otherwise
	*/
	bool IsEmpty();

	/*
		Function: Checks the array to see if it is full
		Precondition: Array is initialized
		Postcondition: Returns true if the array is full, false otherwise
	*/
	bool IsFull();

	/*
		Function: Adds an item to the top of the stack
		Precondition: Item is a valid integer and the stack is not full
		Postcondition: The item is added to the top of the stack, and the top index is updated accordingly. 
					   If the stack is full, an error message is displayed and the item is not added.
	*/
	void Push(ItemType item);

	/*
		Function: Removes the item at the top of the stack
		Precondition: The stack is not empty
		Postcondition: The item at the top of the stack is removed, and the top index is updated accordingly. 
					   If the stack is empty, an error message is displayed and no item is removed.
	*/
	void Pop();

	/*
		Function: Returns the item at the top of the stack without removing it
		Precondition: The stack is not empty
		Postcondition: The item at the top of the stack is returned. If the stack is empty, an error message 
					   is displayed and a default value (e.g., 0) is returned.
	*/
	ItemType Top();
};

#endif 
