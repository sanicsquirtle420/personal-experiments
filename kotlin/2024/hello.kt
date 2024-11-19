fun main() {
    print("Name: ")
    var name: String = readln()
    // readln() gets input from the user

    println("Let the kitsune guide you $name!")
    println("Welcome to orbit $name!")

    print("Number: ")
    val n: Int = readln().toInt()
    // converts a string to an int

    for(i in 1 .. n) {
        println("\t[$i] Nerf this")
    } // for loop

    println("Heroes never die, $name!")
}
