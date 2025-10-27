import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Course {
    private String courseName;

    Course(String courseName) {
        this.courseName = courseName;
    }

    public String getCourseName() {
        return courseName;
    }

    @Override
    public String toString() {
        return "Course: " + courseName;
    }
}

class Student {
    private String name;
    private int id;
    private String department;
    private String registeredCourse;
    private String grades;

    public Student(String name, int id, String department) {
        this.name = name;
        this.id = id;
        this.department = department;
    }

    // Getters
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public String getRegisteredCourse() {
        return registeredCourse;
    }

    // Setters
    public void setRegisteredCourse(String registeredCourse) {
        this.registeredCourse = registeredCourse;
    }

    public void setGrades(String grades) {
        this.grades = grades;
    }

    // Methods
    public static Student registerForCourses(Scanner scanner, List<Course> availableCourses) {
        System.out.print("Enter Your Name: ");
        String name = scanner.next();
        System.out.print("Enter Your ID: ");
        int id = scanner.nextInt();
        System.out.print("Enter Your Department: ");
        String department = scanner.next();

        // Create a new student with input data
        Student student = new Student(name, id, department);

        // Display available courses and allow student to register
        System.out.println("Available Courses:");
        for (int i = 0; i < availableCourses.size(); i++) {
            System.out.println((i + 1) + ": " + availableCourses.get(i).getCourseName());
        }
        System.out.print("Enter the number of the course to register: ");
        int courseIndex = scanner.nextInt() - 1;

        if (courseIndex >= 0 && courseIndex < availableCourses.size()) {
            student.setRegisteredCourse(availableCourses.get(courseIndex).getCourseName());
            System.out.println("You have successfully registered for: " + availableCourses.get(courseIndex).getCourseName());
        } else {
            System.out.println("Invalid course selection.");
        }

        return student;
    }

    public void viewCourseSchedule() {
        if (registeredCourse != null) {
            System.out.println("Your registered course: " + registeredCourse);
        } else {
            System.out.println("You are not registered for any course.");
        }
    }

    public void dropCourse() {
        if (registeredCourse != null) {
            System.out.println("Dropping course: " + registeredCourse);
            registeredCourse = null;
        } else {
            System.out.println("No course to drop.");
        }
    }

    public void downloadAdmitCard() {
        System.out.println("Admit card downloaded for: " + name);
    }

    public void viewGrade() {
        if (grades != null) {
            System.out.println("Your grades: " + grades);
        } else {
            System.out.println("No grades available yet.");
        }
    }
}

class Chairman {
    private String name;
    private String department;

    public void approveCourseOffering() {
        System.out.println("Course offering approved.");
    }

    public void assignInstructors() {
        System.out.println("Instructors assigned.");
    }

    public void reviewStudentRegistration() {
        System.out.println("Student registrations reviewed.");
    }

    public void generateReports() {
        System.out.println("Reports generated.");
    }
}

class ExamController {
    public void scheduleExam() {
        System.out.println("Exam scheduled.");
    }

    public void generateAdmitCard() {
        System.out.println("Admit card generated.");
    }

    public void publishExamResult() {
        System.out.println("Exam results published.");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        List<Course> availableCourses = new ArrayList<>();
        availableCourses.add(new Course("OOP"));
        availableCourses.add(new Course("Algorithm"));
        availableCourses.add(new Course("Mathematics"));

        Student loggedInStudent = null;

        while (true) {
            System.out.println("\nChoose an action:");
            System.out.println("1: Student Register for Courses");
            System.out.println("2: View Course Schedule");
            System.out.println("3: Drop Course");
            System.out.println("4: Download Admit Card");
            System.out.println("5: View Grades");
            System.out.println("6: Exit");

            int option = scanner.nextInt();

            switch (option) {
                case 1:
                    loggedInStudent = Student.registerForCourses(scanner, availableCourses);
                    break;
                case 2:
                    if (loggedInStudent != null) {
                        loggedInStudent.viewCourseSchedule();
                    } else {
                        System.out.println("Please register first.");
                    }
                    break;
                case 3:
                    if (loggedInStudent != null) {
                        loggedInStudent.dropCourse();
                    } else {
                        System.out.println("Please register first.");
                    }
                    break;
                case 4:
                    if (loggedInStudent != null) {
                        loggedInStudent.downloadAdmitCard();
                    } else {
                        System.out.println("Please register first.");
                    }
                    break;
                case 5:
                    if (loggedInStudent != null) {
                        loggedInStudent.viewGrade();
                    } else {
                        System.out.println("Please register first.");
                    }
                    break;
                case 6:
                    System.out.println("Exiting...");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid option. Please choose again.");
                    break;
            }
        }
    }
}