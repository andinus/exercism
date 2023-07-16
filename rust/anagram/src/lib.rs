use std::collections::HashSet;

pub fn anagrams_for<'a>(word: &str, possible_anagrams: &[&'a str]) -> HashSet<&'a str> {
    let word_lower = word.to_lowercase();
    let word_lexical = lexical_order(&word_lower);

    possible_anagrams
        .iter()
        .filter(|w| {
            // w's length should be same as word's for it to be a possible
            // anagram.
            if w.len() != word.len() {
                return false;
            }

            let w_lower = w.to_lowercase();
            // a word cannot be an anagram of itself.
            w_lower != word_lower
            // lexical orders of w should match if it's an anagram of word.
                && word_lexical == lexical_order(&w_lower)
        })
        .map(|anagram| *anagram)
        .collect()
}

// lexical_order takes a string (must be lowercased) and returns Vec<char> where
// the chars are sorted in lexical ordering. Refer sort_unstable for details.
fn lexical_order(word: &str) -> Vec<char> {
    let mut result: Vec<char> = word.chars().collect();
    result.sort_unstable();
    result
}
