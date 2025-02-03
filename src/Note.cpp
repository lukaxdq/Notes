#include "Note.h"

Note::Note() : content("") {}

Note::Note(const std::string& content) : content(content) {}

std::string Note::getContent() const {
    return content;
}

void Note::setContent(const std::string& content) {
    this->content = content;
}