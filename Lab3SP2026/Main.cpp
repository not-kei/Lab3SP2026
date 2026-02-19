#include <iostream>
#include "AStack.h"
using namespace std;

int main() {
    cout << " Stack Test Program \n\n";

    // Create stack
    AStack intStack;

    // Test IsEmpty on new stack
    cout << "Test 1: IsEmpty on new stack\n";
    cout << (intStack.IsEmpty() ? "PASS\n" : "FAIL\n");
    cout << endl;

    // Test Push
    cout << "Test 2: Push items\n";
    intStack.Push(10);
    intStack.Push(20);
    intStack.Push(30);
    cout << "Pushed 10, 20, 30\n\n";

    // Test Top
    cout << "Test 3: Top should be 30\n";
    cout << "Top = " << intStack.Top() << endl;
    cout << (intStack.Top() == 30 ? "PASS\n" : "FAIL\n");
    cout << endl;

    // Test IsEmpty after pushes
    cout << "Test 4: IsEmpty after pushes\n";
    cout << (!intStack.IsEmpty() ? "PASS\n" : "FAIL\n");
    cout << endl;

    // Test Pop
    cout << "Test 5: Pop one item\n";
    intStack.Pop();
    cout << "Top should now be 20\n";
    cout << "Top = " << intStack.Top() << endl;
    cout << (intStack.Top() == 20 ? "PASS\n" : "FAIL\n");
    cout << endl;

    // Pop all items
    cout << "Test 6: Pop remaining items\n";
    intStack.Pop();
    intStack.Pop();
    cout << "Stack should now be empty\n";
    cout << (intStack.IsEmpty() ? "PASS\n" : "FAIL\n");
    cout << endl;

    // Test Pop on empty stack
    cout << "Test 7: Pop on empty stack (should show message)\n";
    intStack.Pop();
    cout << endl;

    // Test Top on empty stack
    cout << "Test 8: Top on empty stack (should show message)\n";
    intStack.Top();
    cout << endl;

    // Test IsFull
    cout << "Test 9: Fill stack to test IsFull\n";
    for (int i = 0; i < 100; i++) {
        intStack.Push(i);
    }
    cout << (intStack.IsFull() ? "PASS\n" : "FAIL\n");

    cout << "\n Testing Complete \n";

    return 0;
}