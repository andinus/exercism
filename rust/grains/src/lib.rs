pub fn square(s: u32) -> u64 {
    // s must be in range 1..=64.
    assert!((1..=64).contains(&s), "Square must be between 1 and 64");
    2_u64.pow(s - 1)
}

pub fn total() -> u64 {
    // Total grains will be sum of (2⁰, 2¹ .. 2⁶³) which is equal to 2⁶⁴ - 1.
    (2_u128.pow(64) - 1) as u64
}
