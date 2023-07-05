use std::collections::HashSet;

pub fn anagrams_for<'a>(word: &str, possible_anagrams: &[&'a str]) -> HashSet<&'a str> {
    possible_anagrams
        .iter()
        .filter(|w| {
            w.len() == word.len()
                // a word cannot be an anagram of itself.
                && w.to_lowercase() != word.to_lowercase()
                // lexical orders of w should match if it's an anagram of word.
                && lexical_order(w) == lexical_order(word)
        })
        .map(|anagram| *anagram)
        .collect()
}

// lexical_order takes a string and returns Vec<char> where the chars are sorted
// in lexical ordering. Refer sort_unstable for details.
fn lexical_order(word: &str) -> Vec<char> {
    let mut result: Vec<char> = word.to_lowercase().chars().collect();
    result.sort_unstable();
    result
}
