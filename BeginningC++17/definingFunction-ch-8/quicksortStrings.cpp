/* The Quicksort Algorithm */
#include <iostream>
#include <iomanip>
#include <memory>   /* for shared_ptr of strings */
#include <string>
#include <string_view>
#include <vector>
using Words = std::vector<std::shared_ptr<std::string>>;
void swap(Words& words, size_t first, size_t second);
void sort(Words& words);
void sort(Words& words, size_t start, size_t end);
void extract_words(Words& words, std::string_view text, std::string_view separators);
void show_words(const Words& words);
size_t max_word_length(const Words& words);
int main(){

}