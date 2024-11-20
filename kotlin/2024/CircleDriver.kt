fun main() {
    val shape = Circle()
    println("--- Welcome to the Circle Calculator ---")
    println("        -- Written in Kotlin --")

    print("Radius: ")
    shape.setRadius(readln().toDouble())

    val formArea = String.format("%.3f" , shape.getArea())
    val formDiam = String.format("%.3f" , shape.getDiameter())
    val formCirc = String.format("%.3f" , shape.getCircumference())

    println("Area: $formArea")
    println("Diameter: $formDiam")
    println("Circumference: $formCirc")

    println("--- Thank you! ---")
}
