#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> undoStack, redoStack;
    string currentText = "";
    int choice;

    do
    {
        cout << "\n--- Text Editor Menu ---\n";
        cout << "1. Make Change\n";
        cout << "2. Undo\n";
        cout << "3. Redo\n";
        cout << "4. Display Current Text\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            undoStack.push(currentText);

            string newText;
            cout << "Enter new text: ";
            getline(cin, newText);

            currentText = newText;

            // Clear redo history after a new change
            while (!redoStack.empty())
            {
                redoStack.pop();
            }
        }
        else if (choice == 2)
        {
            if (!undoStack.empty())
            {
                redoStack.push(currentText);
                currentText = undoStack.top();
                undoStack.pop();
            }
            else
            {
                cout << "Nothing to Undo\n";
            }
        }
        else if (choice == 3)
        {
            if (!redoStack.empty())
            {
                undoStack.push(currentText);
                currentText = redoStack.top();
                redoStack.pop();
            }
            else
            {
                cout << "Nothing to Redo\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Current Text: " << currentText << endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting program...\n";
        }
        else
        {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}