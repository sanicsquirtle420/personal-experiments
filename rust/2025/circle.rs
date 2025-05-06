use std::io;

struct Circle {
    radius: f32
}

impl Circle {
    fn get_diameter(&self) -> f32 {
        return &self.radius * 2.0 ;
    }

    fn get_area(&self) -> f32 {
        return &self.radius * &self.radius * 3.14159 ;
    }

    fn get_circumference(&self) -> f32 {
        return &self.radius * 2.0 * 3.14159 ;
    }
}

fn main() {
    println!("--- Circle Driver ---") ;
    let juno = Circle {radius : 4.28} ;
    println!("** Given Parameters **") ;
    println!("Radius = {}", juno.radius) ;
    println!("** Functions **") ;
    println!("Diameter = {}", juno.get_diameter()) ;
    println!("Area = {}", juno.get_area()) ;
    println!("Circumference = {}", juno.get_circumference()) ;
}
