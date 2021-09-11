const CARS_PER_HR: u32 = 221;

pub fn production_rate_per_hour(speed: u8) -> f64 {
    let mut cars: f64 = ((speed as u32) * CARS_PER_HR) as f64;

    match speed {
        5..=8 => cars *= 0.90,
        9 | 10 => cars *= 0.77,
        _ => {},
    }
    cars
}

pub fn working_items_per_minute(speed: u8) -> u32 {
    (production_rate_per_hour(speed) / 60.0).floor() as u32
}
