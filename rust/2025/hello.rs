use std::io;
use std::io::Write;

fn main() {
    let mut input = String::new() ;

    print!("What is your name? ") ;
    io::stdout().flush().unwrap() ;

    io::stdin().read_line(&mut input) ;
    println!("Welcome to orbit {}!", input.trim()) ;
}
