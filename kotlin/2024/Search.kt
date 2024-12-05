class Search() {
    private var students = ArrayList<Student>()

    fun addStudent(name: String, major: String, grade: Int): Unit {
        students.add(Student(name , major , grade))
    }

    fun binarySearch(value: Int): Int {
        var first: Int = 0
        var last: Int = students.size - 1
        var middle: Int
        var position: Int = -1
        var found: Boolean = false

        while(!found && first <= last) {
            middle = (first + last) / 2

            if(students[middle].getGrade() == value) {
                found = true
                position = middle
            }
            else if(students[middle].getGrade() > value) {
                last = middle - 1
            }
            else {
                first = middle + 1
            }
        }

        return position
    }

    fun getStudent(index: Int): Student {
        return students[index]
    }
}