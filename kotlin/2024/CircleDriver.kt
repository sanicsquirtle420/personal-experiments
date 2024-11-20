fun main() {
    println("--- Welcome to the Circle Calculator ---")
    println("        -- Written in Kotlin --")

    print("Radius: ")
    var x = readln().toDouble()

    println("Parameterized Constructor")
    val shape = Circle(x)

    println(shape.toString())

    println()
    println("Non-parameterized constructor")
    val shape2 = Circle()

    println(shape2.toString())

    println("--- Thank you! ---")
}
