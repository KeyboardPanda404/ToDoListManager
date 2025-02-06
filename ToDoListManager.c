using System;
using System.Collections.Generic;

class ToDoListManager {
    static List<string> tasks = new List<string>();

    static void Main() {
        while (true) {
            Console.WriteLine("1. Add Task\n2. View Tasks\n3. Remove Task\n4. Exit");
            Console.Write("Choose an option: ");
            int choice = int.Parse(Console.ReadLine());

            switch (choice) {
                case 1:
                    Console.Write("Enter task: ");
                    tasks.Add(Console.ReadLine());
                    break;
                case 2:
                    Console.WriteLine("Tasks:");
                    for (int i = 0; i < tasks.Count; i++) {
                        Console.WriteLine($"{i + 1}. {tasks[i]}");
                    }
                    break;
                case 3:
                    Console.Write("Enter task number to remove: ");
                    int taskNumber = int.Parse(Console.ReadLine()) - 1;
                    if (taskNumber >= 0 && taskNumber < tasks.Count) {
                        tasks.RemoveAt(taskNumber);
                        Console.WriteLine("Task removed.");
                    } else {
                        Console.WriteLine("Invalid task number.");
                    }
                    break;
                case 4:
                    return;
                default:
                    Console.WriteLine("Invalid choice.");
                    break;
            }
        }
    }
}
