#include "note.h"

Note::Note() : content(L"") {}

Note::Note(const std::wstring& content) : content(content) {}

std::wstring Note::getContent() const {
    return content;
}

void Note::setContent(const std::wstring& content) {
    this->content = content;
}