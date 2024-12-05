class Student(name: String, major: String, grade: Int) {
    private var nam: String = name
    private var maj: String = major
    private var gra: Int = grade

    constructor() :this("" , "" , 0)

    fun setName(name: String): Unit {
        nam = name
    }

    fun setMajor(major: String): Unit {
        maj = major
    }

    fun setGrade(grade: Int): Unit {
        gra = grade
    }

    fun getName(): String {
        return nam
    }

    fun getMajor(): String {
        return maj
    }

    fun getGrade(): Int {
        return gra
    }

    override fun toString(): String {
        return String.format("%14s, majoring in %s, received a %d" , nam , maj , gra)
    }
}