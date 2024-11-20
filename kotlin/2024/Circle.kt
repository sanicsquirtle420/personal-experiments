class Circle {
    private var radius: Double = 0.0

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
}
