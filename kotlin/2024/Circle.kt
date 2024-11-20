class Circle(rad: Double) {
    private var radius: Double = rad

    constructor(): this(0.0)

    fun setRadius(r: Double): Unit {
        radius = r
    }

    fun getRadius(): Double {
        return radius
    }

    fun getDiameter(): Double {
        return radius * 2
    }

    fun getArea(): Double {
        return radius * radius * Math.PI // can use java classes
    }

    fun getCircumference(): Double {
        return 2 * radius * Math.PI
    }

    override fun toString(): String {
        return String.format("Area: %.3f, Diameter: %.3f, Circumference: %.3f" ,
            getArea() , getDiameter() , getCircumference())
    }
}
