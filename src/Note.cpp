#ifndef NOTE_H
#define NOTE_H
#include "Note.h"
#include <string>

class Note {
public:
    Note();
    Note(const std::string& content);
    std::string getContent() const;
    void setContent(const std::string& content);

private:
    std::string content;
};

#endif // NOTE_H

Note::Note() : content("") {}

Note::Note(const std::string& content) : content(content) {}

std::string Note::getContent() const {
    return content;
}

void Note::setContent(const std::string& content) {
    this->content = content;
}