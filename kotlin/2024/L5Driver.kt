fun main() {
    val work: Search = Search()
    println("***** Part 1 *****\n")
    work.addStudent("D.Va", "Ed", 45)
    work.addStudent("Sigma", "EE", 50)
    work.addStudent("Ana", "EE", 69)
    work.addStudent("Sombra", "CS", 72)
    work.addStudent("Winston", "CS", 74)
    work.addStudent("Juno", "CS", 77)
    work.addStudent("Kiriko", "ME", 78)
    work.addStudent("Soldier 76", "CS", 81)
    work.addStudent("Ashe", "CS", 83)
    work.addStudent("Cassidy", "CS", 86)
    work.addStudent("Tracer", "CS", 89)
    work.addStudent("Mauga", "CS", 90)
    work.addStudent("Junkrat", "CS", 93)
    work.addStudent("Venture", "CS", 95)
    work.addStudent("Mei", "EE", 99)
    work.addStudent("Mercy", "CS", 100) // overwatch characters ?!

    println("Welcome to the grade finder section!\n")
    println("Enter a grade to search for or -1 to exit.")
    var input: Int = readln().toInt()

    while(input != -1) {
        val index: Int = work.binarySearch(input)
        if(index == -1) {
            println("The grade $input wasn't earned by any student :(")
        }
        else {
            println("\t$input was earned by:")
            println("\t${work.getStudent(index)}")
        }

        println("Enter a grade to search for or -1 to exit.")
        input = readln().toInt()
    }
    println()

    println("***** Part 2 *****\n")
    val manipulate: Manipulate = Manipulate()
    println("The following is the Pig Latin creator section!\n")
    println("Would you like to convert a phrase to Pig Latin (y/n):")
    var response: Char = readln()[0].lowercaseChar()

    while(response != 'n') {
        println("Enter the phrase (without punctuations) that you would like to convert to Pig Latin")
        var translate: String = readln()

        translate = manipulate.convertPhrase((translate))
        println("\n\tThe phrase in Pig Latin:")
        println("\t$translate\n")

        println("Would you like to convert a phrase to Pig Latin (y/n):")
        response = readln()[0].lowercaseChar()
    }

    println("\nThan you for using the grade finder and Pig Latin translator!")
}