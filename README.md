# Hospital Emergency Patient Management System

## Case Study 9 – Data Structures and Algorithms (DSA)

**Course:** B.Tech CSE (2025–29)  
**Semester:** II  
**Subject:** Data Structures and Algorithms-1  
**Project:** Hospital Emergency Patient Management System

---

## 1. Introduction

The Hospital Emergency Patient Management System is a Priority Queue-based application designed to manage patients according to the urgency of their medical conditions.

Patients with higher priority are treated first, while patients with equal priority are processed according to their arrival order.

## 2. Problem Statement

In hospitals, patients have different medical conditions and require different levels of attention. A normal queue processes patients according to arrival time, which may delay emergency cases.

This system uses a Priority Queue to ensure that patients with higher medical urgency are treated first.

## 3. Objectives

- Create a Priority Queue for patient records.
- Accept Patient ID, Name and Priority Level.
- Insert at least five patient records.
- Display all registered patients.
- Process the highest-priority patient first.
- Remove treated patients from the queue.
- Display the remaining waiting patients.
- Handle patients having equal priority.

## 4. DSA Concepts Used

1. **Priority Queue:** Stores patients according to priority.
2. **Insertion:** Adds new patients to the queue.
3. **Deletion:** Removes the treated patient.
4. **Queue Operations:** Maintains patient records.
5. **Priority-based Processing:** Treats the most urgent patient first.
6. **FIFO:** Patients with equal priority are processed in arrival order.

## 5. Priority Levels

| Priority | Description |
|---|---|
| 1 | Normal |
| 2 | Moderate |
| 3 | High |
| 4 | Emergency |
| 5 | Critical |

**Note:** A higher number represents a higher priority.

## 6. Sample Patient Records

| Patient ID | Patient Name | Priority |
|---|---|---|
| P101 | Rahul | 2 |
| P102 | Priya | 5 |
| P103 | Aman | 3 |
| P104 | Neha | 4 |
| P105 | Rohan | 3 |

## 7. Working of the System

1. Start the program.
2. Create an empty Priority Queue.
3. Enter patient details.
4. Insert at least five patients.
5. Display all registered patients.
6. Select the patient with the highest priority.
7. Process and remove the treated patient.
8. Display the remaining waiting patients.
9. If two patients have equal priority, process the one who arrived first.
10. Stop the program.

## 8. Normal Queue vs Priority Queue

| Normal Queue | Priority Queue |
|---|---|
| Follows FIFO order. | Follows priority order. |
| First patient arrives, first treated. | Highest-priority patient treated first. |
| Does not consider urgency. | Considers medical urgency. |
| Suitable for normal waiting systems. | Suitable for emergency management. |

## 9. Advantages

- Emergency patients receive priority.
- Efficient patient management.
- Easy insertion and deletion.
- Handles equal-priority patients fairly.
- Reduces unnecessary waiting for urgent cases.

## 10. Conclusion

The Hospital Emergency Patient Management System demonstrates the practical application of Priority Queue in Data Structures and Algorithms. It helps hospitals manage patients based on medical urgency rather than only arrival time. Patients with equal priority are processed according to their arrival order.

## 11. Technologies Used

- Programming Language: C++
- Data Structure: Priority Queue
- Concepts: Insertion, Deletion, FIFO and Priority-based Processing
- IDE: Visual Studio Code

## 12. How to Run the Project

1. Save the source code as `hospital.cpp`.
2. Open the project folder in Visual Studio Code.
3. Open the terminal.
4. Compile the program:

```bash
g++ hospital.cpp -o hospital
```

5. Run the program:

```bash
./hospital
```

**For Windows:**

```bash
hospital.exe
```

## 13. References

- Data Structures and Algorithms Course Notes.
- C++ Standard Template Library (STL).
- C++ Priority Queue Documentation: https://en.cppreference.com/w/cpp/container/priority_queue.html
