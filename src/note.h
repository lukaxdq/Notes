#ifndef NOTE_H
#define NOTE_H

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