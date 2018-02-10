use std::io::*;
use std::str::*;

fn main() {
    let mut weight = String::new();
    println!("Weight (kg): ");
    let _ = stdout().flush();
    stdin().read_line(&mut weight);
    let weight: f32 = weight.trim().parse().unwrap();

    let mut height = String::new();
    println!("Height (m): ");
    let _ = stdout().flush();
    stdin().read_line(&mut height);
    let height: f32 = height.trim().parse().unwrap();

    let bmi = weight / height;

    print!("{}", bmi);
}
